#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calculaMedia(int n1, int n2, int n3);

int main(int argc, char * argv[])
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;
    char op = 's';

    printf("Usuário, digite as notas: \n\n");

    printf("n1: ");  scanf("%i", &n1);
    printf("n2: ");  scanf("%i", &n2);
    printf("n3: ");  scanf("%i", &n3);

    while (op == 's'){
        calculaMedia(n1,n2,n3);

        printf("\n\nContinua? [s/n]: ");
        op =getchar();
        getchar();
    }


    return 0;
}

void calculaMedia(int n1, int n2, int n3) {

    int media;

    if (n1 >= 0 && n1 <= 10 && n2 >= 0 && n2 <= 10 && n3 >= 0 && n3 <= 10){

        printf ("As notas digitadas foram: %i %i e %i \n\n", n1, n2, n3);

        media = (n1 + n2 + n3) / 3;

        printf("A media das notas é %i\n\n", media);

    } else {

        printf ("Digite um valor entre o intervalo de 0 a 10!");
    }
}
