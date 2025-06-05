#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(void) {
    struct Student s1 = {"Ali", 20, 18.5};
    struct Student *ptr;

    ptr = &s1;

    printf("Student info:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Grade: %.2f\n", ptr->grade);

    return 0;
}
