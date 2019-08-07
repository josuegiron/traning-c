/* 
Primera mejora: {
    Recibir el monto de las ventas de los vendedores 
    Calcular el ingreso del vendedor en la semana y mostrarlo en pantalla
}

Segunda mejora: {
    Solicitar en pantalla el monto de la venta del proveedor mientras el total de ventas sea diferente de -1
    Almacenar el monto de la venta del vendedor en una variable 
    Calcualar el total de ingresos del proveedor con la siguente formula ingresos = total de ventas por el nueve porciento mas 200
    Mostrar el resultado en pantalla
}

Tercer mejora: {
    Declarar las variables tipo flotante totalVentas e ingresos
    Mientras el totalVentas sea distitno de -1 
        Solicitar el total de ventas del vendedor
        Asignar el total de ventas a la variable totalVentas
        Calcular el ingreso: ingresos = totalVentas * 0.09 + 200
        Mostar el total de ingreso del vendedor
}
 */

#include <stdio.h>

/* Inicio del main */
int main(){
    float totalVentas = 0.0;
    while (totalVentas != -1){
        
        printf("Introduzca las ventas en pesos (-1 para terminar): \n");
        scanf("%f", &totalVentas);    
        
        if (totalVentas != -1){
            printf("El salario es: $%.2f\n", (totalVentas * 0.09 + 200.00));
        }/* end if */
        
    }/* end while */
}/* end main */