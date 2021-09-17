#include<stdio.h>
#include<string.h>
#include<iostream>


using namespace std;

int contarConsoantes(char palavra[]){
	int i;
	int quantConsoantes = -1;

	for(i=0;palavra[i]!= '\0';++i){
		if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' && palavra[i] != ' '){
			quantConsoantes++;
		}
	}
	
	return quantConsoantes;
}


int main(){
	setlocale(LC_ALL, "");
	char palavra[100];
	
	//string simples
	//cout<<"Digite qualquer palavra\n";cin>>palavra;
	
	//Considerando espaços. Tenho que mudar o valor da variavel quantConsoantes(dentro da função) de 0 para -1.
	// Parece haver algo no final do vetor
	fgets(palavra, sizeof(palavra), stdin);//lendo strings compostas.
	int total = contarConsoantes(palavra);
	
	printf("Total de coonsoantes é %d:  ", total);
	return 0;
}
