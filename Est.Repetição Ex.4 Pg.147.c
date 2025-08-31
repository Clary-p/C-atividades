#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 4 página 147

// Função recursiva para imprimir a tabuada até 10
void tabuada(int num, int i) {
    if (i > 10) {
        return; // caso base -> parar quando passar de 10
    }
    printf("%d x %d = %d\n", num, i, num * i);
    tabuada(num, i + 1); // chamada recursiva com próximo número
}
int main() {
    int n;
    printf("Digite um numero (0 para sair): ");
    scanf("%d", &n);
    while (n != 0) {
        tabuada(n, 0); // chama a função recursiva começando em 0
        printf("\nDigite um numero (0 para sair): ");
        scanf("%d", &n);
    }
    printf("Programa encerrado.\n");
    return 0;
}
