#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("E uma vogal\n");
    }
    else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        printf("E uma consoante\n");
    }
    else {
        printf("Não e uma letra\n");
    }

    system("pause");
    return 0;
}
