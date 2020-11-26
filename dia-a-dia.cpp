#include <iostream>
#include <locale>

using namespace std;
/*
    --Ainda
    --não
    --está
    --concluído!
*/
int main()
{
    setlocale(LC_CTYPE, "Portuguese");

    string nome;
    int opc;

    cout << "Digite seu nome para começar.: ";
    cin >> nome;
    cout << "Bom dia! " << nome << ", estou feliz em te ver por aqui." << endl;
    cout << "-----------------------------------" << endl;
    cout << "\nVocê dormiu bem? \n[1] Sim [2] Não";
    cin >> opc;

    if(opc == 1)
    {
        cout << "\nQue bom! Estou feliz por você!\n";
        cout << "Vai se levantar agora?\n[1] Sim [2] Não";
        cin >> opc;
        if(opc == 1)
        {
            cout << "\nVamos começar o dia então...";
            cout << "\nJá se levantou?\n[1] Sim [2] Não";
            cin >> opc;
            if(opc == 1)
            {
                cout << "\nSe vista e vá escovar os dentes";
                cout << "\nJá terminou?\n[1] Sim [2] Não";
                cin >> opc;
                if(opc == 1)
                {
                    cout << "\nVamos preparar o café da manhã...";
                    cout << "\nO que você gosta de comer?\n[1] Pão [2] Panqueca [3] Biscoito";
                    cin >> opc;
                    if(opc == 1)
                    {
                        cout << "\nPegue, corte e passe a manteiga...";
                        cout << "\nAgora que terminou, o que você vai fazer?\n[1] Assistir TV [2] Ir para o trabalho [3] Ir para academia";
                        cin >> opc;
                        if(opc == 1)
                        {
                            cout << "\nSelecione um canal e se divirta!";
                            cout << "\nJá assistiu muita TV, está chegando a hora do almoço...\nO que você vai fazer? [1] Preparar o almoço [2] Comprar comida";
                            cin >> opc;
                            if(opc == 1)
                            {
                                cout << "\nLevanta e vá fazer o almoço! Já está na hora...";
                                cout << "\nVai preparar o que hoje?\n[1] Arroz e Feijão [2] Bife com fritas [3] Lasanha [4] Salada";
                                if(opc == 1)
                                {
                                    cout << "\nBastante proteínas e ferro, só cuidado com os carboidratos...";
                                }
                                else if(opc == 2)
                                {
                                    cout << "\nPrato delicioso, porém, muito gorduroso...";
                                }
                                else if(opc == 3)
                                {
                                    cout << "\nO melhor de todos, mas se comer demais já sabe né...";
                                }
                                else if(opc == 4)
                                {
                                    cout << "\nGostei de ver, está focado na dieta...";
                                }
                                else
                                {
                                    cout << "\nOpção Inválida!";
                                }
                                
                            }
                            else if(opc == 2)
                            {
                                cout << "\nPegue o telefone e peça já!";
                                cout << "\nO cardápio de hoje é:\n[1] Frango empanado [2] Churrasquinho [3] Costela com batata";
                                cout << "\nQual você vai querer? ";
                                cin >> opc;
                                if(opc == 1)
                                {
                                    cout << "\nDesses aí é o melhor para quem está na dieta...";
                                }
                                else if(opc == 2)
                                {
                                    cout << "\nVocê é quem sabe... depois não chora...";
                                }
                                else if(opc == 3)
                                {
                                    cout << "\nHummm... Que delícia!";
                                }
                                else
                                {
                                    cout << "\nOpção Inválida!";
                                }                                
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                            
                        }
                        else if(opc == 2)
                        {
                            cout << "\nSe arrume ou vai chegar atrasado!";
                            cout << "\nVai de carro ou de ônibus?\n[1] Carro [2] Ônibus";
                            if(opc == 1)
                            {
                                cout << "\nTire o carro da garagem e vamos! Hoje o trânsito está demais...";
                            }
                            else if(opc == 2)
                            {
                                cout << "\nDepois de ter carro ir de ônibus? Você só pode estar ficando doido... Vá para o ponto rápido então! O ônibus já vai passar...";
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                            
                        }
                        else if(opc == 3)
                        {
                            cout << "\nIsso mesmo! Vá se exercitar!";
                            cout << "\nQual exercício irá fazer hoje?\n[1] Peito e Tríceps [2] Costas e Bíceps [3] Ombros e Pernas [4] Cardio";
                            if(opc == 1)
                            {
                                cout << "\nBoa! Só pega leve para evitar lesões...";
                            }
                            else if(opc == 2)
                            {
                                cout << "\nIsso aí monstro! Bora crescer...";
                            }
                            else if(opc == 3)
                            {
                                cout << "\nNada de ficar igual um corneto hahaha...";
                            }
                            else if(opc == 4)
                            {
                                cout << "\nSempre bom fazer um cardio uma vez na semana pelo menos...";
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                            
                        }
                    }
                    else if(opc == 2)
                    {
                        cout << "\nCuidado para não se encher e engordar...";
                        cout << "\nAgora que terminou, o que você vai fazer?\n[1] Assistir TV [2] Ir para o trabalho [3] Ir para academia";
                        cin >> opc;
                        if(opc == 1)
                        {
                            cout << "\nSelecione um canal e se divirta!";
                            cout << "\nJá assistiu muita TV, está chegando a hora do almoço...\nO que você vai fazer? [1] Preparar o almoço [2] Comprar comida";
                            cin >> opc;
                            if(opc == 1)
                            {
                                cout << "\nLevanta e vá fazer o almoço! Já está na hora...";
                                cout << "\nVai preparar o que hoje?\n[1] Arroz e Feijão [2] Bife com fritas [3] Lasanha [4] Salada";
                                if(opc == 1)
                                {
                                    cout << "\nBastante proteínas e ferro, só cuidado com os carboidratos...";
                                }
                                else if(opc == 2)
                                {
                                    cout << "\nPrato delicioso, porém, muito gorduroso...";
                                }
                                else if(opc == 3)
                                {
                                    cout << "\nO melhor de todos, mas se comer demais já sabe né...";
                                }
                                else if(opc == 4)
                                {
                                    cout << "\nGostei de ver, está focado na dieta...";
                                }
                                else
                                {
                                    cout << "\nOpção Inválida!";
                                }
                            }
                            else if(opc == 2)
                            {
                                cout << "\nPegue o telefone e peça já!";
                                cout << "\nO cardápio de hoje é:\n[1] Frango empanado [2] Churrasquinho [3] Costela com batata";
                                cout << "\nQual você vai querer? ";
                                cin >> opc;
                                if(opc == 1)
                                {
                                    cout << "\nDesses aí é o melhor para quem está na dieta...";
                                }
                                else if(opc == 2)
                                {
                                    cout << "\nVocê é quem sabe... depois não chora...";
                                }
                                else if(opc == 3)
                                {
                                    cout << "\nHummm... Que delícia!";
                                }
                                else
                                {
                                    cout << "\nOpção Inválida!";
                                }
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                        }
                        else if(opc == 2)
                        {
                            cout << "\nSe arrume ou vai chegar atrasado!";
                            cout << "\nVai de carro ou de ônibus?\n[1] Carro [2] Ônibus";
                            if(opc == 1)
                            {
                                cout << "\nTire o carro da garagem e vamos! Hoje o trânsito está demais...";
                            }
                            else if(opc == 2)
                            {
                                cout << "\nDepois de ter carro ir de ônibus? Você só pode estar ficando doido... Vá para o ponto rápido então! O ônibus já vai passar...";
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                        }
                        else if(opc == 3)
                        {
                            cout << "\nIsso mesmo! Vá se exercitar!";
                            cout << "\nQual exercício irá fazer hoje?\n[1] Peito e Tríceps [2] Costas e Bíceps [3] Ombros e Pernas [4] Cardio";
                            if(opc == 1)
                            {
                                cout << "\nBoa! Só pega leve para evitar lesões...";
                            }
                            else if(opc == 2)
                            {
                                cout << "\nIsso aí monstro! Bora crescer...";
                            }
                            else if(opc == 3)
                            {
                                cout << "\nNada de ficar igual um corneto hahaha...";
                            }
                            else if(opc == 4)
                            {
                                cout << "\nSempre bom fazer um cardio uma vez na semana pelo menos...";
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                        }
                    }
                    else if(opc == 3)
                    {
                        cout << "\nBiscoito ou bolacha? hahaha";
                        cout << "\nAgora que terminou, o que você vai fazer?\n[1] Assistir TV [2] Ir para o trabalho [3] Ir para academia";
                        cin >> opc;
                        if(opc == 1)
                        {
                            cout << "\nSelecione um canal e se divirta!";
                            cout << "\nJá assistiu muita TV, está chegando a hora do almoço...\nO que você vai fazer? [1] Preparar o almoço [2] Comprar comida";
                            cin >> opc;
                            if(opc == 1)
                            {
                                cout << "\nLevanta e vá fazer o almoço! Já está na hora...";
                                cout << "\nVai preparar o que hoje?\n[1] Arroz e Feijão [2] Bife com fritas [3] Lasanha [4] Salada";
                                if(opc == 1)
                                {
                                    cout << "\nBastante proteínas e ferro, só cuidado com os carboidratos...";
                                }
                                else if(opc == 2)
                                {
                                    cout << "\nPrato delicioso, porém, muito gorduroso...";
                                }
                                else if(opc == 3)
                                {
                                    cout << "\nO melhor de todos, mas se comer demais já sabe né...";
                                }
                                else if(opc == 4)
                                {
                                    cout << "\nGostei de ver, está focado na dieta...";
                                }
                                else
                                {
                                    cout << "\nOpção Inválida!";
                                }
                            }
                            else if(opc == 2)
                            {
                                cout << "\nPegue o telefone e peça já!";
                                cout << "\nO cardápio de hoje é:\n[1] Frango empanado [2] Churrasquinho [3] Costela com batata";
                                cout << "\nQual você vai querer? ";
                                cin >> opc;
                                if(opc == 1)
                                {
                                    cout << "\nDesses aí é o melhor para quem está na dieta...";
                                }
                                else if(opc == 2)
                                {
                                    cout << "\nVocê é quem sabe... depois não chora...";
                                }
                                else if(opc == 3)
                                {
                                    cout << "\nHummm... Que delícia!";
                                }
                                else
                                {
                                    cout << "\nOpção Inválida!";
                                }
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                        }
                        else if(opc == 2)
                        {
                            cout << "\nSe arrume ou vai chegar atrasado!";
                            cout << "\nVai de carro ou de ônibus?\n[1] Carro [2] Ônibus";
                            if(opc == 1)
                            {
                                cout << "\nTire o carro da garagem e vamos! Hoje o trânsito está demais...";
                            }
                            else if(opc == 2)
                            {
                                cout << "\nDepois de ter carro ir de ônibus? Você só pode estar ficando doido... Vá para o ponto rápido então! O ônibus já vai passar...";
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                        }
                        else if(opc == 3)
                        {
                            cout << "\nIsso mesmo! Vá se exercitar!";
                            cout << "\nQual exercício irá fazer hoje?\n[1] Peito e Tríceps [2] Costas e Bíceps [3] Ombros e Pernas [4] Cardio";
                            if(opc == 1)
                            {
                                cout << "\nBoa! Só pega leve para evitar lesões...";
                            }
                            else if(opc == 2)
                            {
                                cout << "\nIsso aí monstro! Bora crescer...";
                            }
                            else if(opc == 3)
                            {
                                cout << "\nNada de ficar igual um corneto hahaha...";
                            }
                            else if(opc == 4)
                            {
                                cout << "\nSempre bom fazer um cardio uma vez na semana pelo menos...";
                            }
                            else
                            {
                                cout << "\nOpção Inválida!";
                            }
                        }
                    }
                    else
                    {
                        cout << "\nOpção Inválida!";
                    }
                    
                }
                else if(opc == 2)
                {
                    cout << "\nVamos rápido...";
                    cout << "\nPor que ainda não acabou?\n[1] Estou com preguiça, vou voltar a dormir... [2] Acabou a pasta [3] Acabou a água";
                    cin >> opc;
                    if(opc == 1)
                    {
                        cout << "\nVai lá seu preguiçoso!";
                    }
                    else if(opc == 2)
                    {
                        cout << "\nVai ter que ir no mercado comprar!";
                    }
                    else if(opc == 3)
                    {
                        cout << "\nVai lá fora ligar a bomba!";
                    }
                    else
                    {
                        cout << "\nOpção Inválida!";
                    }
                    
                }
                else
                {
                    cout << "\nOpção Inválida!";
                }
                
            }
            else if(opc == 2)
            {
                cout << "\nVai continuar dormindo?\n [1] Sim";
                cin >> opc;
                if(opc == 1)
                {
                    cout << "\nTudo bem... Depois nos falamos.";
                }
                else
                {
                    cout << "\nOpção Inválida!";
                }
                
            }
            else
            {
                cout << "\nOpção Inválida!";
            }
            
        }
        else if(opc == 2)
        {
            cout << "\nQue preguiça é essa? Mds...";
        }
        else
        {
            cout << "\nOpção Inválida!";
        }
        
    }
    else if(opc == 2)
    {
        cout << "\nQue pena. Espero que tudo fique bem!\n";
        cout << "Você vai continuar dormindo? [1] Sim";
        cin >> opc;
        if(opc == 1)
        {
            cout << "\nTudo bem, melhoras!";
        }
        else
        {
            cout << "\nOpção Inválida!";
        }
        
    }
    else
    {
        cout << "\nOpção Inválida!\n";
    }
    
    system("pause");
    return 0;
}