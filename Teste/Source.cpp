#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	std::cout << "\tHello\t\n";
	system("PAUSE");
	return 0;
}