/* 
Primera mejora: {
    Solicitar datos para calcular el interes compuesto
    Realizar operacion del interes compuesto
    Mostrar en pantalla el interes compuesto calculado
}

Segunda mejora: {
    Solicitar monto del prestamo, tasa de interes y el periodo del prestamo mientrs no se ingrese un monto del prestamo igual a -1.
    Asignar los valores solicitados a variables en memoria.
    Operar el interes compuesto
    Mostrar interes compuesto en pantalla
}
 
Tercera mejora: {
    Declarar variables montoPrestamo, tasaInteres, periodo tipo flotante
    Inicializar montoPrestamo en cero
    Mientras montoPrestamo sea diferente a -1 
        Solicitar el monto del prestamo y asignarlo a la variable montoPrestamo
        Si el montoPrestamo es diferente a -1 Entonces:
            Solicitar el interes y asinarlo a la variable interes
            Solicitar el periodo del prestamo y asignaro a la variable periodo.
            Calcular el interes simple y mostrarlo en la pantalla. 
}
 */

#include <stdio.h>

/* inicio del main */
int main(){

    float montoPrestamo = 0.0, tasaInteres;
    int periodo;

    while (montoPrestamo != -1 ){
        
        printf("Introduzca el monto del préstamo (-1 para terminar): \n");
        scanf("%f", &montoPrestamo);
        
        if (montoPrestamo != -1){

            printf("Introduzca la tasa de interés: \n");
            scanf("%f", &tasaInteres);
            
            printf("Introduzca el periodo del préstamo en días: \n");
            scanf("%d", &periodo);
            
            printf("El monto del intés es $%.2f\n\n", (montoPrestamo * tasaInteres * periodo / 365));
            
        }/* end if */
    }/* end while */
}/* end main */