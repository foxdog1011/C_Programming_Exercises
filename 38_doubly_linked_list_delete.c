#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// 新節點
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// 刪除指定位置的節點
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("鏈表為空\n");
        return;
    }

    struct Node* temp = *head;

    // 刪除頭節點
    if (position == 1) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }

    // 遍歷到指定位置的節點
    for (int i = 1; temp != NULL && i < position; i++) {
        temp = temp->next;
    }

    // 如果位置超出鏈表長度
    if (temp == NULL) {
        printf("位置超出範圍\n");
        return;
    }

    // 更新前後節點的鏈接
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    free(temp);
}

// 打印鏈表
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
void append(struct Node** head, int data){
    struct Node* newNode = createNode(data);

    if(*head ==NULL){
        *head = newNode;
        return;
    }
    struct Node*temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

int main() {
    struct Node* head = NULL;

    // 初始化鏈表
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    printf("初始鏈表: ");
    printList(head);

    deleteAtPosition(&head, 2);
    printf("刪除第二個節點後: ");
    printList(head);

    deleteAtPosition(&head, 1);
    printf("刪除第一個節點後: ");
    printList(head);

    return 0;
}
