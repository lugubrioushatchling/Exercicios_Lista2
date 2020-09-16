#include <stdio.h>

int main(){
    int num = 1;
    int sum = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    for (int i = num; i > 0; i--){
        sum = sum*i;
            if (sum == num){
                printf("%d", i);
            }else{
                printf(" * %d", i);
            }
    }
    printf(" = %d", sum);
return 0;
}
