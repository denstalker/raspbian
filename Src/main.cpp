#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

//	printf(ANSI_COLOR_RED     "This text is RED!"     ANSI_COLOR_RESET "\n");
//	printf(ANSI_COLOR_GREEN   "This text is GREEN!"   ANSI_COLOR_RESET "\n");
//	printf(ANSI_COLOR_YELLOW  "This text is YELLOW!"  ANSI_COLOR_RESET "\n");
//	printf(ANSI_COLOR_BLUE    "This text is BLUE!"    ANSI_COLOR_RESET "\n");
//	printf(ANSI_COLOR_MAGENTA "This text is MAGENTA!" ANSI_COLOR_RESET "\n");
//	printf(ANSI_COLOR_CYAN    "This text is CYAN!"    ANSI_COLOR_RESET "\n");
#include <iostream>

#include <fstream>
#include <string>
using namespace std;

int main()
{
	string strPath = "/dev/ttyS0";
	ifstream fin;
	fin.open(strPath);
	if (!fin.is_open())
	{
		cout << ANSI_COLOR_RED << "Ошибка открытия файла" << ANSI_COLOR_RESET << endl;
	}else
	{
		
		cout << ANSI_COLOR_BLUE << "Файл открыт" << ANSI_COLOR_RESET << endl;
		string str;
		while (!fin.eof())
		{
			std::getline(fin,str);
			fin >> str;
			cout << ANSI_COLOR_YELLOW << str << ANSI_COLOR_RESET << endl;

			std::getline(fin,str);
			cout << ANSI_COLOR_BLUE << str << ANSI_COLOR_RESET << endl;
		}

	}
	fin.close();
	return 0;

}
