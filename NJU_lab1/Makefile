# ===== 实验一 Makefile（.RECIPEPREFIX 用 > 代替 Tab，杜绝缩进坑） =====
TOPNAME = top
NXDC_FILES = constr/top.nxdc
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc -O3 --x-assign fast --x-initial fast --noassert
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)
$(shell mkdir -p $(BUILD_DIR))

# 约束文件 -> 自动生成引脚绑定代码
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# 源文件（显式列出——sim_main.cpp 不能混进上板编译）
VSRCS = vsrc/muxkey.v vsrc/top.v
CSRCS = csrc/main.cpp $(SRC_AUTO_BIND)

# NVBoard 官方构建脚本（.bashrc 里已 export NVBOARD_HOME）
include $(NVBOARD_HOME)/scripts/nvboard.mk

INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) --top-module $(TOPNAME) $^ $(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) --Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

# 上板：编译并弹出 NVBoard 窗口
run: $(BIN)
	@$^

# 纯功能仿真：不接NVBoard，跑穷举自检
sim:
	$(VERILATOR) --cc --exe --build --top-module $(TOPNAME) $(VSRCS) csrc/sim_main.cpp --Mdir $(BUILD_DIR)/simobj -o $(abspath $(BUILD_DIR)/sim)
	@$(BUILD_DIR)/sim

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run sim
