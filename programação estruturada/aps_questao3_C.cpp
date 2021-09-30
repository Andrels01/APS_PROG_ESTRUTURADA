#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>

using namespace std;



int main()
{
	setlocale(LC_ALL, "");
	
	
	
	
	int arr1[10], arr2[10], arr3[10], i=0, j=0, k=0;

	do{
		//Inserindo valores no vetor 1
		if(k == 0){
			cout<<"Vetor 1" <<" elemento "<<i+1<< " ";
			cin>>arr1[i];
			i++;
			if(i==10){
				k = 1;
			}
			
			
			//Inserindo valores no vetor 2
		}else if(k == 1){
			cout<<"Vetor 2" <<" elemento "<<j+1<< " ";
			cin>>arr2[j];
			j++;
			if(j==10){
				k = -1;
			}
		}
		
	}while(k != -1);
	
		
 	
 	int *p1 = arr1;
 	int *p2 = arr2;
 	
 	j=i=0;
	 
	 //Jogando valores multiplicados no vetor 3 ;
	 //usando ponteiros
	 do{
		arr3[i] = *(p1 + i) * *(p2 + i) ;
		i++;
	}while(i < 10);
	
	
	//IMPRIMINDO VETOR 3	
	do{
		cout<<"Vetor 3: posicão "<<j<<" = "<<arr3[j]<<"\n";
		j++;
	}while(j < 10);
	
	system("pause");
	return 0;
}










