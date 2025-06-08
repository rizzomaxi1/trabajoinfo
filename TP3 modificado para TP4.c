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
	
	if (indice < 18.5){
		printf("Su indice indica: Bajo peso\n");
	}
	else if (indice >= 18.5 && indice <= 24.9){
		printf("Su indice indica: Normal\n");
	}
	else if (indice >= 25.0 && indice <= 29.9){
		printf("Su indice indica: Sobrepeso\n");
	}
	else if (indice >= 30){
		printf("Su indice indica: Obesidad\n");
	}
	
	
	return 0;
}

