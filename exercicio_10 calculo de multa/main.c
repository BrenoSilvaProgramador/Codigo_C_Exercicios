#include <stdio.h>
#include <stdlib.h>

void calcular_multa (int vel, int vel_max);

int main()
{
    int velocidade, velocidade_maxima;

    printf("Velocidade do motorista: ");
    scanf("%i", &velocidade);
    printf("Velocidade permitida na via: ");
    scanf("%i", &velocidade_maxima);

    calcular_multa (velocidade, velocidade_maxima);

    return 0;
}

void calcular_multa (int vel, int vel_max) {
    if (vel > vel_max) {

        printf("Voce sera multado!\n");
        int multa = (vel - vel_max) * 5;
        printf("Multa = $%i,00 reais\n", multa);

    } else {
        printf("Voce esta dentro do limite de velocidade!");
    }

}
