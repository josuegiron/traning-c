#include <stdio.h>

// main
int main(){

    float ex = 0;
    long int k = 0, n = 0, x;
    long int xn = 1;

    printf("Ingrese un valor entero para calcular e^x: ");
    scanf("%ld", &x);
    
    while( k < 1000 ){

        n = k;
        float fact = (float)n;

        if (k > 0){

            xn *= x;

        }// end while

        if (n == 0){
            
            fact = 1;

        }// end if
        
       while ( n > 0 ){

            if (n == 0 || n == 1){

                fact *= 1;
                n--;
                
            }else{

                fact *= --n;

            }// end if

        }// end while

        ex += xn / fact;
        k++;
        printf("e: %0.20f\tk!: %f\tx^n: %ld\n", ex, fact, xn);

    }// end while
}// end main