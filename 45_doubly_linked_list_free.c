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

void append(struct Node** head, int data){
    struct Node* newNode = createNode(data);
    if (*head ==NULL){
        *head=newNode;
        return ;
    }
    struct Node* temp = *head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next= newNode;
    newNode->prev = temp;
}

void freeList(struct Node* node){
    struct Node* temp;
    while (node !=NULL){
        temp = node;
        node = node->next;
        free(temp);
    }
}

int main(){
    struct Node* head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    printf("鍊表以創建，釋放內存\n");
    freeList(head);
    return 0;
}