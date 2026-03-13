#include <stdio.h>

/*
Calcula la distancia recorrida conociendo
la velocidad y el tiempo de viaje.
Formula: distancia = velocidad * tiempo
*/

int main() {

    float velocidad, tiempo, distancia;

    printf("Ingrese velocidad (km/h): ");
    scanf("%f",&velocidad);

    printf("Ingrese tiempo de viaje (horas): ");
    scanf("%f",&tiempo);

    distancia = velocidad * tiempo;

    printf("Distancia recorrida: %.2f km\n", distancia);

    return 0;
}