#include <stdio.h>

int main() {
    struct student { int id;char name[20];int age;float percentage;};

    struct student s = {101, "saro", 20, 78.99};

    printf("Student id: %d\n", s.id);
    printf("Student name: %s\n", s.name);
    printf("Student age: %d\n", s.age);
    printf("Student percentage: %f\n", s.percentage);

    return 0;
}
