#include <stdio.h>
#include <stdlib.h>

int main() {

    //Ejercicio 3)e. 
    int variable = 20;
    int *puntero = &variable;

    //1. El contenido del puntero
    printf("\nEl contenido del puntero es: %d", *puntero);

    //2. Direccion donde apunta el puntero
    printf("\nDireccion donde apunta el puntero: %p", puntero);

    //3. Direccion de memoria de variable
    printf("\nDireccion de la variable: %p", &variable);

    //4. direccion de memoria del puntero
    printf("\nDireccion del puntero: %p", &puntero);

    //5. Tamaño de memoria utilizado por la variable
    int bytes = sizeof(variable);
    printf("\nTamaño de la variable en bytes: %d", bytes);


    return 0;
}