#include<iostream>
using namespace std;


int suma (int n1,int n2);
int resta (int n1,int n2);
int multiplicacion (int n1, int n2);
float division (float n1, float n2);

int main (int argc, char *argv[]) {
	
	int dato1,dato2,total,totalresta,totalmulti;
	float totaldivi;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &dato1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &dato2);
	
	total=suma(dato1,dato2);
	totalresta=resta(dato1,dato2);
	totalmulti=multiplicacion(dato1,dato2);
	totaldivi=division(dato1,dato2);
	
	
	printf("\nsuma: %d", total);
	printf("\n\nresta: %d\n", totalresta);
	printf("\nmultiplicacion: %d\n", totalmulti);
	printf("\ndivision: %0.2f\n", totaldivi);
	
	return 0;
}



int suma (int n1, int n2){
	
	int resultado;
	
	resultado=n1+n2;
	
	return resultado;
}
	
	

int resta (int n1, int n2){
	
	int resultado;
	
	resultado=n1-n2;
	
	return resultado;
}
	
int multiplicacion (int n1, int n2){
	
	int resultado;
	
	resultado= n1*n2;
	
	return resultado;
}
	
float division (float n1, float n2){
	
	float resultado;
	
	resultado=n1/n2;
	
	return resultado;
}