
#include <stdio.h>

// enlace de github https://github.com/rizzomaxi1/trabajoinfo.git


    int main() {
        
        float califmax = 0;
		float califmin = 100;
		int estudiantes;
		float calificacion;
		float promedio;
		float suma = 0;
		
		do {
			printf("Ingrese la cantidad de estudiantes: ");
			scanf("%d", &estudiantes);
			
			if (estudiantes <= 0) {
				printf("Error: la cantidad de estudiantes debe ser un numero positivo.\n");
			}
		} while (estudiantes <= 0);
		
		for (int i = 1; i <= estudiantes; i++) {
			
			do {
				printf("Ingrese la calificacion del estudiante %d (0-100): ", i);
				scanf("%f", &calificacion);
				
				if (calificacion < 0 || calificacion > 100) {
					printf("Error: la calificacion debe estar entre 0 y 100.\n");
				}
			} while (calificacion < 0 || calificacion > 100);
			
			
			suma = suma + calificacion;
			
			
			if (calificacion > califmax) {
				califmax = calificacion;
			}
			if (calificacion < califmin) {
				califmin = calificacion;
			}
		}
		
		
		promedio = suma / estudiantes;
		
	
		printf("\n--- Resultados ---\n");
		printf("Promedio de calificaciones: %.2f\n", promedio);
		printf("Calificacion mas alta: %.2f\n", califmax);
		printf("Calificacion mas baja: %.2f\n", califmin);
    	
    return 0; 
	}
