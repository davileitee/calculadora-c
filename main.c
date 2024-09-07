#include <stdio.h>
#include "teste.h"

int main(){
    float valor1, valor2, resposta;
    char oper;

    printf("digite o primeiro valor:");
    scanf("%f",&valor1);

    printf("digite o operador:");
    scanf(" %c",&oper);

    printf("digite o segundo valor:");
    scanf("%f",&valor2);

    switch(oper){
        case'+': resposta= soma(valor1, valor2);break;
        case'-': resposta= subtracao(valor1, valor2);break;
        case'*': resposta= multiplicacao(valor1, valor2);break;
        case'/': resposta= divisao(valor1, valor2);break;
        case'^': resposta= potencia(valor1, valor2);break;
    }
    printf("%.2f %c %.f= %.2f",valor1, oper, valor2, resposta);
    return 0;
}





