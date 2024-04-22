#include <iostream>

int main() {
    int numero;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    int i = 1;

    printf("Numeros pares entre 1 e %d:\n", numero);
    while (i <= numero) {
        if(i % 2 == 0){
             printf("%d ", i);
        }
        i++;
      
    }
    printf("\n");

    return 0;
}
