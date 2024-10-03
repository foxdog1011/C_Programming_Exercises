#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name [50];
    int age;
    float gpa;
};

int main(){
    struct Student *students;
    int num_students, i;

    printf("請輸入學生數量:");
    scanf("%d", &num_students);
    students = (struct Student *) malloc(num_students * sizeof(struct Student));

    if (students == NULL) {
        printf("記憶體分配失敗!\n");
        return 1;
    }
    for (i = 0; i < num_students; i++) {
        printf("請輸入第 %d 位學生姓名: ", i + 1);
        scanf("%s", students[i].name);
        printf("請輸入第 %d 位學生年齡: ", i + 1);
        scanf("%d", &students[i].age);
        printf("請輸入第 %d 位學生 GPA: ", i + 1);
        scanf("%f", &students[i].gpa);
    }

    // 輸出學生資料
    printf("\n學生資料:\n");
    for (i = 0; i < num_students; i++) {
        printf("學生 %d:\n", i + 1);
        printf("姓名: %s\n", students[i].name);
        printf("年齡: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
    }
    free(students);
    return 0;
}