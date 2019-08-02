#include <stdio.h>

/* Inicio del main */
int main(){
    
    int a, b;

    printf("Ingrese dos números: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        printf("%d es mas grande que %d\n", a, b);
    }
   
    if (a < b) {
        printf("%d es mas grande que %d\n", b, a);
    }
   
    if (a == b){
        printf("Son iguales\n");
    }
    
    return 0;

} /* main */