#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "");
	
	float arr[10], temp;
	int s,k,i;
	i=0;
	cout<<"Insira 10 valores reais\n";
	do{
		cout<<i+1<<" ° numero\n";
		cin>>arr[i];
		i++;
	}while(i<10);
	
	
	
	cout<<"\nArray antes\n";
    cout<<"\n---------------------------------------------";
     
	for(k=0;k<10;k++){
		cout<<arr[k]<<"---";
	}
	//Ordenando o vetor
	for(k=0;k<10;k++){
		for(s=0;s<10;s++){
			if(arr[s] > arr[k]){
				temp = arr[k];
				arr[k] = arr[s];
				arr[s] = temp;
			}	
		}
		
	}
		
	cout<<"\n\nArray ordenado de forma crescente\n";
    cout<<"\n---------------------------------------------";
	for(k=0;k<10;k++){
		cout<<arr[k]<<"---";
	}
 	cout<<"\n---------------------------------------------\n";
 	
 	system("pause");
 	return 0;
	
}










