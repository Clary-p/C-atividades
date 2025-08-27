#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//exercício 24 página 49

int main(){
int h, conversao ;
float hora, m;
printf("Digite o horário no seguinte formato - 4:30 = 4.30:");
scanf("%f",&hora);
h = (int) hora;
m = (int) round((hora - h) * 100);
conversao = h * 60 + m ;
printf ("Conversão em minutos %d\n:", conversao);
return 0;
}
