#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int A = 0;
    float L = 0, area = 0;
    printf("Digite a quantidade de lados e determine o poligono que tera sua area calculada: ");
    scanf("%i", &A);
    printf("\nDigite o lado do poligono regular: ");
    scanf("%f", &L);

    switch (A) {
        case 3:
        area = pow(L, 2) *(1.73/4);
        printf("\nA area do triangulo e %.2f\n", area);
        break;
        case 4:
        area = pow(L, 2);
        printf("\nA area do quadrado e %.2f\n", area);
        break;
        case 6:
        printf("\nA area do hexagono e %.2f\n", area);
        area = 6 * pow (L, 2) * (1.73/4);
        break;
        default:
        printf("\nNao consigo calcular essa area ^_^\n");
        break;
    }
    return 0;
}
