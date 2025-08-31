#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
#include <stdbool.h>
//exercício 10 página 147
// Função para verificar se um número é primo
bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int num, i;
    int somaPares = 0, somaPrimos = 0;
    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);
        if (num % 2 == 0) {
            somaPares += num;
        }
        if (ehPrimo(num)) {
            somaPrimos += num;}
    }
    printf("\nSoma dos numeros pares = %d\n", somaPares);
    printf("Soma dos numeros primos = %d\n", somaPrimos);
    return 0;
}
