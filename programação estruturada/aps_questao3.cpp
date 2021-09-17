#include <stdio.h>
#include <iostream>
#include <locale.h>

using namespace std;

int somaRecursiva(int num);
int main()
{
 	setlocale(LC_ALL,"");
 	int num;
 	cout<<"Digite um numero: ";
 	cin>>num;
   	int res = somaRecursiva(num);
   	
   	cout<<"A soma de todos os inteiros pares menores que "<< num << " é "<<res;
    return 0;
}


int somaRecursiva(int num){
	
	if(num == 0){
		return 0;
	}
	if(num % 2 == 0){
		return num + somaRecursiva(num - 2);
	}else{
		return somaRecursiva(num - 1);
	}
		
}






