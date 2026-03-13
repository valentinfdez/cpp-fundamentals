#include <stdio.h>

/*
Calcula la velocidad promedio
conociendo la distancia recorrida y el tiempo.
Formula: velocidad = distancia / tiempo
*/

int main() {

    float distancia, tiempo, velocidad;

    printf("Ingrese distancia recorrida (km): ");
    scanf("%f",&distancia);

    printf("Ingrese tiempo empleado (horas): ");
    scanf("%f",&tiempo);

    velocidad = distancia / tiempo;

    printf("Velocidad promedio: %.2f km/h\n", velocidad);

    return 0;
}