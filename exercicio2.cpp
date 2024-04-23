#include <stdio.h>

int main(){
    int num;
    printf("Digite o numero inteiro: ");
    scanf("%d",&num);
    int i = 1;
    int res = 0;

    while (i <= num){
        res += i;
        i++;
    
    }

    printf("%d\n",res);

    return 0 ;
}
