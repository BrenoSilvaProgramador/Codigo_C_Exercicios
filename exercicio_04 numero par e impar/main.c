#include <stdio.h>
#include <stdlib.h>

void funcao_par(int numero);

int main()
{
    int numero;

    printf("Digite um numero e veja se ele e par: ");
    scanf("%i", &numero);

    funcao_par(numero);

    return 0;
}

void funcao_par(int numero) {

    if (numero % 2 == 0) {
        printf("\nO numero %i e par!\n\n", numero);
    } else {
        printf("\nO numero %i e impar!\n\n", numero);
    }

}
