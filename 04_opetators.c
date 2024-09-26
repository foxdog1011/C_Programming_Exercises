#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf(" 請輸入第一個整數:");
    scanf("%d", &num1);

    printf(" 請輸入第二個整數:");
    scanf("%d", &num2);

    printf(" 請選擇一個運算符號 (+,-,*, /): ");
    scanf(" %c", &operator);

    if (operator == '+'){
        result = num1 + num2;
        printf(" 結果是: %d\n", result);
    } else if (operator == '-'){
        result = num1 - num2;
        printf(" 結果是: %d\n", result);
    } else if (operator =='*'){
        result = num1 * num2;
        printf("結果是: %d\n", result);
    } else if (operator == '/'){
        if (num2 !=0){

            result = num1 / num2;
            printf("結果是：%d\n", result);
    } else{
        printf("錯誤: 不能除以 0\n");
        }
    } else{
        printf("錯誤: 無效的運算符號\n");
    }
    return 0;

}