#include <iostream>
#include "Biblioteca01.h"
using namespace std;

//função para ver se é um primo perfeito utilizando a biblioteca01
int primoPerfeito(int v){
    int aux;
    aux=primo(v);//chama a função para saber se é ou não é primo, atribuindo um valor para "a"

        if(v==7)//se o valor colocado for 7 ele é um primo perfeito
            return 1;

        if(aux==1){
        divisivel(v-7,10);//confere se o numero termina em 7
            return 1;
    }
        else
            return 0;
}

//função para ver se é um numero perfeito utilizando biblioteca01
int numPerfeito(int v){
    int i, soma=0, aux;

    for(i=1;i<v;i++){
        aux=divisivel(v,i);
        if(aux==1)
        soma=soma+i;
    }

    if(soma==v)
        return 1;
    else
        return 0;
}
