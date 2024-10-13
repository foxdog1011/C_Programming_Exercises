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
    newNode->next= NULL;
    return newNode;
}

void append(struct Node** head, int data){
    struct Node* newNode = createNode(data);
    if (*head ==NULL){
        *head = newNode;
        return ;
    }
    struct Node* temp = *head;
    while (temp->next !=NULL){
        temp =temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteByValue(struct Node** head, int value){
    struct Node* temp = *head;
    while(temp !=NULL && temp->data != value){
        temp = temp->next;
    }

    if (temp==NULL){
        printf("值 %d 不存在於鍊表中\n", value);
        return ;
    }

    if (temp->prev != NULL){
        temp->prev->next = temp->next;
    } else{
        *head = temp->next;
    }
    if (temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    free(temp);
}

void printList(struct Node* node){
    while (node!= NULL){
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;
    append(&head,10);
    append(&head,20);
    append(&head,30);
    append(&head,40);

    printf("初始鍊表:");
    printList(head);

    deleteByValue(&head, 30);
    printf("刪除值為30 的節點後:");
    printList(head);
    deleteByValue(&head, 50);
    return 0;
}