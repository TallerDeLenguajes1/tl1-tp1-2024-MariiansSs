#include <stdio.h>

int main()
{
    printf("Hola Mundo");
    int *pEntero, num;

    pEntero = &num;
    printf("Ingrese un numero entero");
    scanf("%d", &num);

    printf("El contenido del puntero es: %d\n", *pEntero);
    printf("La direccion de memoria almacenada en el puntero es: %p\n", pEntero);
    printf("La direccion de memoria de la variable es: %p\n", &num);
    printf("La direccion de memoria del puntero: %p\n", &pEntero);
    printf("El tamaño de memoria utilizado por la variable: %d bytes\n", sizeof(num));


    return 0;
}