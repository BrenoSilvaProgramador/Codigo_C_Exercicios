#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 = 0, n2 = 0, operacao;
    char op = ' ';

    printf("---> + -> soma\n---> - -> subtracao\n---> * -> prouto\n---> / -> razao\n\nEscolha a operacao matematica: ");
    scanf("%s", &op);

    if (op == '+') {

        printf("\nDigite dois numeros: \n");
        printf("n1: ");  scanf("%f", &n1);
        printf("n2: ");  scanf("%f", &n2);

        operacao = n1 + n2;
        printf("\nA soma de %f e %f sera: %f!\n", n1, n2, operacao);
    }
    else if (op == '-') {

        printf("\nDigite dois numeros: \n");
        printf("n1: ");  scanf("%f", &n1);
        printf("n2: ");  scanf("%f", &n2);

        operacao = n1 - n2;
        printf("\nA diferenca entre %f e %f sera: %f!\n", n1, n2, operacao);
    }

     else if (op == '*') {

        printf("\nDigite dois numeros: \n");
        printf("n1: ");  scanf("%f", &n1);
        printf("n2: ");  scanf("%f", &n2);

        operacao = n1 * n2;
        printf("\nO produto entre %f e %f sera: %f!\n", n1, n2, operacao);
    }

     else if (op == '/') {

        printf("\nDigite dois numeros: \n");
        printf("n1: ");  scanf("%f", &n1);
        printf("n2: ");  scanf("%f", &n2);

        operacao = n1 / n2;
        printf("\nA razao entre %f e %f sera: %f!\n", n1, n2, operacao);
    }

    return 0;
}
