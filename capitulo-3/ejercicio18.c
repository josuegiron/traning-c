/* 
Primer mejoramiento: {
    Solicitar datos de la cuenta
    Validar si el usuario excede el limite de credito de su cuenta
    Si excede el limite de credito de su cuenta entonces escribir en pantalla que excedio el limite de crédito. \
}

Segundo mejoramiento: {
    Solicitar numero de cuenta, saldo inicial del mes, total de elementos cargados al cliente este mes  y limite autorizado para su cuenta hasta que el usuario introduzca -1 en el numero de cuenta
    Calcular el nuevo saldo del la cuenta
    Validar si el nuevo saldo excede el limite de crédito para la cuenta 
    Si se excede el limite imprimir el numero de cuenta, el limite de la cuenta, el saldo y un mensaje "Límite de crédito excedido"
}

Tercer mejoramiento: {
    Declarar la variable entera numeroCuenta
    Declarar las variables tipo flotante saldoInicial, cargosDelMes, totalCreditos, limiteCreditos, saldoActual
    
    Mientras el numero de cuenta sea diferente a -1
        Solicitar el numero de cuenta y asignarlo a la variable numeroCuenta
        Si numero cuenta es diferente a -1
            Solicitar el saldo inicial y asignarlo a la variable saldoInicial
            Solicitar el total de cargos y asignarlo a la variable cargosDelMes
            Solicitar el total de créditos y asignarlo a la variable totalCreditos
            Solicitar el límite de crétidos y asignarlo a la variable limiteCreditos
            Operar saldoInicial mas cargosDelMes menos totalCreditos y asignar el valor a saldoActual
            Validar si el saldoActual es mayor a limiteCreditos
                Imprimir "Cuenta: " y numeroCuenta
                Imprimir "Limite de crédito: " limiteCredito
                Imprimir "Saldo: " saldoActual
                Imprimir "Límite de crédito excedido."

}
 */

#include <stdio.h>

/* Inicio del main */
int main(){
    int numeroCuenta = 0;
    float saldoInicial = 0.0;
    float cargosDelMes = 0.0;
    float totalCreditos = 0.0;
    float limiteCretditos = 0.0;
    float saldoActual = 0.0;

    while (numeroCuenta != -1){
        printf("Introduzca el número de cuenta (-1 para terminar): \n");
        scanf("%d", &numeroCuenta);

        if (numeroCuenta != -1){
            
            printf("Introduzca el saldo inicial: \n");
            scanf("%f", &saldoInicial);
            
            printf("Introduzca el total de cargos: \n");
            scanf("%f", &cargosDelMes);
            
            printf("Introduzca el total de créditos: \n");
            scanf("%f", &totalCreditos);
            
            printf("Introduzca el límite de créditos: \n");
            scanf("%f", &limiteCretditos);

            saldoActual = saldoInicial + cargosDelMes - totalCreditos;

            if (saldoActual > limiteCretditos){
                printf("Cuenta: %d\nLimite de crédito: %.2f\nSaldo: %.2f\nLímite de crédito excedido.\n", numeroCuenta, limiteCretditos, saldoActual);
                
            }/*end if */

        }/* end if  */
    }/* end while */
}/* end main */