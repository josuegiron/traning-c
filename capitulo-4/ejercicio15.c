#include <stdio.h>

// main
int main(){

    double monto;
    double principal = 1000.0;
    double tasa = 0.05;
    int anio;

    printf("%4s%21s\n", "Anio", "Monto del deposito");
    
    for (int tasab = 5; tasab <= 10; tasab++){
        
        monto = 0;
        tasa = (float)tasab/100;
        printf("Cálculo con la tasa: %.2f\n", tasa);
        
        for (anio = 1; anio <= 10; anio++){
            
            monto = principal * pow(1.0 + tasa, anio);
            printf("%4d%21.2f\n", anio, monto);

        }// end for

    } // end for

    return 0;

}// end main