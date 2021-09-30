#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>

using namespace std;

int reverterStringComRecursividade(char termo[]);
int main()
{
	char palavra[100];
	cout<<"Digite qualquer palavra\n";
	cin>> palavra;
	reverterStringComRecursividade(palavra);
	cout<<palavra;
	

}

int reverterStringComRecursividade(char termo[]){
	static int i,tamanho, temp;
	
	tamanho = strlen(termo);//comprimento do vetor.
	
	//Executar o programa pela metade do tamanho do vetor de vezes
	//mais do que isso o termo retornará ao formato original.
	if(i < tamanho / 2 ){
		temp = termo[i];//guardo o caracter numa variavel temporaria - char é convertido para integer.
		termo[i] = termo[tamanho - i -1];//pego o caracter à direita e jogo numa posição a esquerda
		termo[tamanho - i -1] = temp;//pego o caracter à esquerda e jogo numa posição a direita
		i++;//variavel statica é iniciada em 0 e fica na memoria enquanto o programa está rodando. Global.
		reverterStringComRecursividade(termo);//chamo a função com o mesmo termo mas com caracteres já trocados.
	}
}






