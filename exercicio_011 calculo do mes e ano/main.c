#include <stdio.h>
#include <stdlib.h>

void relacao_mes_dias(int mes, int ano);

int main()
{
    int ano, mes = 0;

    printf("usuario digite um mes (de 1 a 12): ");
    scanf("%i", &mes);
    printf("usario digite um ano (de 1 D.C. ao ano atual): ");
    scanf("%i", &ano);

    relacao_mes_dias(mes,ano);

    return 0;
}

void relacao_mes_dias(int mes, int ano) {

switch (mes) {

        case 1:
            printf("\nO mes e janeiro e o ano e %i. Entao a quantidade de dias no mes %i e: 31 dias\n", ano, mes);
        break;

        case 2:
            if (ano % 4 != 0) {
                printf("\nO mes e fevereiro e o ano e %i. Entao a quantidade de dias no mes %i e: 28 dias\n", ano, mes);
            } else {
                printf("\nO mes e fevereiro e o ano e %i (ano bissexto). Entao a quantidade de dias no mes %i e: 29 dias\n", ano, mes);
            }
        break;

        case 3:
            printf("\nO mes e marco e o ano e %i. Entao a quantidade de dias no mes %i e: 31 dias\n", ano, mes);
        break;

        case 4:
            printf("\nO mes e abril e o ano e %i. Entao a quantidade de dias no mes %i e: 30 dias\n", ano, mes);
        break;

        case 5:
            printf("\nO mes e maio e o ano e %i. Entao a quantidade de dias no mes %i e: 31 dias\n", ano, mes);
        break;

        case 6:
            printf("\nO mes e marco e o ano e %i. Entao a quantidade de dias no mes %i e: 30 dias\n", ano, mes);
        break;

        case 7:
            printf("\nO mes e julho e o ano e %i. Entao a quantidade de dias no mes %i e: 31 dias\n", ano, mes);
        break;

        case 8:
            printf("\nO mes e agosto e o ano e %i. Entao a quantidade de dias no mes %i e: 31 dias\n", ano, mes);
        break;

        case 9:
            printf("\nO mes e setembro e o ano e %i. Entao a quantidade de dias no mes %i e: 30 dias\n", ano, mes);
        break;

        case 10:
            printf("\nO mes e outubro e o ano e %i. Entao a quantidade de dias no mes %i e: 31 dias\n", ano, mes);
        break;

        case 11:
            printf("\nO mes e novembro e o ano e %i. Entao a quantidade de dias no mes %i e: 30 dias\n", ano, mes);
        break;

        case 12:
            printf("\nO mes e dezembro e o ano e %i. Entao a quantidade de dias no mes %i e: 31 dias\n", ano, mes);
        break;

        default:
        printf("\nEscolha um mes de acordo com seu numero. \nExemplo: 1 - janeiro;\n");
        break;
    }
}
