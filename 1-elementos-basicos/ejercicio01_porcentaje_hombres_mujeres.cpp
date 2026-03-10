#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float hombres,mujeres,total,ph,pm;
	
	printf("ingrese cantidad de hombres: ");
	scanf("%f", &hombres);
	
	printf("ingrese cantidad de mujeres: ");
	scanf("%f", &mujeres);
	
	total= hombres+mujeres;
	
	ph=hombres*100/total;
	pm=mujeres*100/total;
	
	printf("El porcentaje de hombres es: %0.2f y de mujeres %0.2f ", ph,pm);
	
	return 0;
}