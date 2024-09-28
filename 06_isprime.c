#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i;
    bool is_prime = true;

    printf("請輸入一個正整數: ");
    scanf("%d, &n");

    if (n<=1){
        is_prime = false;
    } else {
        for (i=2; i<=n;i++){
            if (n%i ==0){
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime){
        printf("%d 是質數\n", n);
    } else  {
        printf("%d 不是質數\n", n);
    }
    return 0;
}