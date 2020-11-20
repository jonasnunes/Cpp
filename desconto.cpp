#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    float preco, desconto, parcelado;
    int opc;

    cout << "Digite o valor do produto: R$ ";
    cin >> preco;

    desconto = preco - 0.05 * preco;
    parcelado = preco + 0.05 * preco;

    cout << "Pagamento à vista ou parcelado?\n\n [1] à vista [2] parcelado\n\n";
    cin >> opc;

    if(opc == 1)

    {
        cout << "\nSeu produto irá custar R$ " << desconto << "\n\n";
    }

    else if(opc == 2)

    {
        cout << "\nSeu produto irá custar R$ " << parcelado << "\n\n";
    }

    else

    {
        cout << "\nOpção Inválida!\n\n";
    }
    
    system("pause");
    return 0;
}