#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>
#include "aps_questao2.cpp"

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	char gabarito[10] = {'a','a','c','b','d','e', 'a','c','b','d'};
	char alunos[5][50];
	char respostas[5][10];
	int notas[5];
	int quantAlunos;
	int i,c;
	printf("Insira a quantidade de aluns a serem avaliados\n");
	scanf("%i", &quantAlunos);
	
	for(i=0;i<quantAlunos;i++){
		printf("Nome do aluno %d\n", i+1);
		scanf("%s", &alunos[i]);
	}
	
	for(i=0;i<quantAlunos;i++){
		printf("Insira as respostas dos aluno %d\n", i+1);
		for(c=0;c<10;c++){
			cout<<"Resposta da questão"<<c+1<<"\n";
			cin>>respostas[i][c];
		}
	}
	
	//int size = sizeof(gabarito);
	//cout<<"GAB: "<<size<<"\n";
	
	for(i=0;i<10;i++){
		int n = 0;
		for(c=0;c<10;c++){
			if(gabarito[c]==respostas[i][c]){
				n++;	
			}
		}
		notas[i]=n;
	}
	
	for(i=0;i<quantAlunos;i++){
		cout<<alunos[i]<<" teve nota "<<notas[i]<<"\n";
		if(notas[i] >= 7){
			cout<<"Aluno Aprovado\n";	
		}else{
			cout<<"Aluno Reprovado\n";
		}
	}
}







