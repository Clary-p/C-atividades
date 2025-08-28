#include <stdlib.h>
#include <stdio.h>
#include <math.h>
//exercício 07 página 66

int main() {
    float A, B, C;
    int I;
    printf("Digite um valor para A: ");
    scanf("%f", &A);
    printf("Digite um valor distinto para B: ");
    scanf("%f", &B);
    printf("Digite um valor distinto para C: ");
    scanf("%f", &C);
    printf("Digite um valor para I (1 - ordem crescente, 2- ordem decrescente, 3- maior no meio: ");
    scanf("%d", &I);
  // tem um vetor de ordenação automática me C, mas no livro ela pediu com essa concatenação de Ifs
    if (I == 1) {
        // ordem crescente
        if (A < B && A < C) {
            if (B < C)
                printf("Ordem crescente: %.2f - %.2f - %.2f\n", A, B, C);
            else
                printf("Ordem crescente: %.2f - %.2f - %.2f\n", A, C, B);
        } else if (B < A && B < C) {
            if (A < C)
                printf("Ordem crescente: %.2f - %.2f - %.2f\n", B, A, C);
            else
                printf("Ordem crescente: %.2f - %.2f - %.2f\n", B, C, A);
        } else {
            if (A < B)
                printf("Ordem crescente: %.2f - %.2f - %.2f\n", C, A, B);
            else
                printf("Ordem crescente: %.2f - %.2f - %.2f\n", C, B, A);
        }
    } else if (I == 2) {
        // ordem decrescente
        if (A > B && A > C) {
            if (B > C)
                printf("Ordem decrescente: %.2f - %.2f - %.2f\n", A, B, C);
            else
                printf("Ordem decrescente: %.2f - %.2f - %.2f\n", A, C, B);
        } else if (B > A && B > C) {
            if (A > C)
                printf("Ordem decrescente: %.2f - %.2f - %.2f\n", B, A, C);
            else
                printf("Ordem decrescente: %.2f - %.2f - %.2f\n", B, C, A);
        } else {
            if (A > B)
                printf("Ordem decrescente: %.2f - %.2f - %.2f\n", C, A, B);
            else
                printf("Ordem decrescente: %.2f - %.2f - %.2f\n", C, B, A);
        }
    } else if (I == 3) {
        // maior no meio
        if (A > B && A > C)
            printf("Ordem desejada: %.2f - %.2f - %.2f\n", B, A, C);
        else if (B > A && B > C)
            printf("Ordem desejada: %.2f - %.2f - %.2f\n", A, B, C);
        else
            printf("Ordem desejada: %.2f - %.2f - %.2f\n", A, C, B);
    } else {
      printf("Valor de I inválido! Digite 1, 2 ou 3.\n");
    }

    return 0;
