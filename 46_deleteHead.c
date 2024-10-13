#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void deleteHead(struct Node** head){
    if  (*head ==NULL){
        printf("鍊表為空，無法刪除\n");
        return ;
    }
    struct Node* temp =  *head;
    *head = temp->next;
    if (*head != NULL){
        (*head)->prev = NULL;
    }
    free(temp);
}

void printList(struct Node* node){
    while(node != NULL){
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->prev = head;
    head->next->next = createNode(30);
    head->next->next->prev = head->next;
    printf("初始鍊表:");
    printList(head);

    deleteHead(&head);
    printf("刪除頭節點後:");
    printList(head);
    return 0;
}