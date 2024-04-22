#include <iostream>

int main() {
    int numero;
    int soma = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }

    printf("A soma dos digitos e: %d\n", soma);

    return 0;
}
