#include<stdio.h>
#include<string.h>
#include<iostream>


using namespace std;



int main(){
	  int v[4]={0,2,1,3};

                int i=1, min=0, aux=0;
				int b = 0;
               

                do {

                    min = v[i-1];

                    if (min < v[i]){

                        aux = v[i];

                        v[i] = v[min];

                        v[min] = aux;

                    }

                    i++;         

                }while (i<=4);
                
                while(b<4){
                	printf("%d", v[b]);
                	b++;
				}
	
	return 0;
}
