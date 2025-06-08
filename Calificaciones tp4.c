#include <stdio.h>

int main() {
	
	int calif;
		
		printf("Coloque su calificacion aca: ");
	    scanf("%d", &calif);
		
		if (calif >= 90) {
			printf("Su calificacion es: A\n");
			
		} else if (calif >= 80 && calif < 90) {
			printf("Su calificacion es: B\n");
			
		} else if (calif >= 70 && calif < 80 ) {
			printf("Su calificacion es: C\n");
			
		} else if (calif >= 60 && calif < 70) {
			printf("Su calificacion es: D\n");
			
		} else {
			printf("Su calificacion es: F\n");
		}
	
	
	return 0;
}

