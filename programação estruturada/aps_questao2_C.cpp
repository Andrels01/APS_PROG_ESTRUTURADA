#include <stdio.h>   
#include <iostream>
#include <locale.h>


using namespace std;

void imprimir (int m[3][3]){          // Função para imprimir a matriz [3][3]
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<m[i][j]<<"    ";
		}
		cout<<endl<<endl;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int i,k;
	int vetor[3][3] = {0,0,0,0,0,0,0,0,0};
	int somaDasColunas[3] = {0,0,0};
	
	cout<<"Insira valores no vetor de 3X3\n"<<endl<<endl;
	
	//Inserindo valores no Vetor 3x3;
	
 	for(i = 0; i < 3; i++){      /* linhas da Matriz */
		for(k = 0; k < 3; k++){    /* coluna da Matriz */
			imprimir(vetor);
			cout<<"imprima o valor da linha "<<i+1<<" da coluna "<<k+1<<" : ";
			cin>>vetor[i][k];
			system("cls");
		}
	}
	
	cout<<"------------------------------------------------\n";

	//Somando as colunas do vetor 3X3;
	
	for(i=0;i<3;i++){
		for(k=0;k<3;k++){
			somaDasColunas[i] += vetor[k][i];
		}	
	}	
	
	//Mostrando valores do vetor que que recebeu
	//a soma das colunas.
	
	for(i=0;i<3;i++){
		cout<<somaDasColunas[i]<<"\n";
	}
}







