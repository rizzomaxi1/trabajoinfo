#include <stdio.h>

int main() {
	float peso;
	float altura;
	float indice;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &peso);
	
	printf("Ingrese la altura en metros: ");
	scanf("%f", &altura);
	
	indice = peso / (altura * altura);
	
	printf("Su índice de masa corporal es: %.2f\n", indice);
	
	printf("Tabla de comparaciones\n");
	printf("menor a 18.5 indica Bajo peso\n");
	printf("18.5 - 24.9  indica Normal\n");
	printf("25.0 - 29.9  indica Sobrepeso\n");
	printf("Mayor o igual 30 indica Obesidad\n");
	
	return 0;
}
