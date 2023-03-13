#include <iostream>
using namespace std;

//Função para ver se o numero inserido é divisivel pelo outro numero
int divisivel(int v, int k){
    if(v%k)
        return 0;//se a sobra for 0, logo ele é divisivel
    else
        return 1;//se nao for 0, logo ele nao é divisivel
}

//função para conferir so o numero é primo
int primo(int v){
    int aux=0,a=0;

    for(aux=1 ; aux<=v ; aux++)
        if(v%aux==0)
            a++;//soma mais 1 toda vez que a sobra for 0

     if(a==2)//se "a" for igual a 2, quer dizer que o numero escolhido é divisivel por 2 numeros, logo ele é primo
        return 1;
    else
        return 0;
}



