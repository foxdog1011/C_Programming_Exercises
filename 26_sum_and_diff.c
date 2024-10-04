#include <stdio.h>

// 定義一個函數來計算兩個數的和與差
void sum_and_diff(int a, int b, int *sum, int *diff) {
    *sum = a + b;   // 使用指標返回和
    *diff = a - b;  // 使用指標返回差
}

int main() {
    int x = 10, y = 5;
    int sum, diff;

    // 呼叫函數並通過指標獲取多個結果
    sum_and_diff(x, y, &sum, &diff);

    printf("和: %d\n", sum);
    printf("差: %d\n", diff);

    return 0;
}
