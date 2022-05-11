#include <stdio.h>
#include <stdlib.h>

void sequencia_fibonacci (int n);

int main()
{
    int n;
    printf("Selecione um termo da sequencia fibonacci: ");
    scanf("%d", &n);
    printf("\n\n");

    sequencia_fibonacci(n);

    return 0;
}

void sequencia_fibonacci (int n) {

    if (n >= 2) {
        n = (n - 2) + (n - 1);
        printf("%d", n);
    }
}
