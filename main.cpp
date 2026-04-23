#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float tamanho, velocidade, temp_seg, temp_min;

    printf("Tamanho do arquivo em MB: ");
    scanf("%f", &tamanho);

    printf("Digite a velocidade da internet Mbps: ");
    scanf("%f", &velocidade);

    temp_seg = (tamanho * 8) / velocidade;
    temp_min = temp_seg / 60;

    printf("Tempo aproximado do download: %.2f minutos\n", temp_min);

    system("pause");
    return 0;

}