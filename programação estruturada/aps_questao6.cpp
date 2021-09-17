#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>

using namespace std;

int lerNumeros(int );
int main()
{
	setlocale(LC_ALL, "");
	int count = 0;
	int num,i, maior, menor, posMaior, posMenor;
	posMenor = 0;
	maior = 0;
	int vetor[10];
	cout<<"Programa para ler 10 numero\n"<<"1-Armazenar em um vetor\n"<<"2- Imprimir o vetor, maior, menor e posições\n";
	do{
		cout<<"Digite o "<<count+1<<"° numero ";
		cin>>num;
		vetor[count] = num;
		count++;
	}while(count < 10);
	
	for(i=1;i<=10;i++){
		cout<<"Vetor["<<i-1<<"] "<<vetor[i-1]<<"\n";
		if(vetor[i-1] > maior){
			maior = vetor[i-1];
			posMaior = i-1;
		}
		if(vetor[i]<vetor[posMenor] ){
			posMenor = i;
		}
	}
	menor = vetor[posMenor];
	cout<<"Maior numero -> "<<maior<<": está na posição -> "<<posMaior<<"\n";
	cout<<"Menor numero-> "<<menor<<": está na posição -> "<<posMenor;
}





