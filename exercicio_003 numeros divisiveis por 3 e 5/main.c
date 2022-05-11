#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, x = 0, y = 0;

    printf("Numeros divisiveis por 3 ou 5: ");
    for (; i <= 99 ; i++) {

        if (i % 3 == 0 || i % 5 == 0){
            printf("%i ", i);

            if (i % 3 == 0) {
                x += 1;
            }

            if (i % 5 == 0) {
                y += 1;
            }
        }

    }

    printf("\n\n\n-----> Quantidade de numeros divisiveis por 3: %i numeros!\n-----> Quantidade de numeros divisiveis por 5: %i numeros!\n\n", x, y);
    return 0;
}
