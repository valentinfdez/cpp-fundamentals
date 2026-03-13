#include <stdio.h>

/*
Programa que calcula cuántas baldosas de 20x20 cm se necesitan
para cubrir el piso de una habitación.
*/

int main() {

    float largo, ancho;
    float areaHabitacion;
    float areaBaldosa = 0.20 * 0.20; // baldosa de 20cm = 0.20m
    float cantidad;

    printf("Ingrese largo de la habitacion en metros: ");
    scanf("%f",&largo);

    printf("Ingrese ancho de la habitacion en metros: ");
    scanf("%f",&ancho);

    // área de la habitación
    areaHabitacion = largo * ancho;

    // cantidad de baldosas necesarias
    cantidad = areaHabitacion / areaBaldosa;

    printf("Se necesitan aproximadamente %.0f baldosas\n", cantidad);

    return 0;
}