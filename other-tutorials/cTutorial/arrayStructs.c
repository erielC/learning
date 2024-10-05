#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[12];
    float gpa;
} Student;


int main(){

    Student student1 = {"Spongebob", 3.0};
    Student student2 = {"Patrick", 2.5 };
    Student student3 = {"Sandy", 4.0};
    Student student4 = {"Squidward", 2.0};

    Student students[] ={student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("\n%-12s", students[i].name); // left justified 12 pts is the -12 after the % 
        printf(" %.02f", students[i].gpa);
    }

    printf("\n");
    return 0;
}