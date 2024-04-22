#include <iostream>

int main() {
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    int contador = 2; 

    printf("Numeros pares entre 1 e %d:\n", numero);
    while (contador <= numero) {
        printf("%d ", contador);
        contador += 2; 
    }
    printf("\n");

    return 0;
}
