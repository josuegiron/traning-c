#include <stdio.h>

/* main example*/
int main(){

    int entero1, entero2, total;

    printf("Introduzca el primer número: \n");
    scanf("%d", &entero1);

    printf("Introduzca el segundo número: \n");
    scanf("%d", &entero2);
    
    total = entero1 + entero2;

    printf("El total es: %d\n", total);

    return 0; 
    
} /* main */