#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void funcaoHorario (int numero, int hora, int minuto, int segundo, int resto);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numero, horas, minutos, segundos, resto;

    printf("Segundos: ");
    scanf("%i", &numero);
    printf("Você digitou: %i segundos!\n", numero);

    funcaoHorario(numero, horas, minutos, segundos, resto);

    return 0;
}

void funcaoHorario (int numero, int hora, int minuto, int segundo, int resto) {

    hora = numero / 3600;      // 3672 dividido por 3600 e 1
    resto = numero % 3600;     // O resto da divisao de 3672/3600 e 72
    minuto = resto / 60;     // Dividindo 72(resto) por 60 temos 1
    segundo = resto % 60;   // O resto de 72/60 e 12

    printf("\n%i hora(s) %i minuto(s) %i segundo(s)\n", hora, minuto, segundo);
}
