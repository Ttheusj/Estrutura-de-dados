#include <iostream>
using namespace std;

//Fun��o para ver se o numero inserido � divisivel pelo outro numero
int divisivel(int v, int k){
    if(v%k)
        return 0;//se a sobra for 0, logo ele � divisivel
    else
        return 1;//se nao for 0, logo ele nao � divisivel
}

//fun��o para conferir so o numero � primo
int primo(int v){
    int aux=0,a=0;

    for(aux=1 ; aux<=v ; aux++)
        if(v%aux==0)
            a++;//soma mais 1 toda vez que a sobra for 0

     if(a==2)//se "a" for igual a 2, quer dizer que o numero escolhido � divisivel por 2 numeros, logo ele � primo
        return 1;
    else
        return 0;
}



