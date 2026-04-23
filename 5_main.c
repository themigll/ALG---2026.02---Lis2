#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;

    printf("Digite seu primeiro numero: ");
    scanf("%d", &a);

    printf("Digite seu segundo numero: ");
    scanf("%d", &b);

    printf("Digite seu terceiro numero: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        if (b >= c) {
            printf("%d %d %d\n", a, b, c);
        } else {
            printf("%d %d %d\n", a, c, b);
        }
    }
    else if (b >= a && b >= c) {
        if (a >= c) {
            printf("%d %d %d\n", b, a, c);
        } else {
            printf("%d %d %d\n", b, c, a);
        }
    }
    else {
        if (a >= b) {
            printf("%d %d %d\n", c, a, b);
        } else {
            printf("%d %d %d\n", c, b, a);
        }
    }

    system("pause");
    return 0;
}
