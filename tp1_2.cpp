#include <stdio.h>
int funcCuadrado(int num);

void funcCuadradoVoid(int num);

void invertir(int a,int b);

void ordenar(int a, int b, int *menor, int *mayor);

int main(){
    int menor;
    int mayor;
    int num=2;
    int a;
    int b;
    funcCuadrado(num);
    funcCuadradoVoid(num);
    printf("Ingrese a num a inverir:");
    scanf("%d",&a);
    printf("Ingrese b num a invertir:");
    scanf("%d",&b);
    printf("La direccion de memoria de la variable es: %p", &a);
    printf("La direccion de memoria de la variable es: %p", &b);
    printf("El contenido de la variable es: %d\n", a);
    printf("El contenido de la variable es: %d\n", b);
    printf("Antes de invertir: a = %d, b = %d\n", a, b);
    invertir(a,b);
    printf("Después de invertir: a = %d, b = %d\n", a, b);
    ordenar(a,b,&menor,&mayor);
    printf("Menor: %d, Mayor: %d\n", menor, mayor); 
   return 0;
}

int funcCuadrado(int num){
    int numCuadrado=num*num;
    return numCuadrado;

}
void cuadVoid(int num) {
    int resultado = num * num;
    printf("El cuadrado de %d es %d\n", num, resultado);
}
void invertir(int a, int b) {
    int aux = a;
    a = b;
    b = aux;
    printf("Dentro de la función: a = %d, b = %d\n", a, b);
}
void ordenar(int a, int b, int *menor, int *mayor) {
    if (a < b) {
        *menor = a;
        *mayor = b;
    } else {
        *menor = b;
        *mayor = a;
    }
}
