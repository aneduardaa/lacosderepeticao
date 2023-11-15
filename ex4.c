#include<stdio.h>

main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    int i = 0;

    for (int i = 0; i < numero; i++){
        if(numero % i == 0){
            printf("%d", i);
        }
        
    }
    
}



