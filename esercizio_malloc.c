//dichiariamp un puntatore v lo allochiamo con la malloc e poi lo carichiamo con un ciclo for while dall'input untente. ricorda di fare la free

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v;  
    int *pdim;

    // Alloco memoria per pdim
    pdim = (int *)malloc(sizeof(int));

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", pdim);

    v = (int *)malloc(*pdim * sizeof(int));
    
    for (int *p = v; p < v + *pdim; p++) {
        printf("Inserisci un numero intero -> ");
        scanf("%d", p);
    }

    free(v);
    free(pdim);
    return 0;
}


/*#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *v;  // dichiarazione del puntatore

    printf("Quanti numeri vuoi inserire? ");
    scanf("%d", &n);

    // allocazione dinamica
    v = (int *)malloc(n * sizeof(int));
    if (v == NULL) {
        printf("Errore di allocazione memoria!\n");
        return 1;
    }

    // caricamento dei valori
    printf("Inserisci %d numeri:\n", n);
    for (int i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    // stampa dei valori per verifica
    printf("Hai inserito:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // liberazione memoria
    free(v);

    return 0;
}*/
