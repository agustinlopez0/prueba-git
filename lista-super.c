#include <stdio.h>

int main (){

    char listaSuper = {"shampoo", "papel higienico", "pan", "jamon", "queso"};
    
    for(int i = 0; i < 4; i++){
        printf("%s\n", listaSuper[i]);
    }

    return 0;
}