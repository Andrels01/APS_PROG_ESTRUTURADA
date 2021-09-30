#include <stdio.h>  
#include <string.h>  
#include <iostream>
#include <locale.h>
#include "aps_questao1_B.cpp"

using namespace std;

int mdcRecursivo(int num1, int num2, int primo);
bool tester(int expected, int n1, int n2, int primo);
int main()
{
	setlocale(LC_ALL, "");
	int n1,n2;
	cout<<"MDC de 2 numeros\n"<<"Digite 2 numeros\n";
	cin>>n1;
	cin>>n2;
	int resultado =	mdcRecursivo(n1,n2,2);
	printf("Maximo divisor comum entre %d e %d é %d", n1, n2, resultado);
	
	//tester(6, 18,24, 2);
}

int mdcRecursivo(int num1, int num2, int primo){
	static int mdc = 1;
	if(numeroPrimo(primo)){
		if(num1 == 1 && num2 == 1){
			return mdc;
		}else{
			int a = num1 % primo; 
			int b = num2 % primo; 		
			if(a == 0 &&  b == 0){
				mdc = mdc * primo;
				return mdcRecursivo(num1/primo, num2/primo, primo);
			}else if(a == 0 && b > 0){
				return mdcRecursivo(num1/primo, num2, primo);
			}else if(a > 0 && b == 0){
				return mdcRecursivo(num1, num2/primo, primo);
			}else if(a > 0 && b > 0){
				return mdcRecursivo(num1, num2, primo+1);
			}
			}
		
		
	}else{
		return mdcRecursivo(num1, num2, primo + 1);
	}

}




