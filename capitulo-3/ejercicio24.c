/* 
Primera mejora: {
    Declarar las variables enteras contador, numero y mayor 
    Inicializar contador en cero
    
    Mientras contador sea menor a 10
        Solicitar al usuario un numero y asignarlo a la variable 'numero'
        Sumar uno a contador
        Si el valor de la variable numero es mayor a la variable 'mayor'
            Asignar el valor de numero a mayor
    
    Imprimir la variable 'mayor'
}
 */

#include <stdio.h>

/* main */
int main(){

    int contador, numero, mayor;
    contador = 0;
    mayor = 0;

    while( contador < 10 ){
       
        contador++;
        
        printf("Ingrese un número entero: ");
        scanf("%d", &numero);

        if ( numero > mayor ){
       
            mayor = numero;
       
        }/* end if */

    }/* end while */

    printf("El número mayor es: %d\n", mayor);
    
}/* end main */