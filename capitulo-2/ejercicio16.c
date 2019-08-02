#include <stdio.h>

/* Inicio del main */
int main(){
    
    int a, b, c;

    printf("Ingrese el primer número:\n");
    scanf("%d", &a);

    printf("Ingrese el segundo número:\n");
    scanf("%d", &b);

    printf("La suma es: %d\n", a+b);
    printf("La diferencia es: %d\n", a-b);
    printf("El producto es: %d\n", a*b);
    printf("El cosiente es: %d\n", a/b);
    printf("El residuo es: %d\n", a%b);

    return 0;

} /* main */