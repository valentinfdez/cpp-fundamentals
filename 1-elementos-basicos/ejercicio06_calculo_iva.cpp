/*
Consigna:

1) Ingrese a Zinjai
2) Cree un nuevo programa en C.
3) Ingrese el siguiente código (imagen).
4) Observe las líneas de códigos y trate de entender que es lo que se ejecuta en cada una de ellas.
5) Compile el código fuente recién ingresado.
6) Ejecute el proyecto.

¿Es lo esperado?

Sí. El programa solicita al usuario un importe sin IVA,
calcula el impuesto aplicando el 22% y luego muestra:
1) El valor del IVA calculado
2) El importe final con IVA incluido.

Por lo tanto el programa funciona correctamente y cumple con el objetivo planteado
*/

#include <stdio.h>      // Librería estándar de entrada y salida (printf, scanf)

#define IVA 0.22        // Definición de una constante llamada IVA con valor 0.22 (22%)

int main(int argc, char *argv[]) {   // Función principal donde comienza el programa

    int importe;        // Variable entera para guardar el importe ingresado por el usuario
    float impuesto;     // Variable decimal para guardar el cálculo del IVA

    // Mensaje que explica qué hace el programa
    printf("El siguiente programa permite dado un importe calcular y mostrar el IVA y el importe final IVA incluido\n\n");

    // Se solicita al usuario que ingrese un importe
    printf("Ingrese importe sin IVA: ");

    // Se guarda el valor ingresado en la variable importe
    scanf("%d",&importe);

    // Se calcula el IVA multiplicando el importe por la constante IVA (0.22)
    impuesto = importe * IVA;

    // Se muestra el IVA calculado y el importe final con IVA incluido
    printf ("IVA %.2f \nImporte Final %.2f \n\n", impuesto, importe + impuesto);

    // Mensaje final del programa
    printf ("Gracias por por utilizar INICIAL 1.0!!!\n\n");

    return 0;   // Indica que el programa terminó correctamente

}