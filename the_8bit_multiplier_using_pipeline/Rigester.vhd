library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Rigester is
	Generic(
		N: integer := 16
	);
	port(
		input: in std_logic_vector(N - 1 downto 0);
		rst, Lod: in std_logic;
		clk: in std_logic;
		output: out std_logic_vector(N - 1 downto 0)
	);
end entity;

architecture Behavioral of Rigester is
begin
	process(clk)
	begin
		if (rst = '1') then
			output <= (others => '0');
		elsif Rising_edge(clk) then
			if (Lod = '1') then
				output <= input;
			end if;
		end if;
	end process;
end architecture;