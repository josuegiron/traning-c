#include <stdio.h>

/* Inicio del main */
int main(){
    printf("Ejercicio 26\n");
    
    int a, b, res;

    printf("Ingresa dos numeros: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    res = a % b;

    if (res == 0) {
        printf("%d es multiplo de %d\n", a, b);
    }

    if (res != 0){
        printf("Los numeros no son multiplos\n");
    }

    return 0;

}/* main */