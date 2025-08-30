#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 7 página 123

//8 primeiros termos da sequência de fibinacci
int main() {
int cont, num1, num2, res;
    num1 = 0;
    num2 = 1;
    printf("%d-", num1);
    printf("%d-", num2);
    for (cont = 3; cont <= 8; cont++) {
        res = num1 + num2;
        printf("%d-", res);
        num1 = num2;
        num2 = res;}
    return 0;
}
