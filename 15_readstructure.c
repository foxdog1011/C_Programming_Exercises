#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name [50];
    int age;
    float gpa;
};

int main() {
    FILE *fptr;
    struct Student student = {"John", 10, 3.5};

    fptr - fopen("student_data.bin", "wb");
    if (fptr ==NULL)
{
    printf("無法大開文件!\n");
    return 1;
}
    fwrite(&student, sizeof(struct Student),  1,fptr);

    fclose(fptr);
    printf("結構體數據已寫入文件\n");
    return 0;
}