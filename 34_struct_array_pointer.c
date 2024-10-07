#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    int age;
    float gpa;
};

int main(){
    int n;
    struct Student *students;

    printf("請輸入學生數量:");
    scanf("%d", &n);

    students = (struct Student *)malloc(n* sizeof(struct Student));
    for (int i = 0; i < n; i++) {
        printf("輸入學生 %d 的姓名: ", i + 1);
        scanf("%s", students[i].name);
        printf("輸入年齡: ");
        scanf("%d", &students[i].age);
        printf("輸入 GPA: ");
        scanf("%f", &students[i].gpa);
    }

    // 打印學生資料
    printf("學生資料:\n");
    for (int i = 0; i < n; i++) {
        printf("姓名: %s, 年齡: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }

    // 釋放內存
    free(students);

    return 0;
}
