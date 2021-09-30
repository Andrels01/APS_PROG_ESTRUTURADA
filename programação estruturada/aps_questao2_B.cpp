#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>
#include <ctype.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "");
	char gabarito[10];
	char alunos[5][50];
	char respostas[5][10];
	int notas[5];
	int quantAlunos;
	int i,c;
	
	//leitura dos gabaritos
	for(i=0;i<10;i++){
		printf("Insira o gabarito da questão número %d:\n", i+1);
		scanf("%s", &gabarito[i]);
		gabarito[i] = toupper(gabarito[i]);
	}
	
	//Escolha da quantidade alunos a serem avaliados
	printf("Insira a quantidade de alunos a serem avaliados:\n");
	scanf("%i", &quantAlunos);
	
	//Vetor de alunos sendo populado com os nomes.
	//de acordo com a quantidade de alunos. 
	for(i=0;i<quantAlunos;i++){
		printf("Nome do aluno %d\n", i+1);
		scanf("%s", &alunos[i]);
	}
	
	//Insere as repostas de cada aluno
	for(i=0;i<quantAlunos;i++){
		printf("Insira as respostas do aluno %d\n", i+1);
		for(c=0;c<10;c++){
			cout<<"Resposta da questão"<<c+1<<":\n";
			cin>>respostas[i][c];
			respostas[i][c] = toupper(respostas[i][c]);
		}
	}
	

	//Comparando as resposta de cada aluno com o gabarito
	//e inserindo sua respectiva nota no vetor notas.
	for(i=0;i<10;i++){
		int n = 0;
		for(c=0;c<10;c++){
			if(gabarito[c]==respostas[i][c]){
				n++;	
			}
		}
		notas[i]=n;
	}
	
	//Mensagem de APROVADO ou REPROVADO
	//caso o aluno não receba media 7.
	for(i=0;i<quantAlunos;i++){
		cout<<alunos[i]<<" teve nota "<<notas[i]<<" ";
		if(notas[i] >= 7){
			cout<<": Parabens, Aprovado.\n";	
		}else{
			cout<<": Reprovado.\n";
		}
	}
}







