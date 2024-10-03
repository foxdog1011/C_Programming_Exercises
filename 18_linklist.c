#include <stdio.h>
#include <stdlib.h>

// 定義結構體 Node
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // 正確地聲明指向 struct Node 的指標
    struct Node *new_node;

    // 動態分配內存以存儲新節點
    new_node = (struct Node *)malloc(sizeof(struct Node));

    // 檢查內存分配是否成功
    if (new_node == NULL) {
        printf("內存分配失敗\n");
        return 1;
    }

    // 初始化節點數據
    new_node->data = 10;
    new_node->next = NULL;

    // 輸出節點的數據
    printf("新節點的數據: %d\n", new_node->data);

    // 釋放內存
    free(new_node);

    return 0;
}
