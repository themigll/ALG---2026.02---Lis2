#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int total_segundos, horas, minutos, segundos, resto;

    printf("Digite o total de segundos: ");
    scanf("%d", &total_segundos);

    horas = total_segundos / 3600;
    resto = total_segundos % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d segundos equivale a:\n", total_segundos);
    printf("%d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);

    system("pause");

    return 0;
}
