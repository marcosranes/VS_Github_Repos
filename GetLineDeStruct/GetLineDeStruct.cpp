#include <iostream>
#include <string> //para usar o getline...

struct Livro
{
	int ID{};
	std::string Titulo;
	std::string Autor;
	std::string Editora;
	int Ano{};

	void DadosLivro();

};

int main()
{
	setlocale(LC_ALL, "portuguese");
	struct Livro livro;
	std::cout << "******* Cadastro de LIVRO *******\n";
	std::cout << "ID: ";
	std::cin >> livro.ID;
	std::cout << "Título: ";
	std::cin.ignore();
	std::getline(std::cin, livro.Titulo);
	std::cout << "Autor: ";
	std::getline(std::cin, livro.Autor);
	std::cout << "Editora: ";
	std::getline(std::cin, livro.Editora);
	std::cout << "Ano: ";
	std::cin >> livro.Ano;

	livro.DadosLivro();

	Livro L1{ 1, "A Última Música", "Sparks, Nicholas", "Arqueiro", 2019 };
	//Livro L2{ 2, "Não Fale Com Estranhos", "Coben, Harlan", "Arqueiro", 2016 };
	//Livro L3{ 3, "A Cabana", "Young, William P.", "Arqueiro", 2008 };
	Livro L4{ 4, "Game Of Thrones", "George R R Martin", "Bantam Books Us", 2015 };
	L1.DadosLivro();
	//L2.DadosLivro();
	//L3.DadosLivro();
	L4.DadosLivro();
	system("PAUSE");
	return 0;
}

void Livro::DadosLivro()
{
	std::cout << "******* DADOS DO LIVRO *******"
		<< "\nID: L.00" << ID
		<< "\nTitulo: " << Titulo
		<< "\nAutor: " << Autor
		<< "\nEditora: " << Editora
		<< "\nAno: " << Ano << "\n\n";
}
