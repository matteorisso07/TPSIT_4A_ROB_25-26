#ifndef MYLIB_H
#define MYLIB_H 

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

#define MAX_STRING_LENGTH 256

void errore(char* s, int n);
char* readLine(FILE* f);
char** splitString(char* s, char delimiter);
void disposeStringArray(char** arr);
int randomRange(int min, int max);

#include "myLib.c"

#endif // MYLIB_H