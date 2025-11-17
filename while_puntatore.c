#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main(){
    int v [DIM] = {10, -2, 13, 15, -4};

    for(int *p = v; p < v + DIM; p++){
        printf("Indirizzo: %d\n", p);
        printf("Valore: %d\n", *p);
        printf("Differenze tra puntatori: %d\n", p - v);
    }

    return 0;
}