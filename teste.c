#include "teste.h"
#include <stdio.h>

float soma (float a, float b){
    return a + b;
}
float subtracao (float d, float e){
 
    return d-e;
}
float multiplicacao (float g, float h){
    return g*h;
}
float divisao (float i, float j){
    if (j==0){
        printf("operacao invalida");
    }
    return i/j;
}
float potencia (float base, float expoente){
   float inicio, resultado=1;
    for(inicio=0;inicio<=expoente;inicio++){
        resultado*=base;
    }
    return resultado;

}