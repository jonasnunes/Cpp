#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    float salario, aumento;
    string nome, setor;

    cout << "Quem recebe menos de R$ 1.500 vai receber um aumento de 15%" << endl;
    cout << "Qual o nome do funcionário(a)? ";
    cin >> nome;
    cout << "Em que setor ele(a) trabalha? ";
    cin >> setor;
    cout << "Qual o salário dele(a)? R$ ";
    cin >> salario;

    aumento = salario + 0.15 * salario;

    if(salario < 1.500)

    {
        cout.precision(4);
        cout << "Você ganhava R$ " << salario << ", e agora com o aumento passa a receber R$ " << aumento << endl;
    }

    else 

    {
        cout << "Infelizmente não tem aumento para esse funcionário ainda..." << endl;
    }

    system("pause");
    return 0;
}