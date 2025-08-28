#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//exercício 25 página 50
int main(){
int custo,convite, qtd;
printf("Digite o custo do espetáculo:");
scanf("%d",&custo);
printf("Digite o custo do ingresso:");
scanf("%d",&convite);
qtd = (int) ceil((double)custo / convite);
printf ("Quantidade mínima de convites para vender %d:", qtd);
};
