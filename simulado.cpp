#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Portuguese");
	
	cout << "SIMULADO AV" << endl;
	cout << "Avalie seus conhecimentos..." << endl;
	cout << "------------------------------\n\n";
	
	string nome;
	int acertos = 0, erros = 0, nota;
	long long int matricula;
	char res1, res2, res3, res4, res5, res6, res7, res8, res9;
	
	cout << "Disciplina.: PENSAMENTO COMPUTACIONAL\n\n";
	cout << "Digite seu nome.: ";
	cin.ignore();
	getline(cin, nome);
	cout << "Digite o número da sua matrícula.: ";
	cin >> matricula;
	
	cout << "\nQuestão 1:\n";
	cout << "------------------------------\n\n";
	cout << "Pode ser definido com uma instrução para um computador:\n\n";
	cout << "a) Qualquer representação de um elemento num programa executável." << endl;
	cout << "b) É um processo limitado e de não representação." << endl;
	cout << "c) São variáveis não estruturadas e de difícil percepção para a máquina." << endl;
	cout << "d) A interação entre o homem e a máquina." << endl;
	cout << "e) Uma operação muito complexa para ser executada por um computador." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res1;
	
	switch(res1)
	{
		case 'a':
			cout << "\n\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'A':
			cout << "\n\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\n\nResposta Incorreta. Tente novamente..." << endl;
			erros++;
			break;		
	}
	
	cout << "\nQuestão 2:\n";
	cout << "------------------------------\n\n";
	cout << "Um conjunto de tipos de programas administrativos e de supervisão que organizam todo o sistema. \nEstamos falando do conceito de:\n\n";
	cout << "a) Linguagem binária." << endl;
	cout << "b) Software." << endl;
	cout << "c) Hardware." << endl;
	cout << "d) Sistema Operacional." << endl;
	cout << "e) Linguagem de Máquina." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res2;
	
	switch(res2)
	{
		case 'd':
			cout << "\nResposta Correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'D':
			cout << "\nResposta Correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta Incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "\nQuestão 3:\n";
	cout << "------------------------------\n\n";
	cout << "Como é conhecido um pequeno computador embutido em um único chip?\n\n";
	cout << "a) Memória RAM." << endl;
	cout << "b) Memória ROM." << endl;
	cout << "c) Microcontrolador." << endl;
	cout << "d) Placa Mãe." << endl;
	cout << "e) Memória Persistente." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res3;
	
	switch(res3)
	{
		case 'c':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'C':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta Incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "\nQuestão 4:\n";
	cout << "------------------------------\n\n";
	cout << "Qual é o componente de um sistema computacional responsável por realizar testes de hardware logo após o ligamento \ndo equipamento, e, em seguida, procurar um sistema operacional em um sistema de armazenamento persistente, \npara dar início ao seu carregamento?\n\n";
	cout << "a) Código fonte." << endl;
	cout << "b) Compilador." << endl;
	cout << "c) Sistema operacional." << endl;
	cout << "d) Interpretador." << endl;
	cout << "e) Firmware." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res4;
	
	switch(res4)
	{
		case 'e':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'E':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta Incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "\nQuestão 5:\n";
	cout << "------------------------------\n\n";
	cout << "Entre os componentes de hardware estudados, selecione a opção que indique o componente \nresponsável efetivamente executar instruções.\n\n";
	cout << "a) SSD." << endl;
	cout << "b) RAM." << endl;
	cout << "c) HD." << endl;
	cout << "d) Pendrive." << endl;
	cout << "e) CPU." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res5;
	
	switch(res5)
	{
		case 'e':
			cout << "\nResposta Correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'E':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "\nQuestão 6:\n";
	cout << "------------------------------\n\n";
	cout << "Quantos bytes possui um terabyte?\n\n";
	cout << "a) 512." << endl;
	cout << "b) 1099511627776." << endl;
	cout << "c) 1024." << endl;
	cout << "d) 1073741824." << endl;
	cout << "e) 1048576." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res6;
	
	switch(res6)
	{
		case 'b':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'B':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta Incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "\nQuestão 7:\n";
	cout << "------------------------------\n\n";
	cout << "Assinale as alternativas que representam o código RGB para a cor branca:\n\n";
	cout << "a) (255,255,255)." << endl;
	cout << "b) (100,100,100)." << endl;
	cout << "c) (0,255,0)." << endl;
	cout << "d) (0,0,0)." << endl;
	cout << "e) (0,0,255)." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res7;
	
	switch(res7)
	{
		case 'a':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'A':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta Incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "\nQuestão 8:\n";
	cout << "------------------------------\n\n";
	cout << "Assinale a alternativa que representa o código RGB (Red, Green, Blue) para a cor laranja:\n\n";
	cout << "a) (120,80,0)." << endl;
	cout << "b) (255,255,255)." << endl;
	cout << "c) (0,0,0)." << endl;
	cout << "d) (0,0,255)." << endl;
	cout << "e) (0,255,0)." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res8;
	
	switch(res8)
	{
		case 'a':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'A':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta Incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "\nQuestão 9:\n";
	cout << "------------------------------\n\n";
	cout << "Qualquer tom e amarelo possui valores mais altos dos componentes R (vermelho) e G (verde), \ne valores mais baixos para o componente B (azul).";
	cout << "Usamos essa característica para escrever um código que seleciona, com adequada taxa de acerto, pixels em diversas \ntonalidades de amarelo. Este é um exemplo da habilidade de pensamento computacional denominada:\n\n";
	cout << "a) Abstração." << endl;
	cout << "b) Análise/avaliação." << endl;
	cout << "c) Detecção de padrões." << endl;
	cout << "d) Decomposição." << endl;
	cout << "e) Automação." << endl;
	cout << "\nQual é a resposta certa? ";
	cin >> res9;
	
	switch(res9)
	{
		case 'c':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		case 'C':
			cout << "\nResposta correta. Parabéns!" << endl;
			acertos++;
			break;
		default:
			cout << "\nResposta incorreta. Tente novamente..." << endl;
			erros++;
			break;
	}
	
	cout << "------------------------------\n";
	cout << "\nVocê acertou: " << acertos << " questões." << endl;
	cout << "\nVocê errou: " << erros << " questões." << endl;
	cout << "\n------------------------------\n";
	nota = acertos;

	cout << "\nSua nota foi.: " << nota << endl;

	if(nota >= 6)
	{
		cout << "\nParabéns! Você está aprovado..." << endl;
	}
	else
	{
		cout << "\nVocê está de recuperação..." << endl;
	}
	
	system("pause");
	return 0;
}