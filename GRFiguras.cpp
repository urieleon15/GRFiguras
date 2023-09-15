#include <stdio.h>
int main()
{
	float fArea, fRadio;
	printf("Calcular el Area de un Circulo \n");
	printf("introduzca la cantidad para el radio: ");
	scanf_s("%f", &fRadio);
	fArea = fRadio * fRadio * 3.1416;
	printf("El area para el rectangulo es: %f", fArea);


}