-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity uppol2 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    al1 : IN STD_LOGIC_VECTOR (31 downto 0);
    al2 : IN STD_LOGIC_VECTOR (31 downto 0);
    plt : IN STD_LOGIC_VECTOR (31 downto 0);
    plt1 : IN STD_LOGIC_VECTOR (31 downto 0);
    plt2 : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (14 downto 0) );
end;


architecture behav of uppol2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (7 downto 0) := "00001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (7 downto 0) := "00100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_3F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000111111";
    constant ap_const_lv35_0 : STD_LOGIC_VECTOR (34 downto 0) := "00000000000000000000000000000000000";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_22 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100010";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_26 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100110";
    constant ap_const_lv29_1FFFFF80 : STD_LOGIC_VECTOR (28 downto 0) := "11111111111111111111110000000";
    constant ap_const_lv29_80 : STD_LOGIC_VECTOR (28 downto 0) := "00000000000000000000010000000";
    constant ap_const_lv32_3000 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000011000000000000";
    constant ap_const_lv32_FFFFD000 : STD_LOGIC_VECTOR (31 downto 0) := "11111111111111111101000000000000";
    constant ap_const_lv15_5000 : STD_LOGIC_VECTOR (14 downto 0) := "101000000000000";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal tmp_s_fu_82_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_90_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_7_reg_276 : STD_LOGIC_VECTOR (63 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal grp_fu_100_p2 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_10_reg_281 : STD_LOGIC_VECTOR (63 downto 0);
    signal apl2_fu_224_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal apl2_reg_286 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal grp_fu_90_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_100_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal wd2_fu_106_p3 : STD_LOGIC_VECTOR (33 downto 0);
    signal wd2_cast_fu_114_p1 : STD_LOGIC_VECTOR (34 downto 0);
    signal tmp_1_fu_131_p4 : STD_LOGIC_VECTOR (26 downto 0);
    signal wd2_1_fu_125_p2 : STD_LOGIC_VECTOR (34 downto 0);
    signal tmp_8_fu_118_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_4_fu_141_p1 : STD_LOGIC_VECTOR (27 downto 0);
    signal tmp_5_fu_145_p4 : STD_LOGIC_VECTOR (27 downto 0);
    signal p_shl_fu_174_p3 : STD_LOGIC_VECTOR (38 downto 0);
    signal p_shl_cast3_fu_182_p1 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_20_cast3_fu_170_p1 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_12_fu_186_p2 : STD_LOGIC_VECTOR (39 downto 0);
    signal tmp_9_fu_155_p3 : STD_LOGIC_VECTOR (27 downto 0);
    signal tmp_11_fu_163_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_6_cast_cast_cast_fu_206_p3 : STD_LOGIC_VECTOR (28 downto 0);
    signal tmp_4_cast_fu_202_p1 : STD_LOGIC_VECTOR (28 downto 0);
    signal tmp_fu_214_p2 : STD_LOGIC_VECTOR (28 downto 0);
    signal tmp_cast_fu_220_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_3_fu_192_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal tmp_13_fu_230_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_s_fu_235_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_14_fu_246_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_15_fu_242_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (7 downto 0);

    component adpcm_main_mul_32bkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (63 downto 0) );
    end component;



