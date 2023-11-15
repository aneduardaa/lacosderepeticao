#include<stdio.h>

main(){

    char resposta;
    int ano, diasdomes, mes;
     
    printf("\nDigite um  mes");
    scanf("%d", &mes);

    printf("\nDigite um ano");
    scanf("%d", &ano);

    switch (mes){
    case 1: 
        diasdomes = 31;
        break;
        case 3: 
         diasdomes = 31;
        case 5: 
         diasdomes = 31;
        case 7: 
         diasdomes = 31;
        case 8: 
         diasdomes = 31;
        case 10: 
         diasdomes = 31;
        case 12: 
         diasdomes = 31;
        break;
    
        case 4:
        diasdomes = 30;
         case 6:
        diasdomes = 30;
         case 9:
        diasdomes = 30;
         case 11:
        diasdomes = 30;
        case 2:
         if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
            diasdomes = 29;
        } else {
            diasdomes = 28;
        }break;
     }
    }

