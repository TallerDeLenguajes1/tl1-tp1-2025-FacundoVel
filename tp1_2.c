#include <stdlib.h>
#include <stdio.h>

int cuadrado(int numero);
void cuadradoVoid(int numero, int *resultado);
void printDireccionYContenido(int numero);
void Invertir(int *a, int *b);
void orden(int *a, int *b);

int main() {

    int numero = 10;
    int resultado = cuadrado(numero);
    int resultado2 = 0;
    printf("\nEl cuadrado de %d es %d: ", numero, resultado);

    cuadradoVoid(numero, &resultado2);
    printf("\nEl cuadrado del numero usando 'funcion void' es: %d", resultado2);

    //ejemplo con integer para el apartado c)
    int numero3 = 23;
    printDireccionYContenido(numero3);

    int a,b = 0;
    printf("\nIngrese a: ");
    scanf("%d", &a);
    printf("\nIngrese b: ");
    scanf("%d", &b);


    printf("\nValores de a y b antes de ser invertidos: a=%d , b=%d", a, b);
    Invertir(&a, &b);
    printf("\nValores intercambiados: a=%d , b=%d", a, b);

    printf("\nNumeros antes de ser ordenados: a=%d , b=%d", a, b);
    orden(&a, &b);

    printf("\nNumeros ordenados: a=%d , b=%d", a, b);

    return 0;
}

//a)
int cuadrado(int numero) {
    return numero * numero;
}

//b)
void cuadradoVoid(int numero, int *resultado) {
    *resultado = numero * numero;
}

//c)
void printDireccionYContenido(int numero) {
    printf("\nDireccion de la variable es: %p", &numero);
    printf("\nContenido de la variable es: %d", numero);  
}

//d)
void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

//e)
void orden(int *a, int *b) {
    int mayor = 0;
    if (*a > *b) {
        mayor = *a;
        *a = *b;
        *b = mayor;
    }    
}