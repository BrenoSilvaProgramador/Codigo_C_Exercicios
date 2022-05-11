#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 = 0, n2 = 0, n3 = 0;
    printf("Digite valores:\n");

    printf("\nn1: ");   scanf("%f", &n1);
    printf("\nn2: ");   scanf("%f", &n2);
    printf("\nn3: ");   scanf("%f", &n3);

    if (n1 > n2) {

        if (n1 > n3) {
            printf("O maior numero e o %f! \n", n1);
        } else {
            printf("O maior numero e o %f! \n", n3);
        }

    } else {

        if (n2 > n3) {
            printf("O maior numero e o %f! \n", n2);
        } else {
            printf("O maior numero e o %f! \n", n3);
        }

    }

    if (n1 < n2) {

        if (n1 < n3) {
            printf("O menor numero e o %f! \n", n1);
        } else {
            printf("O menor numero e o %f! \n", n3);
        }

    } else {

        if (n2 < n3) {
            printf("O menor numero e o %f! \n", n2);
        } else {
            printf("O menor numero e o %f! \n", n3);
        }
    }

    if (n1 > n2) {
        if (n2 < n3) {
            printf("%i e o numero do meio!", n2);
    } else {
         if (n1 < n3 ) {
            printf("%i e o numero do meior!", n1);
         }
    }
}
    return 0;
}
