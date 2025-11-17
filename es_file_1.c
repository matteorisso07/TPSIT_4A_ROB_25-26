#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 100

char * readLine(FILE *in){
    char *ret;
    char buffer[MAX_STR];
    int i;
    char c; 

    for(i = 0; ((c = fgetc(in) != '\n') && (c != EOF)); i++){
        buffer[i] = c;
    }

    return (i == 0) ? NULL : strdup(buffer);
    /*
    OPPURE:
    if(i == 0){
        ret == NULL;
    }else{
        ret = strdup(buffer);
    }
    return ret;
    */
    return ret;
}

int main(){
    FILE *fp;
    fp = fopen("ilmiofile.csv", "r");

    if(fp == NULL) errore ("fopen()", -1);

    char *line;
    while(line = readLine(fp)){
        char **fields = split(line);
        Persona p = creaPersona(*(fields),*(fields + 1), *(fields + 2));
        free(fields);
        free(line);
    }
}
