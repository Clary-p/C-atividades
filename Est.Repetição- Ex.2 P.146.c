#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
#include <stdbool.h>
//exercício 2 página 146
int main() {
float preco;
int ingressos;
float receita, lucro;
float lucro_max = -999999;
float preco_max = 0;
int ingressos_max = 0;

    printf("Preco\tIngressos\tLucro\n");
    printf("---------------------------------\n");
    // Preço inicial 5.0 até 1.0 (de 0.5 em 0.5)
    for (preco = 5.0; preco >= 1.0; preco -= 0.5) {
        // cálculo dos ingressos vendidos
        ingressos = 120 + (int)((5.0 - preco) / 0.5) * 26;
        // receita e lucro
        receita = preco * ingressos;
        lucro = receita - 200.0;
        // mostra a tabela
        printf("%.2f\t%d\t\t%.2f\n", preco, ingressos, lucro);
        // verifica lucro máximo
        if (lucro > lucro_max) {
            lucro_max = lucro;
            preco_max = preco;
            ingressos_max = ingressos;
        }
    }
    printf("\nLucro maximo esperado: R$ %.2f\n", lucro_max);
    printf("Preco do ingresso: R$ %.2f\n", preco_max);
    printf("Ingressos vendidos: %d\n", ingressos_max);
    return 0;
}
