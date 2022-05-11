#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float calcular_altura(int V0, int seno, int g);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float alturaSolo, velocidade, angulo, g = 9.81, altura;

    printf("altura do solo: "); scanf("%f", &alturaSolo);
    printf("velocidade: ");     scanf("%f", &velocidade);
    printf("angulo: ");         scanf("%f", &angulo);

    printf("\n\n-->altura do solo: %f metros\n-->velocidade inicial: %f m/s\n-->angulo: %f graus \n-->constante da gravidade: 9.81 m/s \n\n", alturaSolo, velocidade, angulo);

    altura = calcular_altura(velocidade, angulo, g);

    printf("%f\n\n", altura);

    return 0;
}

float calcular_altura(int V0, int seno, int g) {
    float H =  ((pow (V0, 2)) * ((pow(sin(seno), 2))/(2)))*(g);
   return H;
}
