#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

void LimpaTela()
{
	system("CLS");
}

void IniciaTabuleiro(char Tabuleiro[10][10], char Mascara[10][10])
{

	int Linha, Coluna;

    // Popula o Tabuleiro com Agua
	for (Linha = 0; Linha < 10; Linha++)
	{
		for (Coluna = 0; Coluna < 10; Coluna++)
		{
			Tabuleiro[Linha][Coluna] = 'A';
			Mascara[Linha][Coluna] = '*';
		}
	}
}

void ExibeTabuleiro(char Tabuleiro[10][10], char Mascara[10][10])
{
	int Linha, Coluna;

	//Exibe o Tabuleiro 
	for (Linha = 0; Linha < 10; Linha++)
	{
		for (Coluna = 0; Coluna < 10; Coluna++)
		{
			//std::cout << " " << Tabuleiro[Linha][Coluna];
			std::cout << " " << Mascara[Linha][Coluna];
		}
		std::cout << "\n";
	}
}

void Jogo() {

	/// <summary>
	/// Variaveis Gerais 
	/// </summary>
	char Tabuleiro[10][10], Mascara[10][10]; //Tabubeiro do Jogo 
	int Linha, Coluna; //auxiliares de navegação
	int LinhaJogada, ColunaJogada; //posição escolhida pelo jogador 
	int EstadoDeJogo = 1; // 1 = jogo acontecendo \\ 0 = fim de jogo

	//Inicia Tabuleiro Com Agua
	IniciaTabuleiro(Tabuleiro, Mascara);

	while (int EstadoDeJogo = 1)
	{
		LimpaTela();
		//Inicia Tabuleiro
		ExibeTabuleiro(Tabuleiro, Mascara);

		std::cout << "Digite uma linha: ";
		std::cin >> LinhaJogada;

		std::cout << "Digite uma coluna: ";
		std::cin >> ColunaJogada;

		//Revela o que está no tabuleiro
		Mascara[LinhaJogada][ColunaJogada] = Tabuleiro[LinhaJogada][ColunaJogada];
	}


	
}

void MenuInicial()
{
	int Opcao = 0;

	while (Opcao < 1 || Opcao > 3)
	{
		{
			LimpaTela();
			std::cout << "BEM-VINDO AO JOGO DE BATALHA NAVAL";
			std::cout << "\n1 - Jogar ";
			std::cout << "\n2 - Sobre ";
			std::cout << "\n3 - Sair";
			std::cout << "\nEscolha Uma Opcao e Tecle ENTER: ";
			std::cin >> Opcao;

			switch (Opcao) {
			case 1:
				//inicia o jogo 
				//std::cout << "Jogo Iniciado!";
				Jogo();
				break;
			case 2:
				//sobre o jogo
				std::cout << "Informacoes do Jogo";
				break;
			case 3:
				//sair jogo
				std::cout << "Ate Mais!";
				break;
			}

		}

	}
}

	int main()
	{
		MenuInicial();

		return 0;
	}


	
		

