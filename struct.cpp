#include <iostream>
#include <locale>

using namespace std;

// conhecimento básico de struct

struct Pessoa{
    string nome;
    int anoNasc;
    int idade;
    float peso;
    float altura;
};

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    Pessoa p1;

    p1.nome = "Alberto Matias Santos"; // todas as informações são fictícias
    p1.idade = 26;
    p1.peso = 85.5;
    p1.altura = 1.70;

    cout << "Nome...: " << p1.nome << endl;
    cout << "Idade..: " << p1.idade << " anos" << endl;
    cout << "Peso...: " << p1.peso << " kg" << endl;
    cout << "Altura.: " << p1.altura << "m" << endl;

    cout << "-----------------------------------" << endl;

    Pessoa p2;

    p2.nome = "Carlos Almeida da Silva";
    p2.idade = 45;
    p2.peso = 74.8;
    p2.altura = 1.65;

    cout << "Nome...: " << p2.nome << endl;
    cout << "Idade..: " << p2.idade << " anos" << endl;
    cout << "Peso...: " << p2.peso << " kg" << endl;
    cout << "Altura.: " << p2.altura << "m" << endl;

    cout << "-----------------------------------" << endl;

    Pessoa p3;

    p3.nome = "Marta Valéria de Oliveira";
    p3.idade = 58;
    p3.peso = 61.3;
    p3.altura = 1.58;

    cout << "Nome...: " << p3.nome << endl;
    cout << "Idade..: " << p3.idade << " anos" << endl;
    cout << "Peso...: " << p3.peso << " kg" << endl;
    cout << "Altura.: " << p3.altura << "m" << endl;

    system("pause");
    return 0;

}