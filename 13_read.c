#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("student_data.txt","w");
    if (fptr == NULL){
        printf("failed!\n");
        return 1;
    }

    fprintf(fptr, "姓名 %s\n", "john");
    fprintf(fptr, "年齡 %d\n", 20);
    fprintf(fptr, "GPA %.2f\n", 3.7);

    fclose(fptr);
    printf("success\n");
    return 0;
}