#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 11 página 71

int main() {
int hora_i, min_i, hora_f, min_f, hora_d, min_d;

printf("Digite o horário inicial\n");
printf("hora: ");
scanf("%d", &hora_i);
printf("minuto: ");
scanf("%d", &min_i);
printf("Digite o horário final\n");
printf("hora: ");
scanf("%d", &hora_f);
printf("minuto: ");
scanf("%d", &min_f);
// Ajuste de minutos
if (min_i > min_f) {
        min_f = min_f + 60;
        hora_f = hora_f - 1;
    }
// Ajuste de horas (quando passa para o dia seguinte)
if (hora_i > hora_f) {
        hora_f = hora_f + 24;
    }
min_d = min_f - min_i;
hora_d = hora_f - hora_i;
printf("O jogo durou %d hora(s) e %d minuto(s))", hora_d, min_d);
return 0;}


