module top(
  input  [7:0] SW,
  input        EN,
  output [2:0] Y,
  output       VALID,
  output [6:0] HEX
);

  wire [2:0] code;

  encoder83 u_enc (.x(SW), .en(EN), .y(code), .valid(VALID));


  bcd7seg u_seg (.b({VALID, code}), .h(HEX));

  assign Y = code;

endmodule

// ===== 8-3 高位优先编码器（for 循环，同讲义 4-2 优先编码器写法）=====
module encoder83(
  input  [7:0] x,
  input        en,
  output reg [2:0] y,
  output reg       valid
);
  integer i;
  always @(x or en) begin
    y     = 3'b000;
    valid = 1'b0;
    if (en) begin
      for (i = 0; i <= 7; i = i + 1)
        if (x[i] == 1'b1) begin
          y     = i[2:0];
          valid = 1'b1;
        end
    end
  end
endmodule


module bcd7seg(
  input  [3:0] b,
  output reg [6:0] h
);
  always @(*) begin
    if (b[3] == 1'b0)              // 无有效输入
      h = 7'b1111110;              // 只亮 G 段，显示 '-'
    else case (b[2:0])
      3'd0: h = 7'b0000001;        // 0
      3'd1: h = 7'b1001111;        // 1
      3'd2: h = 7'b0010010;        // 2
      3'd3: h = 7'b0000110;        // 3
      3'd4: h = 7'b1001100;        // 4
      3'd5: h = 7'b0100100;        // 5
      3'd6: h = 7'b0100000;        // 6
      3'd7: h = 7'b0001111;        // 7
      default: h = 7'b0000000;
    endcase
  end
endmodule
