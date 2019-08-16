#include <stdio.h>

// main
int main(){

    int binario = 0;

    printf("Ingrese un número par comvertirlo a binario: ");
    scanf("%d", &binario);
    
    int decimal = 0;
    int n = 0;

    while ( binario > 0 ){

        int bit = (binario % 10);
        int j = n;
        int number = 1; 

        while ( j > 0 ){

            number *= 2;
            j--;

        }

        decimal += bit * number;
        binario = binario / 10;

        printf("%d\t%d\n", decimal, binario);

        n++;

    }// end while

    printf("El número decimal es: %d\n", decimal);

}// end main