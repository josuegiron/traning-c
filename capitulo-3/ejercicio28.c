/* Figura 3.10: fig03_10.c
Análisis de los resultados de un examen */
#include <stdio.h>
/* la función main inicia la ejecución del programa */
int main()
{

  /* inicializa las variables en las declaraciones */
    int resultado; /* resultado de un examen */
    int aprobados = 0; /* número de aprobados */ 
    int reprobados = 0; /* número de reprobados*/
    int estudiante = 1; /* contador de estudiantes */

    /* procesa 10 estudiantes mediante un ciclo controlado por contador */ 
    while ( estudiante <= 10 ) {

        /* indica al usuario que introduzca un valor */
        printf("Introduzca el resultado ( 1=aprobado,2=reprobado ): " ); 
        scanf( "%d", &resultado );

        /* si el resultado es igual que 1, incrementa aprobados */
        if ( resultado == 1 ) {
            
            aprobados = aprobados + 1;
            estudiante++;

        } /* fin de if */
        else if ( resultado == 2) { /* de lo contrario, incrementa reprobados */
            
            reprobados = reprobados + 1; 
            estudiante++;
            
        } else {
            
            printf("Ingrese un valor válido \n");
            
        }


    } /* fin de while */

    /* fase de terminación; despliega el número de aprobados y reprobados */ 

    printf( "Aprobados %d\n", aprobados );
    printf( "Reprobados %d\n", reprobados );
    /* si aprobaron más de ocho estudiantes, imprime “objetivo alcanzado” */ 

    if ( aprobados > 8 ) {

        printf( "Objetivo alcanzado\n" );

    } /* fin de if */
    return 0; /* indica que el programa terminó con éxito */ 

} /* fin de la función main */