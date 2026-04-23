#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float numero1, numero2, numero3;
    float media;
    printf("Digite sua primeira nota");
    scanf("%f", &numero1);

    printf("Digite sua segunda nota");
    scanf("%f", &numero2);

    printf("Digite sua terceira nota");
    scanf("%f", &numero3);

    media=(numero1 + numero2 + numero3)/3,0;

    printf("a media dos 3 numeros e %.2f\n", media);

    system("pause");
    return 0;
}
