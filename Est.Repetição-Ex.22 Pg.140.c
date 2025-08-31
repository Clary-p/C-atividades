#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 22 página 140
int main() {
int idade, tot_f = 0, tot_m = 0, soma1 = 0, cont_m1 = 0, cont_m2 = 0, cont_f1 = 0;
    int menor_idade = 0, tot = 0;
    float media_idade, perc;
    char sexo, exp;

    printf("Digite a idade do candidato (0 para encerrar): ");
    scanf("%d", &idade);

    while (idade != 0) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);  // espaço antes de %c para ignorar ENTER
        printf("Tem experiência no serviço? (S/N): ");
        scanf(" %c", &exp);
        // Mulher com experiência → registrar menor idade
        if (sexo == 'F' && exp == 'S') {
            if (tot == 0) {  // primeira vez
                menor_idade = idade;
                tot = 1;
            } else if (idade < menor_idade) {
                menor_idade = idade;}
        }
        // Contadores básicos
        if (sexo == 'M') {
            tot_m++;
        }
        if (sexo == 'F') {
            tot_f++;
        }
        // Mulheres < 21 anos com experiência
        if (sexo == 'F' && idade < 21 && exp == 'S') {
            cont_f1++;
        }
        // Homens > 45 anos
        if (sexo == 'M' && idade > 45) {
            cont_m1++;
        }
        // Homens com experiência
        if (sexo == 'M' && exp == 'S') {
            soma1 += idade;
            cont_m2++;
        }
        printf("\nDigite a idade do próximo candidato (0 para encerrar): ");
        scanf("%d", &idade);}
    // Resultados
    printf("\nTotal de candidatas (F): %d\n", tot_f);
    printf("Total de candidatos (M): %d\n", tot_m);

    if (cont_m2 == 0) {
        printf("Nenhum homem com experiência.\n");
    } else {
        media_idade = (float)soma1 / cont_m2;
        printf("Idade média dos homens com experiência: %.2f\n", media_idade);
    }
    if (tot_m == 0) {
        printf("Nenhum homem.\n");
    } else {
        perc = (float)cont_m1 * 100 / tot_m;
        printf("Percentual de homens com mais de 45 anos: %.2f%%\n", perc);
    }
    printf("Mulheres com menos de 21 anos e experiência: %d\n", cont_f1);

    if (tot == 0) {
        printf("Nenhuma mulher com experiência.\n");
    } else {
        printf("Menor idade entre mulheres com experiência: %d\n", menor_idade);
    }
    return 0;}

