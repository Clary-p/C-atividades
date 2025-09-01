#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
#include <stdbool.h>
//exercício 7 página 147

int main() {
    int i, idade;
    float peso, altura;
    char olhos, cabelos;
    int qtd_idade_peso = 0;      // pessoas com idade > 50 e peso < 60
    int qtd_altura = 0;          // contador para média das idades < 1.50
    int soma_idades = 0;         // soma das idades < 1.50
    int qtd_azuis = 0;           // pessoas com olhos azuis
    int qtd_ruivos_sem_azul = 0; // pessoas ruivas sem olhos azuis
    int total = 6;               // número fixo de pessoas
    for (i = 1; i <= total; i++) {
        printf("\nPessoa %d:\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso (kg): ");
        scanf("%f", &peso);
        printf("Altura (m): ");
        scanf("%f", &altura);
        printf("Cor dos olhos (A-azul / P-preto / V-verde / C-castanho): ");
        scanf(" %c", &olhos);
        printf("Cor dos cabelos (P-preto / C-castanho / L-louro / R-ruivo): ");
        scanf(" %c", &cabelos);
        // a) idade > 50 e peso < 60
        if (idade > 50 && peso < 60)
            qtd_idade_peso++;
        // b) média das idades com altura < 1.50
        if (altura < 1.50) {
            soma_idades += idade;
            qtd_altura++;
        }
        // c) porcentagem de pessoas com olhos azuis
        if (olhos == 'A' || olhos == 'a')
            qtd_azuis++;
        // d) ruivos sem olhos azuis
        if ((cabelos == 'R' || cabelos == 'r') && (olhos != 'A' && olhos != 'a'))
            qtd_ruivos_sem_azul++;
    }
        // saída final
    printf("\n--- RESULTADOS ---\n");
    printf("Quantidade de pessoas com idade > 50 e peso < 60: %d\n", qtd_idade_peso);
        if (qtd_altura > 0)
        printf("Media das idades das pessoas com altura < 1.50 m: %.2f\n", (float)soma_idades / qtd_altura);
    else
        printf("Nenhuma pessoa com altura < 1.50 m.\n");
        printf("Porcentagem de pessoas com olhos azuis: %.2f%%\n", (qtd_azuis * 100.0) / total);
    printf("Quantidade de pessoas ruivas sem olhos azuis: %d\n", qtd_ruivos_sem_azul);
        return 0;
}
