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
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
struct Node* search (struct Node*head, int value){
    struct Node* temp = head;

    while(temp!=NULL){
        if (temp->data == value){
            return temp;
        }
        temp= temp->next;
    }
    return NULL;
}

void printList(struct Node* node){
    while ( node != NULL){
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
    printf("鍊表內容:");
    printList(head);
    int value = 20;
    struct Node* found = search(head,value);
    if (found !=NULL){
        printf("找到數據%d \n", value);
    } else{
        printf("未找到數據%d\n", value);
    }
    return 0;
}