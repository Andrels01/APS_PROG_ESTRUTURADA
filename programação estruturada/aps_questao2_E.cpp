#include <stdio.h>    
#include <iostream>
#include <locale.h>
#include <math.h>
#include <iomanip>  

using namespace std;

void imprimir (float m[3][6]){          // Função para imprimir a matriz [3][6]
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 6; j++){
			cout<<m[i][j]<<"    ";
		}
		cout<<endl<<endl;
	}
}

int main(){
  setlocale(LC_ALL, "");
  float A[3][6], Amod[3][6], media, somapar;  /* Matriz Principal, Matriz Modificada , media aritmética, somas das colunas pares; */
  int  i, j, cont;
  media = somapar = cont = 0;

  for(i = 0; i < 3; i++){     /* Zera a Matriz */
    for(j = 0; j < 6; j++){
    	A[i][j]=0;
		}
	}
	
  for(i = 0; i < 3; i++){      /* linhas da Matriz */
	for(j = 0; j < 6; j++){    /* coluna da Matriz */
	  imprimir(A);
      cout<<"imprima o valor da linha "<<i+1<<" da coluna "<<j+1<<" : ";
      cin>>A[i][j];
      Amod[i][j] = A[i][j];
	  system("cls");
    }
  }
  for(i = 0; i < 3; i++){         /* linhas da Matriz */
    for(j = 0; j < 6; j++){      /* coluna da Matriz */
      if (j % 2 != 0) {     /* checa se as colunas são pares */
      somapar = somapar + A[i][j];
      }
      if (j == 1||j == 3) {    /* pega os valores da coluna 2 e 4 para fazera média aritmética*/
      media = media + A[i][j]; 
      cont++;
	  }
	  if (j == 1){  /* Substituição da coluna 6 pela soma das colunas 1 e 2 */
	  	Amod[i][5]= Amod[i][j] + Amod[i][0];
	  }
    }
   }
   imprimir(A);
   cout<<endl<<endl;
   cout<<"A soma dos valores das colunas pares é: "<<somapar<<endl;
   cout<<"A média aritmética dos elementos da segunda e quarta coluna é: "<<setprecision(3)<<media/cont<<endl;
   cout<<"Matriz modificada:"<<endl<<endl;
   imprimir(Amod);

}
