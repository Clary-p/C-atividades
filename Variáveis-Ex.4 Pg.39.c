#include <stdio.h>
#include <stdlib.h>
//exercício 4 página 39
int main(){
int sal, novosal;
printf("Digite seu salário atual:"); //escreve a mensagem no console
scanf ("%d",&sal);//solicita o salário
novosal = (sal+ sal*25/100);//atribui ao novosal o valor do salário mais o aumento de 25 por cento
printf("Novo salário: %d",novosal);//escreve a media no console.
};
