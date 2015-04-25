// Fernando Gutierrez 24/04/15
// Ejemplo para probar Git

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void imprimir(int item);

void main()
{
	
	int x, y;
	printf("Hello World");
	prinf("Dame un numero:");
	scanf("%d",&x);
	y=x*3;
	imprimir(y);
	getch();
}


void imprimir(int item)
{
	printf("La values es:%d",item);
}