#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    string nome, inst;
    int idade, opc;

    cout << "Olá! Tudo bem?" << endl;
    cout << "Hoje vamos aprender ciclo das quartas e quintas..." << endl;
    cout << "Digite seu nome.: ";
    cin >> nome;
    cout << "Quantos anos você tem? ";
    cin >> idade;
    cout << "Qual instrumento você toca? ";
    cin >> inst;
    cout << "Qual você quer aprender primeiro?\n\n [1] Ciclo das Quartas\n [2] Ciclo das Quintas\n\n" << endl;
    cin >> opc;

    if(opc == 1)

    {
        cout << "\nC D E F G A B C\n";
        cout << "F G A Bb C D E F\n";
        cout << "Bb C D Eb F G A Bb\n";
        cout << "Eb F G Ab Bb C D Eb\n";
        cout << "Ab Bb C Db Eb F G Ab\n";
        cout << "Db Eb F Gb Ab Bb C Db\n";
        cout << "Gb Ab Bb Cb Db Eb F Gb\n";
        cout << "Cb Db Eb Fb Gb Ab Bb Cb\n\n";
    }

    else if(opc == 2)

    {
        cout << "\nC D E F G A B C\n";
        cout << "G A B C D E F# G\n";
        cout << "D E F# G A B C# D\n";
        cout << "A B C# D E F# G# A\n";
        cout << "E F# G# A B C# D# E\n";
        cout << "B C# D# E F# G# A# B\n";
        cout << "F# G# A# B C# D# E# F#\n";
        cout << "C# D# E# F# G# A# B# C#\n\n";
    }

    else

    {
        cout << "\nOpção Inválida!\n\n";
    }
    
    system("pause");
    return 0;
}