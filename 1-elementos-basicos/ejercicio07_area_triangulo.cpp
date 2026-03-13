/*
Consigna:

1) Cree otro programa.
2) Ingrese el siguiente código (imagen).

#include <stdio.h>
int main(int argc, char *argv[]) {
int base, altura;
printf(Valor Base: );
scanf("%d",&base);
printf("Valor Altura: ");
area = base * altura / 2;
printf("Area: %d",area);
return 0;
}

4) Observe las líneas del programa ingresado, en ellas va a encontrar una serie de errores, trate de corregirlos antes de su compilación.
Cuántos errores encontraste?
5) Compile y ejecute el programa.

Respuestas:
Errores encontrados:
// Error 1: printf(Valor Base: ); → falta poner el texto entre comillas.
// Error 2: Falta pedir el valor de "altura" con scanf.
// Error 3: La variable "area" no fue declarada.
// Error 4: printf("Area: %d",area); usa una variable que no existía.
// Error 5: Problema de lógica porque se intenta usar altura sin haberla ingresado.
*/


// Código corregido:
#include <stdio.h>   // Librería para entrada y salida de datos

int main(int argc, char *argv[]) {

    int base, altura;   // Variables para base y altura
    int area;           // Variable para guardar el resultado del área

    // Se pide al usuario el valor de la base
    printf("Valor Base: ");
    scanf("%d",&base);

    // Se pide al usuario el valor de la altura
    printf("Valor Altura: ");
    scanf("%d",&altura);

    // Cálculo del área del triángulo
    area = base * altura / 2;

    // Se muestra el resultado
    printf("Area: %d",area);

    return 0;   // Fin del programa
}