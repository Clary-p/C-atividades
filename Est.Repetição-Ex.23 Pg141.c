#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 23 página 141
int main() {
    float sal, qtd, tipo, valor_kw, gasto, acresc, total;
    float tot_geral = 0;
    int qtd_cons = 0;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &sal);
    valor_kw = sal / 8.0;
    printf("Digite a quantidade de kW (0 para encerrar): ");
    scanf("%f", &qtd);
    while (qtd != 0) {
        gasto = qtd * valor_kw;
        printf("Digite o tipo de consumidor (1=Residencial, 2=Comercial, 3=Industrial): ");
        scanf("%f", &tipo);
        if (tipo == 1)
            acresc = gasto * 0.05;
        else if (tipo == 2)
            acresc = gasto * 0.10;
        else if (tipo == 3)
            acresc = gasto * 0.15;
        else
            acresc = 0; // caso inválido
        total = gasto + acresc;
        tot_geral += total;
        if (total >= 500 && total <= 1000) {
            qtd_cons++;
        }
        printf("\nValor sem acrescimo: R$ %.2f", gasto);
        printf("\nAcrescimo: R$ %.2f", acresc);
        printf("\nTotal a pagar: R$ %.2f\n\n", total);
        printf("Digite a quantidade de kW (0 para encerrar): ");
        scanf("%f", &qtd);
    }
    printf("\nFaturamento geral da empresa: R$ %.2f", tot_geral);
    printf("\nQuantidade de consumidores que pagam entre 500 e 1000: %d\n", qtd_cons);
    return 0;
}
