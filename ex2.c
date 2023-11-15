#include<stdio.h>

main(){
    char elevador, periodo, elevMaisUsado, perMaisUsado;
    int moradores = 50,
    elevadorA, elevadorB, elevadorC,
    mat, vesp, not,
    totalServicos, totalMedia,
    freqMaisUsado;
    int i;

    for(i = 0; i < moradores; i++){
    printf("Informe qual elevdor voce mais utiliza %c", i+1);
    scanf("%c", &elevador);

    printf("Informe em qual periodo voce mais utiliza %c", i+1);
    scanf("%c", &periodo);

    switch (elevador){
    case 'A':
        elevadorA++;
        break;
    case 'B':
        elevadorB++;
    case 'c':
        elevadorC++;
        break;
    }

    switch (periodo){
    case 'M':
        mat++;
    case 'V':
        vesp++;
    case 'N':
        not++;
        break;
    }

    totalServicos++;


    }
    if (mat > freqMaisUsado) {
        freqMaisUsado = mat;
        perMaisUsado = 'M';
        elevMaisUsado = 'A';
    }

    if (vesp > freqMaisUsado) {
        freqMaisUsado = vesp;
        perMaisUsado = 'V';
        elevMaisUsado = 'A';
    }

    if (not > freqMaisUsado) {
        freqMaisUsado = not;
        perMaisUsado = 'N';
        elevMaisUsado = 'A';
    }

    if (elevadorB > freqMaisUsado) {
        freqMaisUsado = elevadorB;
        elevMaisUsado = 'B';
    }

    if (elevadorC > freqMaisUsado) {
        freqMaisUsado = elevadorC;
        elevMaisUsado = 'C';
    }

    int minFrequencia = mat < vesp ? (mat < not ? mat : not) : (vesp < not ? vesp : not);
    float diferencaPercentual = ((float)(freqMaisUsado - minFrequencia) / totalServicos) * 100;

    int freqMedia = totalServicos - freqMaisUsado - minFrequencia;
    float percentagemFreqMedia = ((float)freqMedia / totalServicos) * 100;

  
    printf("Período mais usado de todos: %c (pertence ao elevador %c)\n", perMaisUsado, elevMaisUsado);
    printf("Elevador mais frequentado: %c (concentra-se no período %c)\n", elevMaisUsado, perMaisUsado);
    printf("Diferença percentual entre o mais usado e o menos usado: %.2f%%\n", diferencaPercentual);
    printf("Percentagem sobre o total de serviços do elevador de média utilização: %.2f%%\n", percentagemFreqMedia);

    return 0;
}













