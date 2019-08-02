#include <stdio.h>

/* Inicio del main */
int main()
{
    int a, b, c, d;

    printf("Ingrese tres números:\n");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    /* suma */
    d = a + b + c;

    printf("La suma es %d\n", d);
    printf("El promedio es %d\n", d/3);

    /* producto */
    d = a * b * c;
    
    printf("El el producto es %d\n", d/3);
    
    /* Calcular el numero mas pequenio */

    if (a < b && a < c ){
        printf("El número más pequenio es %d\n", a);
    }
 
    if (b < a && b < c ){
        printf("El número más pequenio es %d\n", b);
    }
 
    if (c < b && c < a ){
        printf("El número más pequenio es %d\n", c);
    }
    
    /* Calcular el número mas grande */
    
    if (a > b && a > c ){
        printf("El número más grande es %d\n", a);
    }
 
    if (b > a && b > c ){
        printf("El número más grande es %d\n", b);
    }
 
    if (c > b && c > a ){
        printf("El número más grande es %d\n", c);
    }

    return 0;

}