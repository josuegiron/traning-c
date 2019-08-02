#include <stdio.h>

/* Inciando el main */
int main(){
    
    printf("Ejercicio 23\n");

    int a, b, c, d, e;

    printf("Ingrese cinco numeros\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);

    if(a < b && a < c && a < d && a < e){
        printf("El numero mas pequenio es %d\n", a);
    }
    if(b < a && b < c && b < d && b < e){
        printf("El numero mas pequenio es %d\n", b);
    }
    if(c < b && c < a && c < d && c < e){
        printf("El numero mas pequenio es %d\n", c);
    }
    if(d < b && d < c && d < a && d < e){
        printf("El numero mas pequenio es %d\n", d);
    }
    if(e < b && e < c && e < a && e < a){
        printf("El numero mas pequenio es %d\n", e);
    }
   
    if(a > b && a > c && a > d && a > e){
        printf("El numero mas grande es %d\n", a);
    }
    if(b > a && b > c && b > d && b > e){
        printf("El numero mas grande es %d\n", b);
    }
    if(c > b && c > a && c > d && c > e){
        printf("El numero mas pequenio es %d\n", c);
    }
    if(d > b && d > c && d > a && d > e){
        printf("El numero mas grande es %d\n", d);
    }
    if(e > b && e > c && e > a && e > a){
        printf("El numero mas grande es %d\n", e);
    }
    
}/* main */