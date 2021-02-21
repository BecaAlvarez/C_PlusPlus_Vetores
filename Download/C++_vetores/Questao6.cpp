#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int QtdPosicoes = 0;
	int QtdElementos = 0;
	int soma = 0, media=0, maior=0, menor=0;
	
	cout << "Informe quantos elementos deseja armazenar em um vetor: ";
	cin >> QtdPosicoes;
	
	int vetor[QtdPosicoes];
	
	for(int i=0; i<QtdPosicoes; i++){
		cout << "Informe o " << i+1 << "º valor: ";
		cin >> vetor[i];
	}
	
	cout << "Dos valores digitados na ordem de cima para baixo, quantos elementos desejas utilizar: ";
	cin >> QtdElementos;
	
	if(QtdElementos>QtdPosicoes && QtdElementos>0){
		cout << "Informe um valor menor ou igual ao tamanho do vetor\n";
		cout << "Programa encerrado.";
	} else {
		
		maior = vetor[0];
		menor = vetor[0];
		
		for(int i=0; i<QtdElementos; i++){
			soma += vetor[i];
			
			if(maior<vetor[i]){
				maior = vetor[i];
			}
			
			if(menor>vetor[i]){
				menor = vetor[i];
			}
		}
		
		cout << "A soma dos elementos é: " << soma << "\n";
		cout << "A média dos elementos é " << soma/QtdElementos << "\n";
		cout << "O maior valor é: " << maior << "\n";
		cout << "O menor valor é: " << menor << "\n";
		
	}
	
return 0;
}
