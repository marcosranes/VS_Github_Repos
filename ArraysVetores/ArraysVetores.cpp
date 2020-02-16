#include <iostream>
#include <string>
#include <tchar.h>

using namespace std;

int main()
{
	system("chcp 1252 > nul");
	_tsetlocale(LC_ALL, _T("portuguese"));
	string Nome;
	float Nota[5]{ 0.0f };
	for (int i{}; i < 5; i++)
	{
		cout << "Digite a " << i + 1 << "ª Nota: ";
		cin >> Nota[i];
		system("CLS");
	}
	cout << "\n";
	for (int j{}; j < 5; j++)
	{
		cout << Nota[j] << "\n";
	}
	system("PAUSE");
	return 0;
}