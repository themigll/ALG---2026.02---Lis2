#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite seu peso em KG: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f\n", imc);

    system("pause");
    return 0;
}
