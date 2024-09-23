#include <stdio.h>
#include <locale.h>

int main() {
    // 設定區域為默認區域，以便正確顯示字符
    setlocale(LC_ALL, "");

    int a = 10;
    float b = 3.14;
    char c = 'A';

    printf("整數 a 的值為: %d\n", a);
    printf("浮點數 b 的值為: %.2f\n", b);
    printf("字符 c 的值為: %c\n", c);

    return 0;
}
