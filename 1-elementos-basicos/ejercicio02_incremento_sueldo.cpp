#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int sueldo,sueldofinal, sueldoincremento;
	
	printf ("Ingrese su sueldo en pesos uruguayos: ");
	scanf("%d", &sueldo);
	
	sueldoincremento=sueldo*0.25;
	sueldofinal= sueldoincremento+sueldo;
	
	
	printf("\nCon un incremento del 25 porciento su sueldo es de %d pesos uruguayos", sueldofinal);
	

	
	
	return 0;
}