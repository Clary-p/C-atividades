#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 2 página 118

int main() {
    int n, i, j;
    double fat, e;  //constante de Euler?
    printf("Digite n");
    scanf("%d", &n);
    e = 1.0;
    for (i = 1; i <= n; i++) {
        fat = 1.0;
        for (j = 1; j <= i; j++) {
            fat = fat * j;}
        e = e + 1.0 / fat;}
    printf("e = %lf\n", e);
    return 0;}
