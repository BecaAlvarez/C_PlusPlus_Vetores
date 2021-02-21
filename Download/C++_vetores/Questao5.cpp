#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <iomanip>
#include <string.h>a
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade[10];
	float peso[10];
	int QtdPeso = 0;
	int MediaIdade =0;
	
	for(int i=0;i<=9;i++){
		cout << "Informe a " << i+1 << "º idade: ";
		cin >> idade[i];
		cout << "Informe o " << i+1 << "º peso: ";
		cin >> peso[i];
		
		if(peso[i]>65){
			QtdPeso++;
		}
		
		MediaIdade += idade[i];
	}
	
	cout << "\n\n";
	cout << "Quantidade de pessoas com mais de 65kg: " << QtdPeso << "\n";
	cout << "A média das idades inseridas é: " << MediaIdade/10;
	
return 0;
}
