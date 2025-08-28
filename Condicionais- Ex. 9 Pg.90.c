#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 9 página 90

int main() {
    float saldoMedio, credito;

    printf("Digite o saldo médio do cliente(formato x.y - ex. 450.50) \: ");
    scanf("%f", &saldoMedio);
    if (saldoMedio > 400) {
        credito = saldoMedio * 0.30;
    } else if (saldoMedio > 300) {
        credito = saldoMedio * 0.25;
    } else if (saldoMedio > 200) {
        credito = saldoMedio * 0.20;
    } else {
        credito = saldoMedio * 0.10;
    }
    printf("Saldo médio: R$ %.2f\n", saldoMedio);
    printf("Valor do crédito: R$ %.2f\n", credito);

    return 0;
}
