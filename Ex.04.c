#include <stdio.h>

int main(){
    int ano = 1;
    printf("Digite um ano: ");
    scanf("%d", &ano);
    if (ano%4==0){
        printf("O ano e bissexto.");
    }else{
        printf("O ano nao e bissexto.");
    }
return 0;
}
