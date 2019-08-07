/* Pseudocodigo
    Primer mejoramiento: {
        Pedir Litros y kilometros
        Calcular los litros por kilometro
        Imprimir el resultado
    }

    Segundo mejoramiento: {
        Declarar e inicializar las variables litros, kilometros, totalListros, totalKilometros
        Solicitar las variables al usuario las veces que sea necesario hasta que ingrese el valor -1
            Sumar los litros y los kilometros ingresados a los totales
        Dividir litros totales entre kilometros totales
        Imprimir el resultado
    }

    Tercer mejoramiento: {
        Declarar litros, kilometros, totalLitros, totalKilometros
        Inicializar litros, kilometros, totalLitros y totalKilometros en cero
        
        Mientras el valor de los litros se diferente de -1 
            Inicar que se debe ingresar -1 en litros para terminar la inserción. 
            Solicitar litros llenados y asignarlos a litros
            Si litros es difente a -1 
                Solicitar los kilometros recorridos y asignarlos a kilometros
                Sumar a totalLitros los litros ingresados
                Sumar a totalKilometros los kilometros ingresados 
        
        Dividir totalListros entre kilometros y mostrarlo en pantalla. 
    }
    
 */

# include <stdio.h>

int main(){
    
    float litros, kilometros, totalLitros, totalKilometros;
    
    litros = 0;
    kilometros = 0;
    totalLitros = 0;
    totalKilometros = 0;

    while ( litros != -1 ){
        printf("Introduzca los litros utilizados (-1 para terminar): \n");
        scanf("%f", &litros);
        if (litros != -1){
            printf("Introduzca los kilómetros conducidos: \n");
            scanf("%f", &kilometros);
            
            totalKilometros += kilometros;
            totalLitros += litros;
        }/* End if */

    }/* End while */

    printf("Los kilómetros por litro de éste tanque fureron: %f\n", totalLitros / totalKilometros);

    return 0;

}/* End main */
