#include <stdio.h>
#define FILES "fileSorgente.c"
#define FILE_COPIA "copia.c"

int main(int argc, char *argv[]) {
    FILE *originale, *copia;

    originale = fopen(FILES, "r");
    if(originale == NULL) {
        printf("NO");
        return 1;
    }

    copia = fopen(FILE_COPIA, "w");
    if(copia == NULL) {
        printf("NO");
        return 1;
    }

    while((c = fgets(fp) != EOF)) {
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
