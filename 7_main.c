#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int numero_secreto, palpite, tentativas = 0;

    srand(time(NULL));
    numero_secreto = rand() % 101;

    do {
        printf("Digite um numero entre 0 e 100: ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite < numero_secreto) {
            printf("O numero secreto e MAIOR\n");
        }
        else if (palpite > numero_secreto) {
            printf("O numero secreto e MENOR\n");
        }
        else {
            printf("Parabens! voce acertou o numero!\n");
        }

    } while (palpite != numero_secreto);

    printf("Voce acertou em %d tentativas.\n", tentativas);

    system("pause");
    return 0;
}
