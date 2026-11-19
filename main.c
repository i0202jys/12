#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    int id;
    char name[30]; 
    float grade;
};

int main(void){
    struct student s1 = {100, "John Doe", 3.5};

    s1.id = 101;
    strcpy(s1.name, "John Deo2");
    s1.grade = 4.1;

    printf("Id: %d, name: %s, grade: %.1f\n", s1.id, s1.name, s1.grade);

    return 0;
}