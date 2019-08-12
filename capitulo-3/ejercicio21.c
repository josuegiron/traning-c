/* 
Primera mejora: {
    Solicitar datos de las horas y pago de cada empleado
    Realizar el cálculo del pago bruto para cada empleado y mostrarlo en pantalla
}

Segunda mejora: {
    Decalrar variables horas y pagoh e inicializar en cero
    Mientras el usuario no ingrese -1 
        Solicitar el al usuario las horas trabajadas en la semana y el pago por hora
        Realizar el calculo del pago total del trabajador
}

Tercera mejora: { 
    Declarar la variables entera horas e inicializar en cero
    Declarar la variable flotante pagoh e inicializar en cero
    Mientras la variable horas sea distinta a -1
        Solicitar el número de horas trabajadas de un empleado y asignarlo a la variable horas
        Si la variable horas es diferente a -1 
            Solicitar el pago por hora del empleado y asignarlo a la variable pagoh
            Calcular el pago total del empleado
            Mostrar el pago total del empleado en pantalla
}
 */

#include <stdio.h>

/* Inicio del main */
int main(){

    int horas = 0;
    float pagoh = 0.0;

    while (horas != -1){

        printf("Introduzca el No. de horas laboradas (-1 para terminar): ");
        scanf("%d", &horas);

        if (horas != -1){

            printf("Introduzca el pago por hora del empleado: ");
            scanf("%f", &pagoh);
            
            if (horas > 40){
                
                int horasExtra = horas - 40;
                printf("El salario es: $%0.2f\n", (pagoh * 40.00 + 1.5 * pagoh * horasExtra));            

            }else{
                
                printf("El salario es: $%0.2f\n", (pagoh * (float)horas));            
            
            }/* end if */

        }/* end if */

    }/* end while */

}/* end main */