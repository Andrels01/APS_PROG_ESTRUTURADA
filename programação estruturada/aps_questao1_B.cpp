#include<stdio.h>
#include<string.h>
#include<iostream>


using namespace std;

int numeroPrimo(int num){
	bool isPrimo = true;
	int count = 0;
	int i;
	
	for(i=1;i<=num;i++){
		if(num % i == 0){
			count++;
			//cout<<num <<" � divisivel por "<<i<<" - " <<count<<"\n";
			//aqui para de computar quando isPrimo � maior que 2
			//assim n�o preciso executar o codigo muitas vezes se o numero for muito grande.
			if(count > 2 ){
				printf("Saida do break interrompendo o comando for\n");
				isPrimo = false;
				break;
			}
		}		
	}
	
	return isPrimo;
}

/*int main(){
	setlocale(LC_ALL, "");
	int num;
	do{	
		cout<<"Digite um numero pra saber se � primo - 0 para sair\n";
		cin>>num;
		if(num > 1){
			//int resultado = numeroPrimo(num); 
			cout<<num<<(numeroPrimo(num) ? " � primo\n" : " n�o � primo\n");
		}
	}while(num > 1 );
	
	return 0;
}*/
