#include <stdio.h>
#include <stdlib.h>

#define DIM1 5
#define DIM2 8

int main(){
    int **a;
    int i, j;

    a = (int **) calloc (DIM1, sizeof(int *));
    for(i = 0; i < DIM1; i++){
        a[i] = (int *) calloc (DIM2, sizeof(int));
    }

    for(i = 0; i < DIM1; i++){
        for(j = 0; j < DIM2; j++){
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrice letta:\n");
    for(i = 0; i < DIM1; i++){
        for(j = 0; j < DIM2; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
