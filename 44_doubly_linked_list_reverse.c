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
        *head = newNode;
        return ;
    }
    struct Node* temp = *head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void reverse(struct Node** head){
    struct Node* temp = NULL;
    struct Node* current = *head;

    while(current != NULL){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if (temp!= NULL){
        *head = temp->prev;
    }
}

void printList(struct Node* node){
    while(node !=NULL){
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    printf("初始鍊表:");
    printList(head);

    reverse(&head);
    printf("反轉後的鍊表:");
    printList(head);

    return 0;
}