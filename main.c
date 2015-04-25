// Fernando Gutierrez 24/04/15
// Ejemplo para probar Git

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void imprimir(int item);
int leeMultiplica();

void main()
{
	
	int x;
	printf("Hello World");
	prinf("Dame un numero:");
	x = leeMultiplica;
	imprimir(x);
	getch();
}


void imprimir(int item)
{
	printf("La values es:%d",item);
}


int leeMultiplica()
{
	int item;
	scanf("%d",&item);
	return item * 5;
}



