#include <stdio.h>
#include <stdlib.h>
#include <math.h>  // estou acumulando bibliotecas
#include <time.h>
//exercício 09 página 68
//feito de acordo com a solução em C/C++ da página 69, usando a biblioteca time.h para obter a data e hora do sistema.

int main() {
    time_t t;
    struct tm *d;
    int dia, mes, ano, hora, min;
    // obtém a data/hora atual
    time(&t);
    d = localtime(&t);
    dia = d->tm_mday;
    mes = d->tm_mon + 1;
    ano = d->tm_year + 1900;
    hora = d->tm_hour;
    min = d->tm_min;

    printf("Data Atual: %d/%d/%d - ", dia, mes, ano);
    if (mes == 1)  printf("janeiro\n");
    if (mes == 2)  printf("fevereiro\n");
    if (mes == 3)  printf("março\n");
    if (mes == 4)  printf("abril\n");
    if (mes == 5)  printf("maio\n");
    if (mes == 6)  printf("junho\n");
    if (mes == 7)  printf("julho\n");
    if (mes == 8)  printf("agosto\n");
    if (mes == 9)  printf("setembro\n");
    if (mes == 10) printf("outubro\n");
    if (mes == 11) printf("novembro\n");
    if (mes == 12) printf("dezembro\n");
    printf("Hora Atual: %02d:%02d\n", hora, min);
    return 0;
}
