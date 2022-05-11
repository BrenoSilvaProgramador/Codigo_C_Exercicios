#include <stdio.h>
#include <locale.h>


int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;       // a variavel px recebe o endereço de x
    double *pY = &y;   // a variavel py recebe o endereço de y
    char *pZ = &z;    // a variavel pz recebe o endereço de z

    printf("Endereço de x = %i | Valor da variável x = %i\n", pX, *pX);
    printf("Endereço de y = %i | Valor da variável y = %f\n", pY, *pY);
    printf("Endereço de z = %i | Valor da variável z = %c\n", pZ, *pZ);

    getchar();
    return 0;
}
