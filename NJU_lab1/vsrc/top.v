module top(
  input  SW0, SW1, SW2, SW3, SW4, SW5, SW6, SW7, SW8, SW9,
  output LEDR0, LEDR1
);

  wire [1:0] Y;
  wire [7:0] X;
  wire [1:0] F;

  assign Y = {SW1, SW0};

  assign X = {SW9, SW8, SW7, SW6, SW5, SW4, SW3, SW2};

  mux41_2bit m0 (.X(X), .Y(Y), .F(F));

  assign {LEDR1, LEDR0} = F;

endmodule

module mux41_2bit(
  input  [7:0] X,
  input  [1:0] Y,
  output [1:0] F
);


  MuxKeyWithDefault #(4, 2, 2) i0 (
    F,
    Y,
    2'b00,
    {
      2'b00, X[1:0],
      2'b01, X[3:2],
      2'b10, X[5:4],
      2'b11, X[7:6]
    }
  );

endmodule
