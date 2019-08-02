#include <stdio.h>

/* Inicio del main */
int main(){
    printf("Ejercicio 24\n");
    
    int a, residuo;

    printf("Ingrese un numero entero\n");
    
    scanf("%d", &a);

    residuo = a % 2;

    if ( residuo != 0){
        printf("El número es impar\n");
    }

    if ( residuo == 0 ){
        printf("El numero es par\n");
    }
    
    return 0;

}/* main */