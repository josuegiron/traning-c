#include <stdio.h>

// main
int main(){

    int k = 0;
    float e = 0.0; 

    while ( k < 1000 ){
        
        int n = k;
        float fact = (float)n;

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

        e += 1.0 / fact;
        k++;
        printf("e: %0.20f\tk!: %f\n", e, fact);
        
    }// end while

}// end main