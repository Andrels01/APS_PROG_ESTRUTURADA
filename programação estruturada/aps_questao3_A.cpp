#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "");
	float matriz[3][3];
	int i,j,n;
	float (*pointer)[3] = matriz;
	
	//Inserindo valores na matriz
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Linha "<<i+1<<" coluna "<<j+1<<"\n";
			cin>>matriz[i][j];
		}
	}		
	//Imprimindo os endereços
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Endereço de "<<matriz[i][j]<<" -> "<< (*(pointer + i) + j)<<"\n";			
		}
	}
	
}







