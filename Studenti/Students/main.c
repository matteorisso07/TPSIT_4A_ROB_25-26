/*#include <stdio.h>
#include <stdlib.h>
#include "Student.h"

int main() {
    Student* s1 = createStudent("Mateo Risso", 21, 27.5);

    printf("Studente creato:\n");
    printStudent(*s1);

    setName(s1, "Matteo Risso");
    setAge(s1, 22);
    setGrade(s1, 30.0);

    printf("\nDopo le modifiche:\n");
    printStudent(*s1);

    char* csv = studentToCSV(*s1);
    printf("Studente fatto: %s\n", csv);

    Student* s2 = createFromCSV(csv);
    printf("Studente fatto:\n");
    printStudent(*s2);

    free(csv);
    disposeStudent(s1);
    disposeStudent(s2);

    return 0;
}
*/