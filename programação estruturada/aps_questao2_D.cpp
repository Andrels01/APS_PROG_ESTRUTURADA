#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "");

	int i, j, k, matri,matriM;
	float medr=0,nota,al[5][5],maior;
	
	for (i=0; i<5; i++){
		cout<<"Matrícula do aluno "<<i+1<<":";  cin>>matri;
		al[i][0]=matri;

		 for(j=1; j<3; j++){
			cout<<"Nota AV"<<j<<":";  cin>>al[i][j];
		}
		cout<<"Média dos trabalhos:";  cin>>al[i][3];
		al[i][4] = (al[i][1]+al[i][2])/2 + al[i][3];
     	cout<<"Nota final:"<<al[i][4]<<endl<<endl;
     		if(al[i][4]>maior){
     			maior=al[i][4];
     			matriM=matri;
			 }
			medr = medr+al[i][4];
			k++;
		}
	cout<<"A Média aritmética dos alunos:"<<medr/k<<endl;
	
	cout<<"A matrícula do aluno que obteve a maior nota final é: "<<matriM<<endl<<"Com a nota final de: "<<maior<<endl; 
	}


