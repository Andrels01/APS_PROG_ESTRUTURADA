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
	//mais do que isso o termo retornar� ao formato original.
	if(i < tamanho / 2 ){
		temp = termo[i];//guardo o caracter numa variavel temporaria - char � convertido para integer.
		termo[i] = termo[tamanho - i -1];//pego o caracter � direita e jogo numa posi��o a esquerda
		termo[tamanho - i -1] = temp;//pego o caracter � esquerda e jogo numa posi��o a direita
		i++;//variavel statica � iniciada em 0 e fica na memoria enquanto o programa est� rodando. Global.
		reverterStringComRecursividade(termo);//chamo a fun��o com o mesmo termo mas com caracteres j� trocados.
	}
}






