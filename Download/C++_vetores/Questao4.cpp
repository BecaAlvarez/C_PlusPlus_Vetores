#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade[11];
	int faixa1 = 0;
	int faixa2 = 0;
	int faixa3 = 0;
	int faixa4 = 0; 
	int faixa5 = 0;
	
	for(int i=0;i<=11;i++){
		cout << "Informe a " << i+1 << "º idade: ";
		cin >> idade[i];
		if(idade[i]>0 && idade[i]<=15){
			faixa1++;
		}else if(idade[i]>=16 && idade[i]<=30){
			faixa2++;
		}else if(idade[i]>=31 && idade[i]<=45){
			faixa3++;
		}else if(idade[i]>=46 && idade[i]<=60){
			faixa4++;
		}else{
			faixa5++;
		}
	}
	system("cls");
	cout << "\n\n";
	cout << "Quantidade de pessoas na 1º faixa etária (0 - 15 anos): " << faixa1;
	cout << "\nQuantidade de pessoas na 2º faixa etária (16 - 30 anos): " << faixa2;
	cout << "\nQuantidade de pessoas na 3º faixa etária (31 - 45 anos): " << faixa3;
	cout << "\nQuantidade de pessoas na 4º faixa etária (46 - 60 anos): " << faixa4;
	cout << "\nQuantidade de pessoas na 5º faixa etária (acima de 60 anos): " << faixa5 ;
	cout << "\nPorcentagem de pessoas na 1º faixa etária (0 - 15 anos): " << (faixa1*100)/11 << "%\n";
	cout << "Porcentagem de pessoas na 5º faixa etária (acima de 60 anos): " << (faixa5*100)/11 << "%\n";
	
	system("PAUSE");
	return 0;
}
