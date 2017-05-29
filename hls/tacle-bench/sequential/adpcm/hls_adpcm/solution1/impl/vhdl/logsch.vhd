-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2016.4
-- Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity logsch is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ih : IN STD_LOGIC_VECTOR (31 downto 0);
    nbh : IN STD_LOGIC_VECTOR (31 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (14 downto 0) );
end;


architecture behav of logsch is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_26 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100110";
    constant ap_const_lv32_31E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000001100011110";
    constant ap_const_lv32_FFFFFF2A : STD_LOGIC_VECTOR (31 downto 0) := "11111111111111111111111100101010";
    constant ap_const_lv32_25 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100101";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv31_0 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv31_5800 : STD_LOGIC_VECTOR (30 downto 0) := "0000000000000000101100000000000";
    constant ap_const_lv15_5800 : STD_LOGIC_VECTOR (14 downto 0) := "101100000000000";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0) := "01";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal nbh_assign_cast_fu_114_p2 : STD_LOGIC_VECTOR (30 downto 0);
    signal nbh_assign_cast_reg_152 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_18_reg_157 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_shl_fu_52_p3 : STD_LOGIC_VECTOR (38 downto 0);
    signal tmp_cast2_fu_48_p1 : STD_LOGIC_VECTOR (38 downto 0);
    signal tmp_s_fu_60_p2 : STD_LOGIC_VECTOR (38 downto 0);
    signal tmp_fu_80_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_fu_80_p6 : STD_LOGIC_VECTOR (31 downto 0);
    signal wd_fu_66_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_17_fu_104_p1 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_4_fu_94_p4 : STD_LOGIC_VECTOR (30 downto 0);
    signal nbh_assign_fu_108_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC_VECTOR (0 downto 0);
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal p_s_fu_128_p3 : STD_LOGIC_VECTOR (30 downto 0);
    signal tmp_40_fu_138_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_19_fu_134_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (1 downto 0);

    component adpcm_main_mux_42eOg IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        din5_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        din2 : IN STD_LOGIC_VECTOR (31 downto 0);
        din3 : IN STD_LOGIC_VECTOR (31 downto 0);
        din4 : IN STD_LOGIC_VECTOR (31 downto 0);
        din5 : IN STD_LOGIC_VECTOR (1 downto 0);
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    adpcm_main_mux_42eOg_U73 : component adpcm_main_mux_42eOg
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din1_WIDTH => 32,
        din2_WIDTH => 32,
        din3_WIDTH => 32,
        din4_WIDTH => 32,
        din5_WIDTH => 2,
        dout_WIDTH => 32)
    port map (
        din1 => ap_const_lv32_31E,
        din2 => ap_const_lv32_FFFFFF2A,
        din3 => ap_const_lv32_31E,
        din4 => ap_const_lv32_FFFFFF2A,
        din5 => tmp_fu_80_p5,
        dout => tmp_fu_80_p6);





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
            if (((ap_CS_fsm_state1 = ap_const_lv1_1) and not((ap_start = ap_const_logic_0)))) then
                nbh_assign_cast_reg_152 <= nbh_assign_cast_fu_114_p2;
                tmp_18_reg_157 <= nbh_assign_fu_108_p2(31 downto 31);
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
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0 downto 0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1 downto 1);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_CS_fsm_state1 = ap_const_lv1_1)) or ((ap_const_lv1_1 = ap_CS_fsm_state2)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2)
    begin
        if (((ap_const_lv1_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    ap_return <= 
        ap_const_lv15_5800 when (tmp_40_fu_138_p2(0) = '1') else 
        tmp_19_fu_134_p1;
    nbh_assign_cast_fu_114_p2 <= std_logic_vector(unsigned(tmp_17_fu_104_p1) + unsigned(tmp_4_fu_94_p4));
    nbh_assign_fu_108_p2 <= std_logic_vector(unsigned(wd_fu_66_p4) + unsigned(tmp_fu_80_p6));
    p_s_fu_128_p3 <= 
        ap_const_lv31_0 when (tmp_18_reg_157(0) = '1') else 
        nbh_assign_cast_reg_152;
    p_shl_fu_52_p3 <= (nbh & ap_const_lv7_0);
    tmp_17_fu_104_p1 <= tmp_fu_80_p6(31 - 1 downto 0);
    tmp_19_fu_134_p1 <= p_s_fu_128_p3(15 - 1 downto 0);
    tmp_40_fu_138_p2 <= "1" when (unsigned(p_s_fu_128_p3) > unsigned(ap_const_lv31_5800)) else "0";
    tmp_4_fu_94_p4 <= tmp_s_fu_60_p2(37 downto 7);
        tmp_cast2_fu_48_p1 <= std_logic_vector(resize(signed(nbh),39));

    tmp_fu_80_p5 <= ih(2 - 1 downto 0);
    tmp_s_fu_60_p2 <= std_logic_vector(unsigned(p_shl_fu_52_p3) - unsigned(tmp_cast2_fu_48_p1));
    wd_fu_66_p4 <= tmp_s_fu_60_p2(38 downto 7);
end behav;
