#include <stdio.h>

int main(){
    int score;

    printf("請輸入成績 <0-100>: ");
    scanf("%d", &score);

    if (score >= 90){
        printf("成績等級: A\n");
    } else if (score >= 80){
        printf("成績等級: B\n");
    } else if (score >= 70){
        printf("成績等級: C\n");
    }
    return 0;
}