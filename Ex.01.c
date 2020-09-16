#include <stdio.h>

int main(){
    int input = 0;
        do {
        printf("\nMenu \nDigite um numero de 1 a 9 \nPressione '0' para encerrar ");
        scanf("%d", &input);
        switch(input){
            case 0: 
                printf("\nEncerrando...");
                return 0;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                break; 
            default: 
                printf("\nOpcao invalida!");
            }
        }while(input != 0);
return 0;
}
