/////////////////////////////////////////////////////////////
// Created by: Synopsys Design Compiler(R)
// Version   : R-2020.09-SP2
// Date      : Thu Apr 13 14:52:30 2023
/////////////////////////////////////////////////////////////


module vc_EnResetReg_p_nbits1 ( clk, reset, q, d, en );
  output [0:0] q;
  input [0:0] d;
  input clk, reset, en;
  wire   N0, N1, N2, N3, N4;

  \**SEQGEN**  \q_reg[0]  ( .clear(1'b0), .preset(1'b0), .next_state(N4), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[0]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(N2) );
  SELECT_OP C19 ( .DATA1(1'b0), .DATA2(d[0]), .CONTROL1(N0), .CONTROL2(N1), 
        .Z(N4) );
  GTECH_BUF B_0 ( .A(reset), .Z(N0) );
  GTECH_BUF B_1 ( .A(N3), .Z(N1) );
  GTECH_OR2 C22 ( .A(reset), .B(en), .Z(N2) );
  GTECH_NOT I_0 ( .A(reset), .Z(N3) );
endmodule


module vc_EnReg_p_nbits32 ( clk, reset, q, d, en );
  output [31:0] q;
  input [31:0] d;
  input clk, reset, en;


  \**SEQGEN**  \q_reg[31]  ( .clear(1'b0), .preset(1'b0), .next_state(d[31]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[31]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[30]  ( .clear(1'b0), .preset(1'b0), .next_state(d[30]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[30]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[29]  ( .clear(1'b0), .preset(1'b0), .next_state(d[29]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[29]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[28]  ( .clear(1'b0), .preset(1'b0), .next_state(d[28]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[28]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[27]  ( .clear(1'b0), .preset(1'b0), .next_state(d[27]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[27]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[26]  ( .clear(1'b0), .preset(1'b0), .next_state(d[26]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[26]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[25]  ( .clear(1'b0), .preset(1'b0), .next_state(d[25]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[25]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[24]  ( .clear(1'b0), .preset(1'b0), .next_state(d[24]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[24]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[23]  ( .clear(1'b0), .preset(1'b0), .next_state(d[23]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[23]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[22]  ( .clear(1'b0), .preset(1'b0), .next_state(d[22]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[22]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[21]  ( .clear(1'b0), .preset(1'b0), .next_state(d[21]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[21]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[20]  ( .clear(1'b0), .preset(1'b0), .next_state(d[20]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[20]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[19]  ( .clear(1'b0), .preset(1'b0), .next_state(d[19]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[19]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[18]  ( .clear(1'b0), .preset(1'b0), .next_state(d[18]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[18]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[17]  ( .clear(1'b0), .preset(1'b0), .next_state(d[17]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[17]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[16]  ( .clear(1'b0), .preset(1'b0), .next_state(d[16]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[16]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[15]  ( .clear(1'b0), .preset(1'b0), .next_state(d[15]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[15]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[14]  ( .clear(1'b0), .preset(1'b0), .next_state(d[14]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[14]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[13]  ( .clear(1'b0), .preset(1'b0), .next_state(d[13]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[13]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[12]  ( .clear(1'b0), .preset(1'b0), .next_state(d[12]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[12]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[11]  ( .clear(1'b0), .preset(1'b0), .next_state(d[11]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[11]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[10]  ( .clear(1'b0), .preset(1'b0), .next_state(d[10]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[10]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[9]  ( .clear(1'b0), .preset(1'b0), .next_state(d[9]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[9]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[8]  ( .clear(1'b0), .preset(1'b0), .next_state(d[8]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[8]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[7]  ( .clear(1'b0), .preset(1'b0), .next_state(d[7]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[7]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[6]  ( .clear(1'b0), .preset(1'b0), .next_state(d[6]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[6]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[5]  ( .clear(1'b0), .preset(1'b0), .next_state(d[5]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[5]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[4]  ( .clear(1'b0), .preset(1'b0), .next_state(d[4]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[4]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[3]  ( .clear(1'b0), .preset(1'b0), .next_state(d[3]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[3]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[2]  ( .clear(1'b0), .preset(1'b0), .next_state(d[2]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[2]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[1]  ( .clear(1'b0), .preset(1'b0), .next_state(d[1]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[1]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[0]  ( .clear(1'b0), .preset(1'b0), .next_state(d[0]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[0]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
endmodule


module vc_EnReg_p_nbits6 ( clk, reset, q, d, en );
  output [5:0] q;
  input [5:0] d;
  input clk, reset, en;


  \**SEQGEN**  \q_reg[5]  ( .clear(1'b0), .preset(1'b0), .next_state(d[5]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[5]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[4]  ( .clear(1'b0), .preset(1'b0), .next_state(d[4]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[4]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[3]  ( .clear(1'b0), .preset(1'b0), .next_state(d[3]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[3]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[2]  ( .clear(1'b0), .preset(1'b0), .next_state(d[2]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[2]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[1]  ( .clear(1'b0), .preset(1'b0), .next_state(d[1]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[1]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
  \**SEQGEN**  \q_reg[0]  ( .clear(1'b0), .preset(1'b0), .next_state(d[0]), 
        .clocked_on(clk), .data_in(1'b0), .enable(1'b0), .Q(q[0]), 
        .synch_clear(1'b0), .synch_preset(1'b0), .synch_toggle(1'b0), 
        .synch_enable(en) );
endmodule


module vc_EqComparator_p_nbits32 ( in0, in1, out );
  input [31:0] in0;
  input [31:0] in1;
  output out;


  EQ_UNS_OP eq_141 ( .A(in0), .B(in1), .Z(out) );
endmodule


module proc_ProcDpathAlu ( in0, in1, fn, out, ops_eq, ops_lt, ops_ltu );
  input [31:0] in0;
  input [31:0] in1;
  input [5:0] fn;
  output [31:0] out;
  output ops_eq, ops_lt, ops_ltu;
  wire   N0, N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12, N13, N14, N15,
         N16, N17, N18, N19, N20, N21, N22, N23, N24, N25, N26, N27, N28, N29,
         N30, N31, N32, N33, N34, N35, N36, N37, N38, N39, N40, N41, N42, N43,
         N44, N45, N46, N47, N48, N49, N50, N51, N52, N53, N54, N55, N56, N57,
         N58, N59, N60, N61, N62, N63, N64, N65, N66, N67, N68, N69, N70, N71,
         N72, N73, N74, N75, N76, N77, N78, N79, N80, N81, N82, N83, N84, N85,
         N86, N87, N88, N89, N90, N91, N92, N93, N94, N95, N96, N97, N98, N99,
         N100, N101, N102, N103, N104, N105, N106, N107, N108, N109, N110,
         N111, N112, N113, N114, N115, N116, N117, N118, N119, N120, N121,
         N122, N123, N124, N125, N126, N127, N128, N129, N130, N131, N132,
         N133, N134, N135, N136, N137, N138, N139, N140, N141, N142, N143,
         N144, N145, N146, N147, N148, N149, N150, N151, N152, N153, N154,
         N155, N156, N157, N158, N159, N160, N161, N162, N163, N164, N165,
         N166, N167, N168, N169, N170, N171, N172, N173, N174, N175, N176,
         N177, N178, N179, N180, N181, N182, N183, N184, N185, N186, N187,
         N188, N189, N190, N191, N192, N193, N194, N195, N196, N197, N198,
         N199, N200, N201, N202, N203, N204, N205, N206, N207, N208, N209,
         N210, N211, N212, N213, N214, N215, N216, N217, N218, N219, N220,
         N221, N222, N223, N224, N225, N226, N227, N228, N229, N230, N231,
         N232, N233, N234, N235, N236, N237, N238, N239, N240, N241, N242,
         N243, N244, N245, N246, N247, N248, N249, N250, N251, N252, N253,
         N254, N255, N256, N257, N258, N259, N260, N261, N262, N263, N264,
         N265, N266, N267, N268, N269, N270, N271, N272, N273, N274, N275,
         N276, N277, N278, N279, N280, N281, N282, N283, N284, N285, N286,
         N287, N288, N289, N290, N291, N292, N293, N294, N295, N296, N297,
         N298, N299, N300, N301, N302, N303, N304, N305, N306, N307, N308,
         N309, N310, N311, N312, N313, N314, N315, N316, N317, N318, N319,
         N320, N321, N322, N323, N324, N325, N326, N327, N328, N329, N330,
         N331, N332, N333, N334, N335, N336, N337, N338, N339, N340, N341,
         N342, N343, N344, N345, N346, N347, N348, N349, N350, N351, N352,
         N353, N354, N355, N356, N357, N358, N359, N360, N361, N362, N363,
         N364, N365, N366, N367, N368, N369, N370, N371, N372, N373, N374,
         N375, N376, N377, N378, N379, N380, N381, N382, N383, N384, N385,
         N386, N387, N388, N389, N390, N391, N392, N393, N394, N395, N396,
         N397, N398, N399, N400, N401, N402, N403, N404, N405, N406, N407,
         N408, N409, N410, N411, N412, N413, N414, N415, N416, N417, N418,
         N419, N420, N421, N422, N423, N424, N425, N426, N427, N428, N429,
         N430, N431, N432, N433, N434, N435, N436, N437, N438, N439, N440,
         N441, N442, N443, N444, N445, N446, N447, N448, N449, N450, N451,
         N452, N453, N454, N455, N456, N457, N458, N459, N460, N461, N462,
         N463, N464, N465, N466, N467, N468, N469, N470, N471, N472, N473,
         N474, N475, N476, N477, N478, N479, N480, N481, N482, N483, N484,
         N485, N486, N487, N488, N489, N490, N491, N492, N493, N494, N495,
         N496, N497, N498, N499, N500, N501, N502, N503, N504, N505, N506,
         N507, N508, N509, N510, N511, N512, N513, N514, N515, N516, N517,
         N518, N519, N520, N521, N522, N523, N524, N525, N526, N527, N528,
         N529, N530, N531;
  wire   SYNOPSYS_UNCONNECTED__0;

  GTECH_AND2 C13 ( .A(N21), .B(N50), .Z(N22) );
  GTECH_AND2 C14 ( .A(N43), .B(N31), .Z(N23) );
  GTECH_AND2 C15 ( .A(N22), .B(N23), .Z(N24) );
  GTECH_AND2 C16 ( .A(N24), .B(N32), .Z(N25) );
  GTECH_OR2 C20 ( .A(N33), .B(N52), .Z(N26) );
  GTECH_OR2 C21 ( .A(N26), .B(N32), .Z(N27) );
  GTECH_OR2 C27 ( .A(N35), .B(fn[0]), .Z(N29) );
  GTECH_OR2 C31 ( .A(fn[4]), .B(fn[3]), .Z(N33) );
  GTECH_OR2 C32 ( .A(fn[2]), .B(N31), .Z(N34) );
  GTECH_OR2 C33 ( .A(N33), .B(N34), .Z(N35) );
  GTECH_OR2 C34 ( .A(N35), .B(N32), .Z(N36) );
  GTECH_OR2 C39 ( .A(N33), .B(N63), .Z(N38) );
  GTECH_OR2 C40 ( .A(N38), .B(fn[0]), .Z(N39) );
  GTECH_OR2 C47 ( .A(N38), .B(N32), .Z(N41) );
  GTECH_OR2 C52 ( .A(N43), .B(N31), .Z(N44) );
  GTECH_OR2 C53 ( .A(N33), .B(N44), .Z(N45) );
  GTECH_OR2 C54 ( .A(N45), .B(fn[0]), .Z(N46) );
  GTECH_OR2 C62 ( .A(N45), .B(N32), .Z(N48) );
  GTECH_OR2 C65 ( .A(fn[4]), .B(N50), .Z(N51) );
  GTECH_OR2 C66 ( .A(fn[2]), .B(fn[1]), .Z(N52) );
  GTECH_OR2 C67 ( .A(N51), .B(N52), .Z(N53) );
  GTECH_OR2 C68 ( .A(N53), .B(fn[0]), .Z(N54) );
  GTECH_OR2 C75 ( .A(N53), .B(N32), .Z(N56) );
  GTECH_OR2 C82 ( .A(N60), .B(fn[0]), .Z(N58) );
  GTECH_OR2 C89 ( .A(N51), .B(N34), .Z(N60) );
  GTECH_OR2 C90 ( .A(N60), .B(N32), .Z(N61) );
  GTECH_OR2 C95 ( .A(N43), .B(fn[1]), .Z(N63) );
  GTECH_OR2 C96 ( .A(N51), .B(N63), .Z(N64) );
  GTECH_OR2 C97 ( .A(N64), .B(fn[0]), .Z(N65) );
  GTECH_OR2 C105 ( .A(N64), .B(N32), .Z(N67) );
  GTECH_OR2 C108 ( .A(N21), .B(fn[3]), .Z(N69) );
  GTECH_OR2 C110 ( .A(N69), .B(N52), .Z(N70) );
  GTECH_OR2 C111 ( .A(N70), .B(fn[0]), .Z(N71) );
  GTECH_OR2 C118 ( .A(N70), .B(N32), .Z(N73) );
  GTECH_AND2 C120 ( .A(fn[4]), .B(fn[1]), .Z(N75) );
  GTECH_AND2 C121 ( .A(fn[3]), .B(fn[2]), .Z(N76) );
  GTECH_AND2 C122 ( .A(N76), .B(fn[1]), .Z(N77) );
  GTECH_AND2 C123 ( .A(fn[4]), .B(fn[2]), .Z(N78) );
  GTECH_AND2 C124 ( .A(fn[4]), .B(fn[3]), .Z(N79) );
  ASH_UNS_UNS_OP sll_31 ( .A(in0), .SH(in1[4:0]), .Z({N176, N175, N174, N173, 
        N172, N171, N170, N169, N168, N167, N166, N165, N164, N163, N162, N161, 
        N160, N159, N158, N157, N156, N155, N154, N153, N152, N151, N150, N149, 
        N148, N147, N146, N145}) );
  LT_TC_OP lt_33 ( .A(in0), .B(in1), .Z(N209) );
  LT_UNS_OP lt_34 ( .A(in0), .B(in1), .Z(N210) );
  ASHR_UNS_UNS_OP srl_38 ( .A(in0), .SH(in1[4:0]), .Z({N338, N337, N336, N335, 
        N334, N333, N332, N331, N330, N329, N328, N327, N326, N325, N324, N323, 
        N322, N321, N320, N319, N318, N317, N316, N315, N314, N313, N312, N311, 
        N310, N309, N308, N307}) );
  ASHR_TC_UNS_OP sra_39 ( .A(in0), .SH(in1[4:0]), .Z({N370, N369, N368, N367, 
        N366, N365, N364, N363, N362, N361, N360, N359, N358, N357, N356, N355, 
        N354, N353, N352, N351, N350, N349, N348, N347, N346, N345, N344, N343, 
        N342, N341, N340, N339}) );
  vc_EqComparator_p_nbits32 cond_eq_comp ( .in0(in0), .in1(in1), .out(ops_eq)
         );
  LT_TC_OP lt_67 ( .A(in0), .B(in1), .Z(ops_lt) );
  LT_UNS_OP lt_68 ( .A(in0), .B(in1), .Z(ops_ltu) );
  ADD_UNS_OP add_24 ( .A(in0), .B(in1), .Z({N112, N111, N110, N109, N108, N107, 
        N106, N105, N104, N103, N102, N101, N100, N99, N98, N97, N96, N95, N94, 
        N93, N92, N91, N90, N89, N88, N87, N86, N85, N84, N83, N82, N81}) );
  SUB_UNS_OP sub_30 ( .A(in0), .B(in1), .Z({N144, N143, N142, N141, N140, N139, 
        N138, N137, N136, N135, N134, N133, N132, N131, N130, N129, N128, N127, 
        N126, N125, N124, N123, N122, N121, N120, N119, N118, N117, N116, N115, 
        N114, N113}) );
  ADD_UNS_OP add_43 ( .A(in0), .B(in1), .Z({N401, N400, N399, N398, N397, N396, 
        N395, N394, N393, N392, N391, N390, N389, N388, N387, N386, N385, N384, 
        N383, N382, N381, N380, N379, N378, N377, N376, N375, N374, N373, N372, 
        N371, SYNOPSYS_UNCONNECTED__0}) );
  ADD_UNS_OP add_46 ( .A(in0[31:24]), .B(in1[31:24]), .Z({N409, N408, N407, 
        N406, N405, N404, N403, N402}) );
  ADD_UNS_OP add_46_2 ( .A(in0[23:16]), .B(in1[23:16]), .Z({N417, N416, N415, 
        N414, N413, N412, N411, N410}) );
  ADD_UNS_OP add_46_3 ( .A(in0[15:8]), .B(in1[15:8]), .Z({N425, N424, N423, 
        N422, N421, N420, N419, N418}) );
  ADD_UNS_OP add_46_4 ( .A(in0[7:0]), .B(in1[7:0]), .Z({N433, N432, N431, N430, 
        N429, N428, N427, N426}) );
  SUB_UNS_OP sub_48 ( .A(in0[31:24]), .B(in1[31:24]), .Z({N441, N440, N439, 
        N438, N437, N436, N435, N434}) );
  SUB_UNS_OP sub_48_2 ( .A(in0[23:16]), .B(in1[23:16]), .Z({N449, N448, N447, 
        N446, N445, N444, N443, N442}) );
  SUB_UNS_OP sub_48_3 ( .A(in0[15:8]), .B(in1[15:8]), .Z({N457, N456, N455, 
        N454, N453, N452, N451, N450}) );
  SUB_UNS_OP sub_48_4 ( .A(in0[7:0]), .B(in1[7:0]), .Z({N465, N464, N463, N462, 
        N461, N460, N459, N458}) );
  SELECT_OP C354 ( .DATA1({N112, N111, N110, N109, N108, N107, N106, N105, 
        N104, N103, N102, N101, N100, N99, N98, N97, N96, N95, N94, N93, N92, 
        N91, N90, N89, N88, N87, N86, N85, N84, N83, N82, N81}), .DATA2({N144, 
        N143, N142, N141, N140, N139, N138, N137, N136, N135, N134, N133, N132, 
        N131, N130, N129, N128, N127, N126, N125, N124, N123, N122, N121, N120, 
        N119, N118, N117, N116, N115, N114, N113}), .DATA3({N176, N175, N174, 
        N173, N172, N171, N170, N169, N168, N167, N166, N165, N164, N163, N162, 
        N161, N160, N159, N158, N157, N156, N155, N154, N153, N152, N151, N150, 
        N149, N148, N147, N146, N145}), .DATA4({N177, N178, N179, N180, N181, 
        N182, N183, N184, N185, N186, N187, N188, N189, N190, N191, N192, N193, 
        N194, N195, N196, N197, N198, N199, N200, N201, N202, N203, N204, N205, 
        N206, N207, N208}), .DATA5({1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        N209}), .DATA6({1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, N210}), 
        .DATA7({N211, N212, N213, N214, N215, N216, N217, N218, N219, N220, 
        N221, N222, N223, N224, N225, N226, N227, N228, N229, N230, N231, N232, 
        N233, N234, N235, N236, N237, N238, N239, N240, N241, N242}), .DATA8({
        N243, N244, N245, N246, N247, N248, N249, N250, N251, N252, N253, N254, 
        N255, N256, N257, N258, N259, N260, N261, N262, N263, N264, N265, N266, 
        N267, N268, N269, N270, N271, N272, N273, N274}), .DATA9({N275, N276, 
        N277, N278, N279, N280, N281, N282, N283, N284, N285, N286, N287, N288, 
        N289, N290, N291, N292, N293, N294, N295, N296, N297, N298, N299, N300, 
        N301, N302, N303, N304, N305, N306}), .DATA10({N338, N337, N336, N335, 
        N334, N333, N332, N331, N330, N329, N328, N327, N326, N325, N324, N323, 
        N322, N321, N320, N319, N318, N317, N316, N315, N314, N313, N312, N311, 
        N310, N309, N308, N307}), .DATA11({N370, N369, N368, N367, N366, N365, 
        N364, N363, N362, N361, N360, N359, N358, N357, N356, N355, N354, N353, 
        N352, N351, N350, N349, N348, N347, N346, N345, N344, N343, N342, N341, 
        N340, N339}), .DATA12(in0), .DATA13(in1), .DATA14({N401, N400, N399, 
        N398, N397, N396, N395, N394, N393, N392, N391, N390, N389, N388, N387, 
        N386, N385, N384, N383, N382, N381, N380, N379, N378, N377, N376, N375, 
        N374, N373, N372, N371, 1'b0}), .DATA15({N409, N408, N407, N406, N405, 
        N404, N403, N402, N417, N416, N415, N414, N413, N412, N411, N410, N425, 
        N424, N423, N422, N421, N420, N419, N418, N433, N432, N431, N430, N429, 
        N428, N427, N426}), .DATA16({N441, N440, N439, N438, N437, N436, N435, 
        N434, N449, N448, N447, N446, N445, N444, N443, N442, N457, N456, N455, 
        N454, N453, N452, N451, N450, N465, N464, N463, N462, N461, N460, N459, 
        N458}), .DATA17({1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0}), 
        .CONTROL1(N0), .CONTROL2(N1), .CONTROL3(N2), .CONTROL4(N3), .CONTROL5(
        N4), .CONTROL6(N5), .CONTROL7(N6), .CONTROL8(N7), .CONTROL9(N8), 
        .CONTROL10(N9), .CONTROL11(N10), .CONTROL12(N11), .CONTROL13(N12), 
        .CONTROL14(N13), .CONTROL15(N14), .CONTROL16(N15), .CONTROL17(N16), 
        .Z({N497, N496, N495, N494, N493, N492, N491, N490, N489, N488, N487, 
        N486, N485, N484, N483, N482, N481, N480, N479, N478, N477, N476, N475, 
        N474, N473, N472, N471, N470, N469, N468, N467, N466}) );
  GTECH_BUF B_0 ( .A(N25), .Z(N0) );
  GTECH_BUF B_1 ( .A(N28), .Z(N1) );
  GTECH_BUF B_2 ( .A(N30), .Z(N2) );
  GTECH_BUF B_3 ( .A(N37), .Z(N3) );
  GTECH_BUF B_4 ( .A(N40), .Z(N4) );
  GTECH_BUF B_5 ( .A(N42), .Z(N5) );
  GTECH_BUF B_6 ( .A(N47), .Z(N6) );
  GTECH_BUF B_7 ( .A(N49), .Z(N7) );
  GTECH_BUF B_8 ( .A(N55), .Z(N8) );
  GTECH_BUF B_9 ( .A(N57), .Z(N9) );
  GTECH_BUF B_10 ( .A(N59), .Z(N10) );
  GTECH_BUF B_11 ( .A(N62), .Z(N11) );
  GTECH_BUF B_12 ( .A(N66), .Z(N12) );
  GTECH_BUF B_13 ( .A(N68), .Z(N13) );
  GTECH_BUF B_14 ( .A(N72), .Z(N14) );
  GTECH_BUF B_15 ( .A(N74), .Z(N15) );
  GTECH_BUF B_16 ( .A(N80), .Z(N16) );
  SELECT_OP C355 ( .DATA1({N497, N496, N495, N494, N493, N492, N491, N490, 
        N489, N488, N487, N486, N485, N484, N483, N482, N481, N480, N479, N478, 
        N477, N476, N475, N474, N473, N472, N471, N470, N469, N468, N467, N466}), .DATA2({1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 
        1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0}), .CONTROL1(N17), 
        .CONTROL2(N18), .Z(out) );
  GTECH_BUF B_17 ( .A(N19), .Z(N17) );
  GTECH_BUF B_18 ( .A(fn[5]), .Z(N18) );
  GTECH_NOT I_0 ( .A(fn[5]), .Z(N19) );
  GTECH_BUF B_19 ( .A(N19), .Z(N20) );
  GTECH_NOT I_1 ( .A(fn[4]), .Z(N21) );
  GTECH_NOT I_2 ( .A(N27), .Z(N28) );
  GTECH_NOT I_3 ( .A(N29), .Z(N30) );
  GTECH_NOT I_4 ( .A(fn[1]), .Z(N31) );
  GTECH_NOT I_5 ( .A(fn[0]), .Z(N32) );
  GTECH_NOT I_6 ( .A(N36), .Z(N37) );
  GTECH_NOT I_7 ( .A(N39), .Z(N40) );
  GTECH_NOT I_8 ( .A(N41), .Z(N42) );
  GTECH_NOT I_9 ( .A(fn[2]), .Z(N43) );
  GTECH_NOT I_10 ( .A(N46), .Z(N47) );
  GTECH_NOT I_11 ( .A(N48), .Z(N49) );
  GTECH_NOT I_12 ( .A(fn[3]), .Z(N50) );
  GTECH_NOT I_13 ( .A(N54), .Z(N55) );
  GTECH_NOT I_14 ( .A(N56), .Z(N57) );
  GTECH_NOT I_15 ( .A(N58), .Z(N59) );
  GTECH_NOT I_16 ( .A(N61), .Z(N62) );
  GTECH_NOT I_17 ( .A(N65), .Z(N66) );
  GTECH_NOT I_18 ( .A(N67), .Z(N68) );
  GTECH_NOT I_19 ( .A(N71), .Z(N72) );
  GTECH_NOT I_20 ( .A(N73), .Z(N74) );
  GTECH_OR2 C382 ( .A(N75), .B(N499), .Z(N80) );
  GTECH_OR2 C383 ( .A(N77), .B(N498), .Z(N499) );
  GTECH_OR2 C384 ( .A(N78), .B(N79), .Z(N498) );
  GTECH_AND2 C402 ( .A(N20), .B(N25) );
  GTECH_AND2 C403 ( .A(N20), .B(N28) );
  GTECH_AND2 C404 ( .A(N20), .B(N30) );
  GTECH_OR2 C405 ( .A(in0[31]), .B(in1[31]), .Z(N177) );
  GTECH_OR2 C406 ( .A(in0[30]), .B(in1[30]), .Z(N178) );
  GTECH_OR2 C407 ( .A(in0[29]), .B(in1[29]), .Z(N179) );
  GTECH_OR2 C408 ( .A(in0[28]), .B(in1[28]), .Z(N180) );
  GTECH_OR2 C409 ( .A(in0[27]), .B(in1[27]), .Z(N181) );
  GTECH_OR2 C410 ( .A(in0[26]), .B(in1[26]), .Z(N182) );
  GTECH_OR2 C411 ( .A(in0[25]), .B(in1[25]), .Z(N183) );
  GTECH_OR2 C412 ( .A(in0[24]), .B(in1[24]), .Z(N184) );
  GTECH_OR2 C413 ( .A(in0[23]), .B(in1[23]), .Z(N185) );
  GTECH_OR2 C414 ( .A(in0[22]), .B(in1[22]), .Z(N186) );
  GTECH_OR2 C415 ( .A(in0[21]), .B(in1[21]), .Z(N187) );
  GTECH_OR2 C416 ( .A(in0[20]), .B(in1[20]), .Z(N188) );
  GTECH_OR2 C417 ( .A(in0[19]), .B(in1[19]), .Z(N189) );
  GTECH_OR2 C418 ( .A(in0[18]), .B(in1[18]), .Z(N190) );
  GTECH_OR2 C419 ( .A(in0[17]), .B(in1[17]), .Z(N191) );
  GTECH_OR2 C420 ( .A(in0[16]), .B(in1[16]), .Z(N192) );
  GTECH_OR2 C421 ( .A(in0[15]), .B(in1[15]), .Z(N193) );
  GTECH_OR2 C422 ( .A(in0[14]), .B(in1[14]), .Z(N194) );
  GTECH_OR2 C423 ( .A(in0[13]), .B(in1[13]), .Z(N195) );
  GTECH_OR2 C424 ( .A(in0[12]), .B(in1[12]), .Z(N196) );
  GTECH_OR2 C425 ( .A(in0[11]), .B(in1[11]), .Z(N197) );
  GTECH_OR2 C426 ( .A(in0[10]), .B(in1[10]), .Z(N198) );
  GTECH_OR2 C427 ( .A(in0[9]), .B(in1[9]), .Z(N199) );
  GTECH_OR2 C428 ( .A(in0[8]), .B(in1[8]), .Z(N200) );
  GTECH_OR2 C429 ( .A(in0[7]), .B(in1[7]), .Z(N201) );
  GTECH_OR2 C430 ( .A(in0[6]), .B(in1[6]), .Z(N202) );
  GTECH_OR2 C431 ( .A(in0[5]), .B(in1[5]), .Z(N203) );
  GTECH_OR2 C432 ( .A(in0[4]), .B(in1[4]), .Z(N204) );
  GTECH_OR2 C433 ( .A(in0[3]), .B(in1[3]), .Z(N205) );
  GTECH_OR2 C434 ( .A(in0[2]), .B(in1[2]), .Z(N206) );
  GTECH_OR2 C435 ( .A(in0[1]), .B(in1[1]), .Z(N207) );
  GTECH_OR2 C436 ( .A(in0[0]), .B(in1[0]), .Z(N208) );
  GTECH_AND2 C437 ( .A(N20), .B(N40) );
  GTECH_AND2 C438 ( .A(N20), .B(N42) );
  GTECH_AND2 C439 ( .A(in0[31]), .B(in1[31]), .Z(N211) );
  GTECH_AND2 C440 ( .A(in0[30]), .B(in1[30]), .Z(N212) );
  GTECH_AND2 C441 ( .A(in0[29]), .B(in1[29]), .Z(N213) );
  GTECH_AND2 C442 ( .A(in0[28]), .B(in1[28]), .Z(N214) );
  GTECH_AND2 C443 ( .A(in0[27]), .B(in1[27]), .Z(N215) );
  GTECH_AND2 C444 ( .A(in0[26]), .B(in1[26]), .Z(N216) );
  GTECH_AND2 C445 ( .A(in0[25]), .B(in1[25]), .Z(N217) );
  GTECH_AND2 C446 ( .A(in0[24]), .B(in1[24]), .Z(N218) );
  GTECH_AND2 C447 ( .A(in0[23]), .B(in1[23]), .Z(N219) );
  GTECH_AND2 C448 ( .A(in0[22]), .B(in1[22]), .Z(N220) );
  GTECH_AND2 C449 ( .A(in0[21]), .B(in1[21]), .Z(N221) );
  GTECH_AND2 C450 ( .A(in0[20]), .B(in1[20]), .Z(N222) );
  GTECH_AND2 C451 ( .A(in0[19]), .B(in1[19]), .Z(N223) );
  GTECH_AND2 C452 ( .A(in0[18]), .B(in1[18]), .Z(N224) );
  GTECH_AND2 C453 ( .A(in0[17]), .B(in1[17]), .Z(N225) );
  GTECH_AND2 C454 ( .A(in0[16]), .B(in1[16]), .Z(N226) );
  GTECH_AND2 C455 ( .A(in0[15]), .B(in1[15]), .Z(N227) );
  GTECH_AND2 C456 ( .A(in0[14]), .B(in1[14]), .Z(N228) );
  GTECH_AND2 C457 ( .A(in0[13]), .B(in1[13]), .Z(N229) );
  GTECH_AND2 C458 ( .A(in0[12]), .B(in1[12]), .Z(N230) );
  GTECH_AND2 C459 ( .A(in0[11]), .B(in1[11]), .Z(N231) );
  GTECH_AND2 C460 ( .A(in0[10]), .B(in1[10]), .Z(N232) );
  GTECH_AND2 C461 ( .A(in0[9]), .B(in1[9]), .Z(N233) );
  GTECH_AND2 C462 ( .A(in0[8]), .B(in1[8]), .Z(N234) );
  GTECH_AND2 C463 ( .A(in0[7]), .B(in1[7]), .Z(N235) );
  GTECH_AND2 C464 ( .A(in0[6]), .B(in1[6]), .Z(N236) );
  GTECH_AND2 C465 ( .A(in0[5]), .B(in1[5]), .Z(N237) );
  GTECH_AND2 C466 ( .A(in0[4]), .B(in1[4]), .Z(N238) );
  GTECH_AND2 C467 ( .A(in0[3]), .B(in1[3]), .Z(N239) );
  GTECH_AND2 C468 ( .A(in0[2]), .B(in1[2]), .Z(N240) );
  GTECH_AND2 C469 ( .A(in0[1]), .B(in1[1]), .Z(N241) );
  GTECH_AND2 C470 ( .A(in0[0]), .B(in1[0]), .Z(N242) );
  GTECH_XOR2 C471 ( .A(in0[31]), .B(in1[31]), .Z(N243) );
  GTECH_XOR2 C472 ( .A(in0[30]), .B(in1[30]), .Z(N244) );
  GTECH_XOR2 C473 ( .A(in0[29]), .B(in1[29]), .Z(N245) );
  GTECH_XOR2 C474 ( .A(in0[28]), .B(in1[28]), .Z(N246) );
  GTECH_XOR2 C475 ( .A(in0[27]), .B(in1[27]), .Z(N247) );
  GTECH_XOR2 C476 ( .A(in0[26]), .B(in1[26]), .Z(N248) );
  GTECH_XOR2 C477 ( .A(in0[25]), .B(in1[25]), .Z(N249) );
  GTECH_XOR2 C478 ( .A(in0[24]), .B(in1[24]), .Z(N250) );
  GTECH_XOR2 C479 ( .A(in0[23]), .B(in1[23]), .Z(N251) );
  GTECH_XOR2 C480 ( .A(in0[22]), .B(in1[22]), .Z(N252) );
  GTECH_XOR2 C481 ( .A(in0[21]), .B(in1[21]), .Z(N253) );
  GTECH_XOR2 C482 ( .A(in0[20]), .B(in1[20]), .Z(N254) );
  GTECH_XOR2 C483 ( .A(in0[19]), .B(in1[19]), .Z(N255) );
  GTECH_XOR2 C484 ( .A(in0[18]), .B(in1[18]), .Z(N256) );
  GTECH_XOR2 C485 ( .A(in0[17]), .B(in1[17]), .Z(N257) );
  GTECH_XOR2 C486 ( .A(in0[16]), .B(in1[16]), .Z(N258) );
  GTECH_XOR2 C487 ( .A(in0[15]), .B(in1[15]), .Z(N259) );
  GTECH_XOR2 C488 ( .A(in0[14]), .B(in1[14]), .Z(N260) );
  GTECH_XOR2 C489 ( .A(in0[13]), .B(in1[13]), .Z(N261) );
  GTECH_XOR2 C490 ( .A(in0[12]), .B(in1[12]), .Z(N262) );
  GTECH_XOR2 C491 ( .A(in0[11]), .B(in1[11]), .Z(N263) );
  GTECH_XOR2 C492 ( .A(in0[10]), .B(in1[10]), .Z(N264) );
  GTECH_XOR2 C493 ( .A(in0[9]), .B(in1[9]), .Z(N265) );
  GTECH_XOR2 C494 ( .A(in0[8]), .B(in1[8]), .Z(N266) );
  GTECH_XOR2 C495 ( .A(in0[7]), .B(in1[7]), .Z(N267) );
  GTECH_XOR2 C496 ( .A(in0[6]), .B(in1[6]), .Z(N268) );
  GTECH_XOR2 C497 ( .A(in0[5]), .B(in1[5]), .Z(N269) );
  GTECH_XOR2 C498 ( .A(in0[4]), .B(in1[4]), .Z(N270) );
  GTECH_XOR2 C499 ( .A(in0[3]), .B(in1[3]), .Z(N271) );
  GTECH_XOR2 C500 ( .A(in0[2]), .B(in1[2]), .Z(N272) );
  GTECH_XOR2 C501 ( .A(in0[1]), .B(in1[1]), .Z(N273) );
  GTECH_XOR2 C502 ( .A(in0[0]), .B(in1[0]), .Z(N274) );
  GTECH_NOT I_21 ( .A(N500), .Z(N275) );
  GTECH_OR2 C504 ( .A(in0[31]), .B(in1[31]), .Z(N500) );
  GTECH_NOT I_22 ( .A(N501), .Z(N276) );
  GTECH_OR2 C506 ( .A(in0[30]), .B(in1[30]), .Z(N501) );
  GTECH_NOT I_23 ( .A(N502), .Z(N277) );
  GTECH_OR2 C508 ( .A(in0[29]), .B(in1[29]), .Z(N502) );
  GTECH_NOT I_24 ( .A(N503), .Z(N278) );
  GTECH_OR2 C510 ( .A(in0[28]), .B(in1[28]), .Z(N503) );
  GTECH_NOT I_25 ( .A(N504), .Z(N279) );
  GTECH_OR2 C512 ( .A(in0[27]), .B(in1[27]), .Z(N504) );
  GTECH_NOT I_26 ( .A(N505), .Z(N280) );
  GTECH_OR2 C514 ( .A(in0[26]), .B(in1[26]), .Z(N505) );
  GTECH_NOT I_27 ( .A(N506), .Z(N281) );
  GTECH_OR2 C516 ( .A(in0[25]), .B(in1[25]), .Z(N506) );
  GTECH_NOT I_28 ( .A(N507), .Z(N282) );
  GTECH_OR2 C518 ( .A(in0[24]), .B(in1[24]), .Z(N507) );
  GTECH_NOT I_29 ( .A(N508), .Z(N283) );
  GTECH_OR2 C520 ( .A(in0[23]), .B(in1[23]), .Z(N508) );
  GTECH_NOT I_30 ( .A(N509), .Z(N284) );
  GTECH_OR2 C522 ( .A(in0[22]), .B(in1[22]), .Z(N509) );
  GTECH_NOT I_31 ( .A(N510), .Z(N285) );
  GTECH_OR2 C524 ( .A(in0[21]), .B(in1[21]), .Z(N510) );
  GTECH_NOT I_32 ( .A(N511), .Z(N286) );
  GTECH_OR2 C526 ( .A(in0[20]), .B(in1[20]), .Z(N511) );
  GTECH_NOT I_33 ( .A(N512), .Z(N287) );
  GTECH_OR2 C528 ( .A(in0[19]), .B(in1[19]), .Z(N512) );
  GTECH_NOT I_34 ( .A(N513), .Z(N288) );
  GTECH_OR2 C530 ( .A(in0[18]), .B(in1[18]), .Z(N513) );
  GTECH_NOT I_35 ( .A(N514), .Z(N289) );
  GTECH_OR2 C532 ( .A(in0[17]), .B(in1[17]), .Z(N514) );
  GTECH_NOT I_36 ( .A(N515), .Z(N290) );
  GTECH_OR2 C534 ( .A(in0[16]), .B(in1[16]), .Z(N515) );
  GTECH_NOT I_37 ( .A(N516), .Z(N291) );
  GTECH_OR2 C536 ( .A(in0[15]), .B(in1[15]), .Z(N516) );
  GTECH_NOT I_38 ( .A(N517), .Z(N292) );
  GTECH_OR2 C538 ( .A(in0[14]), .B(in1[14]), .Z(N517) );
  GTECH_NOT I_39 ( .A(N518), .Z(N293) );
  GTECH_OR2 C540 ( .A(in0[13]), .B(in1[13]), .Z(N518) );
  GTECH_NOT I_40 ( .A(N519), .Z(N294) );
  GTECH_OR2 C542 ( .A(in0[12]), .B(in1[12]), .Z(N519) );
  GTECH_NOT I_41 ( .A(N520), .Z(N295) );
  GTECH_OR2 C544 ( .A(in0[11]), .B(in1[11]), .Z(N520) );
  GTECH_NOT I_42 ( .A(N521), .Z(N296) );
  GTECH_OR2 C546 ( .A(in0[10]), .B(in1[10]), .Z(N521) );
  GTECH_NOT I_43 ( .A(N522), .Z(N297) );
  GTECH_OR2 C548 ( .A(in0[9]), .B(in1[9]), .Z(N522) );
  GTECH_NOT I_44 ( .A(N523), .Z(N298) );
  GTECH_OR2 C550 ( .A(in0[8]), .B(in1[8]), .Z(N523) );
  GTECH_NOT I_45 ( .A(N524), .Z(N299) );
  GTECH_OR2 C552 ( .A(in0[7]), .B(in1[7]), .Z(N524) );
  GTECH_NOT I_46 ( .A(N525), .Z(N300) );
  GTECH_OR2 C554 ( .A(in0[6]), .B(in1[6]), .Z(N525) );
  GTECH_NOT I_47 ( .A(N526), .Z(N301) );
  GTECH_OR2 C556 ( .A(in0[5]), .B(in1[5]), .Z(N526) );
  GTECH_NOT I_48 ( .A(N527), .Z(N302) );
  GTECH_OR2 C558 ( .A(in0[4]), .B(in1[4]), .Z(N527) );
  GTECH_NOT I_49 ( .A(N528), .Z(N303) );
  GTECH_OR2 C560 ( .A(in0[3]), .B(in1[3]), .Z(N528) );
  GTECH_NOT I_50 ( .A(N529), .Z(N304) );
  GTECH_OR2 C562 ( .A(in0[2]), .B(in1[2]), .Z(N529) );
  GTECH_NOT I_51 ( .A(N530), .Z(N305) );
  GTECH_OR2 C564 ( .A(in0[1]), .B(in1[1]), .Z(N530) );
  GTECH_NOT I_52 ( .A(N531), .Z(N306) );
  GTECH_OR2 C566 ( .A(in0[0]), .B(in1[0]), .Z(N531) );
  GTECH_AND2 C567 ( .A(N20), .B(N57) );
  GTECH_AND2 C568 ( .A(N20), .B(N59) );
  GTECH_AND2 C569 ( .A(N20), .B(N68) );
  GTECH_AND2 C570 ( .A(N20), .B(N72) );
  GTECH_AND2 C571 ( .A(N20), .B(N74) );
endmodule


module proc_ProcDpathAluWrapper ( clk, reset, istream_val, istream_rdy, 
        istream_msg, ostream_val, ostream_rdy, ostream_msg );
  input [69:0] istream_msg;
  output [34:0] ostream_msg;
  input clk, reset, istream_val, ostream_rdy;
  output istream_rdy, ostream_val;
  wire   ostream_rdy;
  wire   [31:0] in0_reg_out;
  wire   [31:0] in1_reg_out;
  wire   [5:0] fn_reg_out;
  wire   [31:0] out;
  wire   [34:32] out_msg;
  assign istream_rdy = ostream_rdy;

  vc_EnResetReg_p_nbits1 val_reg ( .clk(clk), .reset(reset), .q(ostream_val), 
        .d(istream_val), .en(ostream_rdy) );
  vc_EnReg_p_nbits32 in0_reg ( .clk(clk), .reset(reset), .q(in0_reg_out), .d(
        istream_msg[63:32]), .en(ostream_rdy) );
  vc_EnReg_p_nbits32 in1_reg ( .clk(clk), .reset(reset), .q(in1_reg_out), .d(
        istream_msg[31:0]), .en(ostream_rdy) );
  vc_EnReg_p_nbits6 fn_reg ( .clk(clk), .reset(reset), .q(fn_reg_out), .d(
        istream_msg[69:64]), .en(ostream_rdy) );
  proc_ProcDpathAlu alu ( .in0(in0_reg_out), .in1(in1_reg_out), .fn(fn_reg_out), .out(out), .ops_eq(out_msg[34]), .ops_lt(out_msg[33]), .ops_ltu(out_msg[32])
         );
  GTECH_AND2 C41 ( .A(out_msg[34]), .B(ostream_val), .Z(ostream_msg[34]) );
  GTECH_AND2 C42 ( .A(out_msg[33]), .B(ostream_val), .Z(ostream_msg[33]) );
  GTECH_AND2 C43 ( .A(out_msg[32]), .B(ostream_val), .Z(ostream_msg[32]) );
  GTECH_AND2 C44 ( .A(out[31]), .B(ostream_val), .Z(ostream_msg[31]) );
  GTECH_AND2 C45 ( .A(out[30]), .B(ostream_val), .Z(ostream_msg[30]) );
  GTECH_AND2 C46 ( .A(out[29]), .B(ostream_val), .Z(ostream_msg[29]) );
  GTECH_AND2 C47 ( .A(out[28]), .B(ostream_val), .Z(ostream_msg[28]) );
  GTECH_AND2 C48 ( .A(out[27]), .B(ostream_val), .Z(ostream_msg[27]) );
  GTECH_AND2 C49 ( .A(out[26]), .B(ostream_val), .Z(ostream_msg[26]) );
  GTECH_AND2 C50 ( .A(out[25]), .B(ostream_val), .Z(ostream_msg[25]) );
  GTECH_AND2 C51 ( .A(out[24]), .B(ostream_val), .Z(ostream_msg[24]) );
  GTECH_AND2 C52 ( .A(out[23]), .B(ostream_val), .Z(ostream_msg[23]) );
  GTECH_AND2 C53 ( .A(out[22]), .B(ostream_val), .Z(ostream_msg[22]) );
  GTECH_AND2 C54 ( .A(out[21]), .B(ostream_val), .Z(ostream_msg[21]) );
  GTECH_AND2 C55 ( .A(out[20]), .B(ostream_val), .Z(ostream_msg[20]) );
  GTECH_AND2 C56 ( .A(out[19]), .B(ostream_val), .Z(ostream_msg[19]) );
  GTECH_AND2 C57 ( .A(out[18]), .B(ostream_val), .Z(ostream_msg[18]) );
  GTECH_AND2 C58 ( .A(out[17]), .B(ostream_val), .Z(ostream_msg[17]) );
  GTECH_AND2 C59 ( .A(out[16]), .B(ostream_val), .Z(ostream_msg[16]) );
  GTECH_AND2 C60 ( .A(out[15]), .B(ostream_val), .Z(ostream_msg[15]) );
  GTECH_AND2 C61 ( .A(out[14]), .B(ostream_val), .Z(ostream_msg[14]) );
  GTECH_AND2 C62 ( .A(out[13]), .B(ostream_val), .Z(ostream_msg[13]) );
  GTECH_AND2 C63 ( .A(out[12]), .B(ostream_val), .Z(ostream_msg[12]) );
  GTECH_AND2 C64 ( .A(out[11]), .B(ostream_val), .Z(ostream_msg[11]) );
  GTECH_AND2 C65 ( .A(out[10]), .B(ostream_val), .Z(ostream_msg[10]) );
  GTECH_AND2 C66 ( .A(out[9]), .B(ostream_val), .Z(ostream_msg[9]) );
  GTECH_AND2 C67 ( .A(out[8]), .B(ostream_val), .Z(ostream_msg[8]) );
  GTECH_AND2 C68 ( .A(out[7]), .B(ostream_val), .Z(ostream_msg[7]) );
  GTECH_AND2 C69 ( .A(out[6]), .B(ostream_val), .Z(ostream_msg[6]) );
  GTECH_AND2 C70 ( .A(out[5]), .B(ostream_val), .Z(ostream_msg[5]) );
  GTECH_AND2 C71 ( .A(out[4]), .B(ostream_val), .Z(ostream_msg[4]) );
  GTECH_AND2 C72 ( .A(out[3]), .B(ostream_val), .Z(ostream_msg[3]) );
  GTECH_AND2 C73 ( .A(out[2]), .B(ostream_val), .Z(ostream_msg[2]) );
  GTECH_AND2 C74 ( .A(out[1]), .B(ostream_val), .Z(ostream_msg[1]) );
  GTECH_AND2 C75 ( .A(out[0]), .B(ostream_val), .Z(ostream_msg[0]) );
endmodule


module ProcDpathAluWrapper ( clk, reset, istream_msg, istream_rdy, istream_val, 
        ostream_msg, ostream_rdy, ostream_val );
  input [0:0] clk;
  input [0:0] reset;
  input [69:0] istream_msg;
  output [0:0] istream_rdy;
  input [0:0] istream_val;
  output [34:0] ostream_msg;
  input [0:0] ostream_rdy;
  output [0:0] ostream_val;


  proc_ProcDpathAluWrapper v ( .clk(clk[0]), .reset(reset[0]), .istream_val(
        istream_val[0]), .istream_rdy(istream_rdy[0]), .istream_msg(
        istream_msg), .ostream_val(ostream_val[0]), .ostream_rdy(
        ostream_rdy[0]), .ostream_msg(ostream_msg) );
endmodule

