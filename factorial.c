//Este código fue elaborado por Carlos Castañeda Mora.

#include <stdio.h>

int factorial(int n);//Declaramos la función.


int main(){
	int n;
	printf("Escriba el número: ");
	scanf("%d",&n);//Ingresamos el número.
	printf("El factorial es: ");
	printf("%d\n",factorial(n));//Ejecutamos la función factorial.
	return 0;
}

int factorial(int n){
if (n != 1){
                return n*factorial(n-1);
        }                                                       else{
                return 1;
        }}
