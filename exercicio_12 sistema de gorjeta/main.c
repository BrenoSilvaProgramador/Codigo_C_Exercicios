#include <stdio.h>
#include <stdlib.h>

void funcao_calculo_gorjeta (int gorjeta, int contador, int quantidade, int resto , int atualizar) {
    while (contador != 50) {

        quantidade = gorjeta / contador;
        resto = gorjeta % contador;
        printf ("Notas de %i reais --> %i notas \n", contador, quantidade);
        contador /= 2;
        atualizar = resto / contador;
    }
}



int main()
{
    int gorjeta = 0, contador = 100, quantidade = 0, resto = 0, atualizar = 0;
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13;

    printf("Digite o valor do caixa: ");
    scanf("%i", &gorjeta);

    /*
    void funcao_calculo_gorjeta (int gorjeta, int contador, int quantidade, int resto , int atualizar);
    funcao_calculo_gorjeta( gorjeta,  contador,  quantidade,  resto , atualizar);
    */
    d1 = gorjeta/100;
    d2 = gorjeta % 100;

    d3 = d2 / 50;
    d4 = d2 % 50;

    d5 = d4 / 20;
    d6 = d4 % 20;

    d7 = d6 / 10;
    d8 = d6 % 10;

    d9 = d8 / 5;
    d10 = d8 % 5;

    d11 = d10 / 2;
    d12 = d10 % 2;

    d13 = d12 / 1;

    printf ("\n\nO valor da gorjeta sera: \n\n-->%i nota(s) de 100(cem)\n-->%i nota(s) de 50(cinquenta)\n-->%i nota(s) de 20(vinte)\n-->%i nota(s) de 10(dez)\n-->%i nota(s) de 5(cinco)\n-->%i nota(s) de 2(dois)\n-->%i nota(s) de 1(um)\n\n", d1, d3, d5, d7, d9, d11, d13);

    return 0;
}
