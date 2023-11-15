#include<stdio.h>

main(){

char avaliacao;
int espectador = 100,
idade, 
totalOtimo = 0, 
totalbom = 0, 
regular = 0,
totalRuim = 0, 
totalPessimo = 0, 
idadeOtimo = 0, 
idadeRuim = 0,
maiorIdadePessimo = 0;
float mediaIdadeRuim = 0;

int i;
for(i = 0; i < espectador; i++){
    char avaliacao;
    printf("digite sua idade\n %d:", i + 1);
    scanf("%d", &idade);

    printf("digite sua avaliacao, baseado em:A-otimo B-Bom C-Regular D-Ruim E-Pessimo\n%d:", i + 1);
    scanf(" %c", &avaliacao);
    switch (avaliacao) {
            case 'A':
                totalOtimo++;
                idadeOtimo = idade > idadeOtimo ? idade : idadeOtimo; 
                break;
            case 'B':
                totalbom++;
                break;
            case 'C':
                regular++;
                break;
            case 'D':
                totalRuim++;
                idadeRuim = idade > idadeRuim ? idade : idadeRuim; 
                mediaIdadeRuim += idade;
                break;
            case 'E':
                totalPessimo++;
                break;
        }
    }
 printf("\nQuantidade de respostas Ótimo: %d\n", totalOtimo);
    
float diferencaPercentual = ((float)totalbom / espectador - (float)regular / espectador) * 100;
printf("Diferença percentual entre respostas Bom e Regular: %.2f%%\n", diferencaPercentual);

if (totalRuim > 0) {
        mediaIdadeRuim /= totalRuim;
        printf("Média de idade das pessoas que responderam Ruim: %.2f\n", mediaIdadeRuim);
    }

    float percentualPessimo = ((float)totalPessimo / espectador) * 100; 
    printf("Percentagem de respostas Péssimo: %.2f%%\n", percentualPessimo);
    printf("Maior idade que respondeu Péssimo: %d\n", maiorIdadePessimo);

    int diferencaIdades = idadeOtimo - idadeRuim;
    printf("Diferença de idade entre a maior idade que respondeu Ótimo e a maior idade que respondeu Ruim: %d\n", diferencaIdades);

}