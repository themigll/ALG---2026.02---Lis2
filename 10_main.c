#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, i;
    long long fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (i = num; i > 1; i--) {
        fatorial *= i;
    }

    printf("%d! = %lld\n", num, fatorial);

    system("pause");
    return 0;
}
