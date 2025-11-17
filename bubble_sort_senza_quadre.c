#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main(){
    int v [DIM] = {10, 5, 4, 3, 7};

    int *p = v;
    int *q = v + 1;

    for(p = v; p < v + DIM - 1; p++){
        for(q = p + 1; q < v + DIM; q++){
            if(*p > *q){
                int temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }

    for(p = v; p < v + DIM; p++){
        printf("%d\n", *p);
    }
}