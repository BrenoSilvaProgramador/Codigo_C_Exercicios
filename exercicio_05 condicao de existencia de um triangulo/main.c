#include <stdio.h>
#include <stdlib.h>

void condicaoExistenciaTriangulo (int a, int b, int c);

int main()
{
    int a = 0, b = 0, c = 0;
    printf("Digite tres medidas e veja se elas formam um trinagulo: \n\n");
    printf("Medida 01: "); scanf("%i", &a);
    printf("Medida 02: "); scanf("%i", &b);
    printf("Medida 03: "); scanf("%i", &c);

    condicaoExistenciaTriangulo (a,b,c);

    return 0;
}

void condicaoExistenciaTriangulo (int a, int b, int c) {

    if (a > abs (b-c) && a < b + c && b > abs (a-c) && b < a + c && c > abs (a-b) && c < b + a) {
        printf("\nO triangulo existe!\n");
    } else {
        printf("\nO triangulo nao existe!\n");
    }
}
