#include <stdio.h>

/*
Calcula la densidad de población.

Formula:
densidad = habitantes / superficie
*/

int main() {

    int habitantes;
    float superficie, densidad;

    printf("Ingrese cantidad de habitantes: ");
    scanf("%d",&habitantes);

    printf("Ingrese superficie en km2: ");
    scanf("%f",&superficie);

    densidad = habitantes / superficie;

    printf("Densidad de poblacion: %.2f habitantes por km2\n", densidad);

    return 0;
}