#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    string nome, inst;
    int idade, opc;

    cout << "Hoje vamos aprender sobre Campo Harmônico Maior...\n\n";
    cout << "Qual é o seu nome? ";
    cin >> nome;
    cout << "Quantos anos você tem? ";
    cin >> idade;
    cout << "Qual instrumento você toca? ";
    cin >> inst;
    cout << "\nEscolha uma opção...\n\n";
    cout << " [1] Dó [2] Ré [3] Mi [4] Fá [5] Sol [6] Lá [7] Si\n\n";
    cin >> opc;

    switch (opc)
    {
        case 1:
            cout << "\nC7M Dm7 Em7 F7M G7 Am7 Bm7(b5)\n\n";
        break;

        case 2:
            cout << "\nD7M Em7 F#m7 G7M A7 Bm7 C#m7(b5)\n\n";
        break;
        
        case 3:
            cout << "\nE7M F#m7 G#m7 A7M B7 C#m7 D#m7(b5)\n\n";
        break;

        case 4:
            cout << "\nF7M Gm7 Am7 Bb7M C7 Dm7 Em7(b5)\n\n";
        break;

        case 5:
            cout << "\nG7M Am7 Bm7 C7M D7 Em7 F#m7(b5)\n\n";
        break;

        case 6:
            cout << "\nA7M Bm7 C#m7 D7M E7 F#m7 G#m7(b5)\n\n";
        break;

        case 7:
            cout << "\nB7M C#m7 D#m7 E7M F#7 G#m7 A#m7(b5)\n\n";
        break;

        default:
            cout << "\nOpção Inválida!\n\n";

    }

    system("pause");
    return 0;
}