#include <iostream>
#include <locale.h>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	string a[10], b[10], c[20];
	
	for(int i=0; i<=9; i++){
		cout << i+1 << " Insira um valor para o vetor A: ";
		cin >> a[i];
	}
	
	system("cls");
	
	for(int i=0; i<=9; i++){
		cout << i+1 << " Insira um valor para o vetor B: ";
		cin >> b[i];
	}
	
	system("cls");
	
	int VetA = 0, VetB =0;
	
	for (int i=0; i<=19; i++){
		
		if((i%2)==0){
			c[i] = a[VetA];
			VetA++;
		} else {
			c[i] = b[VetB];
			VetB++;
		}
		cout << i << "Vetor C: " << c[i] << "\n";
	}
	
	system("PAUSE");
	return 0;
}



