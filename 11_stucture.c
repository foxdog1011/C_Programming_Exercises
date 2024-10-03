#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student student1; // Create a Student1 object

    printf("請輸入學生姓名:");
    scanf("%s, student1.name");
    printf("請輸入學生年齡:");
    scanf("%d, &student1.age");
    printf("請輸入學生 GPA:");
    scanf("%f, &student1.gpa");

    printf("學生姓名: %s\n", student1.name);
    printf("學生年齡: %d\n", student1.age);
    printf("學生 GPA: %f\n", student1.gpa);
    printf("\n");
    return 0;
}