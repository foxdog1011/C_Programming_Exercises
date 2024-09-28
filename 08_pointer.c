#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;  // 定義指向整數的指標

    // 使用指標操作變量
    printf("a 的值是: %d\n", a);
    printf("指標 p 的值 (a 的地址) 是: %p\n", p);
    printf("通過指標 p 訪問 a 的值是: %d\n", *p);

    return 0;
}
