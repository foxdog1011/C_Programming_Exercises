#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main(){
    FILE *fptr;
    struct Student student;

    fptr = fopen("student_data.bin", "rb");
    if (fptr ==NULL){
        printf("無法打開文件\n");
        return 1;
    }

    fread(&student, sizeof(struct Student), 1, fptr);

    fclose(fptr);

    printf("學生姓名: %s\n", student.name);
    printf("年齡: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);

    return 0;
}