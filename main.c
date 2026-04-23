#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int num1, num2, resultado_mmc;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado_mmc = (num1 * num2) / mdc(num1, num2);

    printf("O MMC de %d e %d e: %d\n", num1, num2, resultado_mmc);

    system("pause");
    return 0;
}