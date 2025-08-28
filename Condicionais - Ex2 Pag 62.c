#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//exercício 02 página 62

int main() {
    float nota1, nota2, nota3, media, nota_exame; //float para admitir parte fracionária
    printf("Digite a primeira nota (formato x.y: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota(mesmo formato): ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota(mesmo formato): ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Média aritmética: %.2f\n", media);
    if (media >= 0 && media < 3) {
        printf("Reprovado\n");
    } else if (media >= 3 && media < 7) {
        printf("Exame\n");
        // cálculo da nota necessária para atingir média final 6
        nota_exame = 12 - media;
        printf("Deve tirar nota %.2f para ser aprovado\n", nota_exame);
    } else if (media >= 7 && media <= 10) {
        printf("Aprovado\n");
    } else {
        printf("Nota inválida!\n");
    }
    return 0;}
    } else {
        printf("Nota inválida!\n");
    }
    return 0;}
