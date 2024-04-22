#include <iostream>

int main() {
    int numero;
    int i = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        i += numero % 10;
        numero /= 10;
    }

    printf("A soma dos digitos e: %d\n", i);

    return 0;
}
