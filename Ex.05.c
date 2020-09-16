#include <stdio.h>

int main(){
    int elementos = 1;
    int razao = 1;
    int soma = 0;
    printf("Quantos elementos da PA? ");
    scanf("%d", &elementos);
    printf("Qual a razao? ");
    scanf("%d", &razao);
    for (int i = 0; i<elementos; i++){
        soma = soma + razao;
            if (i == elementos-1){
                printf(" %d", razao);
            }else{
        
                printf(" %d +", razao);
            }   
        }   
    printf(" = %d", soma);
return 0;
}
