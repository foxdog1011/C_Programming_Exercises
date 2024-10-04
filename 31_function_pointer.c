#include <stdio.h>

int add(int a, int b){
    return a +b;
}

int subtract(int a, int b){
    return a-b;
}

int (*operation)(int, int);

int main(){
    int x = 10, y = 5;
    operation = add;
    printf("加法: %d\n", operation(x,y));
    operation = subtract;
    printf("減法: %d\n", operation(x,y));
    return 0;
}