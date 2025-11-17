#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main(){
    int v [DIM] = {1, 2, 3, 5, -4};
    int *p = v;

    //se si somma un numero ad un puntatore si avrà un puntatore

    while(p < v + DIM){
        printf("Indirizzo: %d\n", p);
        printf("Valore: %d\n", *p);
        printf("Differenze tra puntatori: %d\n", p - v);

        p++;
    }

    return 0;
}


