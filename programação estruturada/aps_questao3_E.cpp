#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int bingo[99];
    int i=0, j, cont,k=0;

    srand(time(NULL));

    do{
        bingo[i] = rand()%100;
        cont = 0;
        for (j=0;j<i;j++){
            if (bingo[j]==bingo[i]){
                cont = 1;
            }
        }
        if (cont==0){
            i++;
        }
    }while(i<99);

    printf ("     -------- BINGO --------");
    printf ("\n");
	
    for (i=0;i<100;i++){
        if (i>0&&i%5==0){
            printf ("\n");
            //k++;
        }
        if (i!=0&&i%25==0){
    		printf ("\n");
    		printf ("     -------- BINGO --------");
    		printf ("\n");
		}
        printf ("| %2d | ", bingo[i]);

    }

   return 0;
}
