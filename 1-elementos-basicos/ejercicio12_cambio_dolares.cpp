#include <stdio.h>

/*
Calcula cuánto debe pagar un cliente en pesos uruguayos
por comprar una determinada cantidad de dólares
según la cotización del día.
*/

int main() {

    float dolares, cotizacion, total;

    printf("Ingrese cantidad de dolares a comprar: ");
    scanf("%f",&dolares);

    printf("Ingrese cotizacion del dolar en pesos uruguayos: ");
    scanf("%f",&cotizacion);

    total = dolares * cotizacion;

    printf("El cliente debe pagar: %.2f pesos uruguayos\n", total);

    return 0;
}