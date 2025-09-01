#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
#include <stdbool.h>
//exercício 1 página 146

void ordenar(int v[], int n, int crescente) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((crescente && v[i] > v[j]) || (!crescente && v[i] < v[j])) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;}
                }}}
int main() {
int grupo[4];
int i, j;
    for (i = 1; i <= 5; i++) {
        printf("\n--- Grupo %d ---\n", i);

        // Leitura dos 4 valores
        for (j = 0; j < 4; j++) {
            printf("Digite o valor %d: ", j + 1);
            scanf("%d", &grupo[j]);
        }

        // Mostrando na ordem lida
        printf("Ordem lida: ");
        for (j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }
        printf("\n");
        // Ordena em ordem crescente
        ordenar(grupo, 4, 1);
        printf("Ordem crescente: ");
        for (j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }
        printf("\n");
        // Ordena em ordem decrescente
        ordenar(grupo, 4, 0);
        printf("Ordem decrescente: ");
        for (j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }
        printf("\n");}
    return 0;
}