begin
    adpcm_main_mul_32bkb_x_U21 : component adpcm_main_mul_32bkb
    generic map (
        ID => 1,
        NUM_STAGE => 6,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 64)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => plt1,
        din1 => grp_fu_90_p1,
        ce => ap_const_logic_1,
        dout => grp_fu_90_p2);

    adpcm_main_mul_32bkb_x_U22 : component adpcm_main_mul_32bkb
    generic map (
        ID => 1,
        NUM_STAGE => 6,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 64)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => plt2,
        din1 => grp_fu_100_p1,
        ce => ap_const_logic_1,
        dout => grp_fu_100_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_lv1_1 = ap_CS_fsm_state7))) then
                apl2_reg_286 <= apl2_fu_224_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_lv1_1 = ap_CS_fsm_state6))) then
                tmp_10_reg_281 <= grp_fu_100_p2;
                tmp_7_reg_276 <= grp_fu_90_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (not((ap_start = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0 downto 0);
    ap_CS_fsm_state6 <= ap_CS_fsm(5 downto 5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6 downto 6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7 downto 7);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state8)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_CS_fsm_state1 = ap_const_lv1_1)) or ((ap_const_lv1_1 = ap_CS_fsm_state8)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_CS_fsm_state1 = ap_const_lv1_1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state8)
    begin
        if (((ap_const_lv1_1 = ap_CS_fsm_state8))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= 
        ap_const_lv15_5000 when (tmp_14_fu_246_p2(0) = '1') else 
        tmp_15_fu_242_p1;
    apl2_fu_224_p2 <= std_logic_vector(signed(tmp_cast_fu_220_p1) + signed(tmp_3_fu_192_p4));
    grp_fu_100_p1 <= tmp_s_fu_82_p1(32 - 1 downto 0);
    grp_fu_90_p1 <= tmp_s_fu_82_p1(32 - 1 downto 0);
    p_s_fu_235_p3 <= 
        ap_const_lv32_3000 when (tmp_13_fu_230_p2(0) = '1') else 
        apl2_reg_286;
    p_shl_cast3_fu_182_p1 <= std_logic_vector(resize(unsigned(p_shl_fu_174_p3),40));
    p_shl_fu_174_p3 <= (al2 & ap_const_lv7_0);
    tmp_11_fu_163_p3 <= tmp_10_reg_281(63 downto 63);
    tmp_12_fu_186_p2 <= std_logic_vector(unsigned(p_shl_cast3_fu_182_p1) - unsigned(tmp_20_cast3_fu_170_p1));
    tmp_13_fu_230_p2 <= "1" when (signed(apl2_reg_286) > signed(ap_const_lv32_3000)) else "0";
    tmp_14_fu_246_p2 <= "1" when (signed(p_s_fu_235_p3) < signed(ap_const_lv32_FFFFD000)) else "0";
    tmp_15_fu_242_p1 <= p_s_fu_235_p3(15 - 1 downto 0);
    tmp_1_fu_131_p4 <= al1(31 downto 5);
        tmp_20_cast3_fu_170_p1 <= std_logic_vector(resize(signed(al2),40));

    tmp_3_fu_192_p4 <= tmp_12_fu_186_p2(38 downto 7);
        tmp_4_cast_fu_202_p1 <= std_logic_vector(resize(signed(tmp_9_fu_155_p3),29));

        tmp_4_fu_141_p1 <= std_logic_vector(resize(signed(tmp_1_fu_131_p4),28));

    tmp_5_fu_145_p4 <= wd2_1_fu_125_p2(34 downto 7);
    tmp_6_cast_cast_cast_fu_206_p3 <= 
        ap_const_lv29_1FFFFF80 when (tmp_11_fu_163_p3(0) = '1') else 
        ap_const_lv29_80;
    tmp_8_fu_118_p3 <= tmp_7_reg_276(63 downto 63);
    tmp_9_fu_155_p3 <= 
        tmp_4_fu_141_p1 when (tmp_8_fu_118_p3(0) = '1') else 
        tmp_5_fu_145_p4;
        tmp_cast_fu_220_p1 <= std_logic_vector(resize(signed(tmp_fu_214_p2),32));

    tmp_fu_214_p2 <= std_logic_vector(unsigned(tmp_6_cast_cast_cast_fu_206_p3) + unsigned(tmp_4_cast_fu_202_p1));
        tmp_s_fu_82_p1 <= std_logic_vector(resize(signed(plt),64));

    wd2_1_fu_125_p2 <= std_logic_vector(unsigned(ap_const_lv35_0) - unsigned(wd2_cast_fu_114_p1));
        wd2_cast_fu_114_p1 <= std_logic_vector(resize(signed(wd2_fu_106_p3),35));

    wd2_fu_106_p3 <= (al1 & ap_const_lv2_0);
end behav;
