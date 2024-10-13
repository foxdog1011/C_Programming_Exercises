#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data =data;
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

void printList(struct Node* node){
    while(node !=NULL){
        printf("%d", node->data);
        node =node->next;
    }
    printf("\n");
}

void splitList(struct Node* head, struct Node** oddList, struct Node** evenList){
    struct Node* temp = head;
    while(temp != NULL){
        if(temp->data %2 ==0){
            append(evenList, temp->data);
        } else{
            append(oddList, temp->data);
        }
        temp = temp->next;
    }
}

int main(){
    struct Node* head = NULL;
    struct Node* oddList = NULL;
    struct Node* evenList = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);

    printf("初始鍊表:");
    printList(head);

    splitList(head, &oddList, &evenList);

    printf("奇數鍊表:");
    printList(oddList);

    printf("偶數鍊表:");
    printList(evenList);

    return 0;
}