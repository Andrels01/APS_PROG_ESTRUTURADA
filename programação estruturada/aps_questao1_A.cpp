#include<stdio.h>
#include<string.h>
#include<iostream>


using namespace std;

int contarConsoantes(char palavra[]){
	int i;
	int quantConsoantes = -1;

	for(i=0;palavra[i]!= '\0';++i){
		if(palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' && palavra[i] != ' '
		&& palavra[i] != 'A' && palavra[i] != 'E' && palavra[i] != 'I' && palavra[i] != 'O' && palavra[i] != 'U'){
			quantConsoantes++;
		}
	}
	
	return quantConsoantes;
}


int main(){
	setlocale(LC_ALL, "");
	char palavra[100];
	
	//Executando o programa numa string simples usando COUT
	//Tem que mudar o valor da variavel quantConsoantes(dentro da fun��o) de -1 para 0.
	//cout<<"Digite qualquer palavra\n";cin>>palavra;
	
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	//executando o programa considerando espa�os. Tem que mudar o valor da variavel quantConsoantes(dentro da fun��o) de 0 para -1.
	//Parece haver algo no final do vetor
	printf("%s","Digite uma frase qualquer\n");
	fgets(palavra, sizeof(palavra), stdin);//lendo strings compostas.
	int total = contarConsoantes(palavra);
	
	printf("Total de coonsoantes � %d:  ", total);
	return 0;
}
