#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name [50];
    int age;
    float gpa;
};

int main(){
    struct Student *student;

    student = (struct Student *)malloc(sizeof(struct Student));

    if(student == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("請輸入學生姓名: ");
    scanf("%s", student->name);
    printf("請輸入學生年齡: ");
    scanf("%d", &student->age);
    printf("請輸入學生 GPA: ");
    scanf("%f", &student->gpa);

    // 輸出結果
    printf("學生資料:\n");
    printf("姓名: %s\n", student->name);
    printf("年齡: %d\n", student->age);
    printf("GPA: %.2f\n", student->gpa);

    // 釋放動態分配的內存
    free(student);

    return 0;
}