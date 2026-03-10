#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float monto1,monto2,monto3, pmonto1,pmonto2,pmonto3,total;
	
	printf("Introduzca el primer monto de inversion: ");
	scanf("%f", &monto1);
	
	printf("Introduzca el segundo monto: ");
	scanf("%f", &monto2);
	
	printf("Introduzca el tercer monto: ");
	scanf("%f", &monto3);
	
	total=monto1+monto2+monto3;
	
	pmonto1=monto1*100/total;
	pmonto2=monto2*100/total;
	pmonto3=monto3*100/total;
	
	printf("El monto 1 invirtio un %0.1f porciento, el segundo %.1f porciento y el tercero %.1f porciento.", pmonto1,pmonto2,pmonto3);
	
	
	
	return 0;
}