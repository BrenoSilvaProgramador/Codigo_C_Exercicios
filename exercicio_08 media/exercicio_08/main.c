#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1 = 0, p2 = 0, media = 0;

    printf("Nota 01: ");  scanf("%i", &p1);
    printf("Nota 02: ");  scanf("%i", &p2);

    if (p1 <= 100 && p1 >= 0 && p2 <= 100 && p2 >= 0) {
        media = (p1 + p2) / 2;

        if (media >= 70) {
            printf("media das notas: %i.\nO aluno foi aprovado!\n", media);

            if (p1 > p2) {
                printf("A maior nota e %i", p1);
            } else {
                printf("A maior nota e %i", p2);
            }

        } if (media >= 40 && media < 70) {
            printf("media das notas: %i.\nO aluno esta de recuperacao!\n", media);

        } if (media < 40) {
            printf("media das notas: %i.\nO aluno esta reprovado!\n", media);
        }

    } else {
        printf("Insira um valor entre 0 e 100!");
    }
    return 0;
}
