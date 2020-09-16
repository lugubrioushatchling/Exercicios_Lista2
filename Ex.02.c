#include <stdio.h>

int main(){
    int num = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num%2==0){
        printf("\nNumero par.");
    }else{
        printf("\nNumero impar.");
    }

return 0;
}
