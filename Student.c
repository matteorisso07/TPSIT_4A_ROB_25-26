#include "Student.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 256

Student *createStudent(char *name, int age, float grade) {
    Student *student = (Student *)malloc(sizeof(Student));
    if (student == NULL) {
        printf("Errore: impossibile allocare memoria per lo studente.\n");
        exit(1);
    }

    student->name = (char *)malloc(strlen(name) + 1);
    if (student->name == NULL) {
        printf("Errore: impossibile allocare memoria per il nome.\n");
        free(student);
        exit(1);
    }

    strcpy(student->name, name);
    student->age = age;
    student->grade = grade;

    return student;
}

void setName(Student *student, char *name) {
    if (student->name != NULL)
        free(student->name);

    student->name = (char *)malloc(strlen(name) + 1);
    if (student->name == NULL) {
        printf("Errore: impossibile allocare memoria per il nome.\n");
        exit(1);
    }
    strcpy(student->name, name);
}

char *getName(Student student) {
    return student.name;
}

void setAge(Student *student, int age) {
    student->age = age;
}

int getAge(Student student) {
    return student.age;
}

void setGrade(Student *student, float grade) {
    student->grade = grade;
}

float getGrade(Student student) {
    return student.grade;
}

// DISPOSESTUDENT Libera la memoria dello studente
void disposeStudent(Student *student) {
    if (student->name != NULL)
        free(student->name);
    free(student);
}

void printStudent(Student *student) {
    printf("Nome: %s\n", student->name);
    printf("Età: %d\n", student->age);
    printf("Voto: %.2f\n", student->grade);
}
