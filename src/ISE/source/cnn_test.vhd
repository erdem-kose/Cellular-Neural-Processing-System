library ieee;
	use ieee.std_logic_1164.all;
	use ieee.std_logic_unsigned.all;
	use ieee.std_logic_textio.all;
	use ieee.numeric_std.all;
	use std.textio.all;
	
	use work.cnn_package.all;
	
entity testbench is
end testbench;

architecture behavior of testbench is 

-- Component Declaration
	component cnn_system is
		port (
				clk, rst, en: in  std_logic;
				ready: out std_logic;

				adrs :in std_logic_vector (ramAddressWidth-1 downto 0);
				data :out std_logic_vector (busWidth-1 downto 0);
				wen :in std_logic_vector (0 downto 0)
		);
	end component;
	
	signal clk : std_logic := '0';
	signal rst : std_logic := '0';
	signal en : std_logic := '0';
	signal ready : std_logic := '0';
	signal adrs :  std_logic_vector (ramAddressWidth-1 downto 0) := (others => '0');
	signal data : std_logic_vector (busWidth-1 downto 0) := (others => '0');
	signal wen :std_logic_vector (0 downto 0);

	constant clk_100M_period : time := 10 ns;
begin
	-- Component Instantiation
	uut: cnn_system
		port map(clk,rst,en,ready,
					adrs,data ,wen
					);

	clock : process
	begin
			clk <= '0';
			wait for clk_100M_period/2;
			clk <= '1';
			wait for clk_100M_period/2;
	end process clock;
	
	--  Test Bench Statements
	tb : process
	begin
			wait for 100 ns; -- wait until global set/reset completes
			en<='1';
			rst<='1';
			wait for clk_100M_period*2;
			rst<='0';
			wait for clk_100M_period*2;

			wait for 4.8 ms;
			rst<='1';
			wait for clk_100M_period*2;
			rst<='0';
			
			--wait; -- will wait forever
	end process tb;
  --  End Test Bench 
END;