#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//exercício 6 página 63

int main() {
int num, r;
printf("Digite um número:");
scanf("%d",num);
r = (num%2);
if(r = 0){
    printf("O número é par");}
else{
    printf("O número é ímpar");}
return 0;
}
