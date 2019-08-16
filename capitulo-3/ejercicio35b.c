#include <stdio.h>

//  main
int main(){

    int number, palindrome = 0;

    printf("Ingrese un número para validar si es palindromo: ");
    scanf("%d", &number);

    int numberB = number;
    
    while( number > 0 ){

        int x = 10, n = number;

        while ( n > 0 ){

            x *= 10;

            n = n / 10;

        }// end while
        
        palindrome += (number % 10) * (x / 100);

        number = number / 10;
        
        printf("%d\t%d\n", palindrome, number);

    }// end while

    if ( numberB == palindrome ){
        
        printf("Es un palingromo\n");
        
    }else{

        printf("No es un palindromo\n");
        
    }// end if

}   //  end main