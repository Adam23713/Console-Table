#include "../ConsoleTable.h"

int main(int argc, char *argv[])
{
	
	ConsoleTable webpages(3);
	
	Row header = {" Name "," Address "," Years "};
	Row row1 = {" Github "," https://github.com/ "," 2008 "};
	Row row2 = {" Facebook "," https://facebook.com/ "," 2004 "};
	
	
	webpages.AddNewRow(header);
	webpages.AddNewRow(row1);
	webpages.AddNewRow(row2);
	webpages.AddNewRow({" Wikipedia ", " https://www.wikipedia.org/ ", "2001"});
	
	Row header02;
	ConsoleTable employers(3);
	header02.push_front("Birthday");
	header02.push_front("Second Name");
	header02.push_front("First Name");
	
	
	employers.AddNewRow(header02);
	employers.AddNewRow({"Teszt","Elek","1988.01.13"});
	
	webpages.WriteTable(Align::Center);
	std::cout << std::endl;
	employers.WriteTable(Align::Left, &std::cerr);
	return 0;
}
