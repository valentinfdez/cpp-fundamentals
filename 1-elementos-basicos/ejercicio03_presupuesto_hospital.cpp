#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int presupuesto;
	float areaginecologia,areatraumatologia,areapediatria;
	
	printf("Introducir el presupuesto anual: ");
	scanf("%d", &presupuesto);
	
	//ginecologia
    areaginecologia=presupuesto*0.40;
	
	//traumatologia
	areatraumatologia= presupuesto*0.30;
	
	//pediatria
	areapediatria=presupuesto*0.30;

	printf("\n\n\nEl area de Ginecologia recibira: %0.2f pesos uruguayos\n", areaginecologia);
	printf("\nEl area de Traumatologia recibira: %0.2f pesos uruguayos\n", areatraumatologia);
	printf("\nEl ares de Pediatria recibira: %0.2f pesos uruguayos\n", areapediatria);

	
	return 0;
}