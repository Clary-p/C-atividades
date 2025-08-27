#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//exercício 01 página 62

int main(){

    float nota_trab, aval_sem, exame, media;//para poder ter vírgula
    printf("Digite a nota do trabalho de laboratório(n.n): ");
    scanf("%f", &nota_trab);
    printf("Digite a nota da avaliação semestral(n.n): ");
    scanf("%f", &aval_sem);
    printf("Digite a nota do exame final(n.n): ");
    scanf("%f", &exame);
    // cálculo da média ponderada
    media = (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;
    printf("Média ponderada: %.2f\n", media);
    // verificação do conceito
    if (media >= 8.0 && media <= 10.0) {
        printf("Obteve conceito A\n");
    } else if (media >= 7.0 && media < 8.0) {
        printf("Obteve conceito B\n");
    } else if (media >= 6.0 && media < 7.0) {
        printf("Obteve conceito C\n");
    } else if (media >= 5.0 && media < 6.0) {
        printf("Obteve conceito D\n");
    } else if (media >= 0.0 && media < 5.0) {
        printf("Obteve conceito E\n");
    } else {
        printf("Nota inválida!\n");
    }
    return 0;
}
