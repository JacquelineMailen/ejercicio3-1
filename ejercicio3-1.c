/*
 ============================================================================
Ejercicio 3-1: Crear una función que muestre por pantalla el número entero que
recibe como parámetro.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int numeroEntero(int num1);

int main(void)
{
	setbuf(stdout, NULL);

	int numero;

	printf("INGRESE UN NUMERO ENTERO:\n");
	scanf("%d", &numero);

	numero = numeroEntero(numero);
	printf("El numero ingresado es: %d", numero);


	return 0;
}
int numeroEntero(int nume1)
{
	int num1;
	num1=nume1;

	return num1;
}
