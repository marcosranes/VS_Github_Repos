#include <iostream>
#include <string>
#include <iomanip>


#define alunos 3

using namespace std;
int main()
{
    system("chcp 1252 > nul");
    setlocale(LC_ALL, "portuguese");
    int x;
    float nota[alunos];
    string nome;
    string nomes[alunos];


    for (x = 0; x < alunos; x++)
    {
        cout << "Digite o nome do " << x + 1 << "º aluno: ";
        if (x > 0)
            cin.ignore();
        getline(cin, nome);
        nomes[x] = nome;

        cout << "Digite a nota de " << nome << ": ";
        cin >> nota[x];
        cout << "\n";
    }
    system("CLS");

    float media, soma{};
    cout << "============= R E L A T Ó R I O =============\n";
    cout << fixed << setprecision(2);
    for (int i = 0; i < alunos; i++)
    {
        soma += nota[i];
        media = soma / alunos;
        cout << nomes[i] << ": ";
        cout << nota[i] << "\n";
    }
    cout << "\nSoma das Notas: " << soma;
    cout << "\nMédia Geral: " << media;
    cout << "\n\n";
    system("PAUSE");
    return 0;
}