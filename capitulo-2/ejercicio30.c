#include <stdio.h>

/* Inicio del main */
int main(){
    printf("Ejercicio 30: \n");
    
    int numero, a, b, c, d, e;

    printf("Ingrese un numero de cinco digitos: \n");
    scanf("%d", &numero);

    a = numero / 10000;
    numero = numero % 10000;
    b = numero / 1000;
    numero = numero % 1000;
    c = numero / 100;
    numero = numero % 100;
    d = numero / 10;
    e = numero % 10;
    
    printf("%d\t%d\t%d\t%d\t%d\n", a, b, c, d, e);
    
    return 0;

}/* main */