#include <stdio.h>
#include <locale.h>


int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;       // a variavel px recebe o endere�o de x
    double *pY = &y;   // a variavel py recebe o endere�o de y
    char *pZ = &z;    // a variavel pz recebe o endere�o de z

    printf("Endere�o de x = %i | Valor da vari�vel x = %i\n", pX, *pX);
    printf("Endere�o de y = %i | Valor da vari�vel y = %f\n", pY, *pY);
    printf("Endere�o de z = %i | Valor da vari�vel z = %c\n", pZ, *pZ);

    getchar();
    return 0;
}
