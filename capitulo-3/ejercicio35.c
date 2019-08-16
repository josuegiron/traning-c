#include <stdio.h>

/* main */
int main(){

    int numero;
    int n = 0;
    int palindromo = 1;

    printf("Ingrese un número para validar si es palindromo: ");
    scanf("%d", &numero);

    int val = numero;

    while ( val != 0 ){

        val = val / 10;
        n++;
        
    }/* end while */

    
    
    while( n > 1 ){
        int x = 10, j = n - 1;

        while (j != 1){
            j--;
            x *= 10;
            if (n <= 1){
                x = 1;
            }
        }
        

        int primerDigito = numero / x;
        
        int ultimoDigito = numero % 10;

        
        numero = numero % x;
        numero = numero / 10;

        printf("%d\t%d\t%d\t%d\t%d\n", primerDigito, ultimoDigito, n, numero, x);

        if ( primerDigito != ultimoDigito ){
            
            palindromo = 0;    

        }/* end if */

        n -= 2;

    }/* end while */

    if ( palindromo == 1 ){
        
        printf("Es un palindromo!\n");

    }else{  

        printf("No es un palindromo!\n");
        
    }// no es un palindromo

}/* end main */