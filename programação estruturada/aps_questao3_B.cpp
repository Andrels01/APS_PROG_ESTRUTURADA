#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>

using namespace std;

int imprimirArray(int arr[],int size);

int main()
{
	setlocale(LC_ALL, "");
	int arr[5] = {1,2,3,4,5};
	int i,j;
	int len = sizeof(arr)/sizeof(int);
		cout<<len<<"\n\n";
	
		
	//Imprimindo os eleentos do array
	imprimirArray(arr,len);
	

	
	
}

//Imprimindo array usando aritimética de ponteiros
int imprimirArray(int arr[], int size){
	int i;
	int *p = arr;
	for(i=0;i<size;i++){
		cout<<"Array na posicão ["<<i<<"] "<< *p<<"\n";
		p++;
	}
}







