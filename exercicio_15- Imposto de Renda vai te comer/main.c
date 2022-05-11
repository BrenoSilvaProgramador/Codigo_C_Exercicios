#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_salario = 0, imposto = 0;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &valor_salario);
    printf("Seu salario vale %.2f\n", valor_salario);

    if (valor_salario <= 1637.11) {
        printf("Voce nao precisa pagar imposto de renda!\n");
    }
    else if (valor_salario > 1637.11 && valor_salario <= 2453.50) {
        imposto = (valor_salario * 0.075) - 122.78;
        printf("Voce precisa pagar %.2f de imposto para a Receita Federal\n", imposto);
    }
    else if (valor_salario > 2453.50 && valor_salario <= 3271.38) {
        imposto = (valor_salario * 0.15) - 306.80;
        printf("Voce precisa pagar %.2f de imposto para a Receita Federal\n", imposto);
    }
    else if (valor_salario > 3271.38 && valor_salario <= 4087.65) {
        imposto = (valor_salario * 0.225) - 552.15;
        printf("Voce precisa pagar %.2f de imposto para a Receita Federal\n", imposto);
    }
    else {
        imposto = (valor_salario * 0.275) - 756.53;
        printf("Voce precisa pagar %.2f de imposto para a Receita Federal\n", imposto);
    }



    return 0;
}
