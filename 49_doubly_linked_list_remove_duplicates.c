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
    if (*head == NULL){
        *head =newNode;
        return ;
    }

    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteNode(struct Node** head, struct Node* node){
    if (*head ==NULL || node ==NULL)return ;

    if (node->prev != NULL){
        node->prev->next =node->next;
    } else{
        *head = node->next;
    }
    if (node->next != NULL){
        node->next->prev = node->prev;
    }
    free(node);
}

void removeDuplicates(struct Node** head){
    struct Node* current = *head;
    struct Node* compare, *nextNode;

    while (current!=NULL &&current->next != NULL){
        compare = current->next;
        while (compare != NULL){
            nextNode = compare->next;
            if (current->data == compare->data){
                deleteNode(head, compare);

            }
            compare = nextNode;

        }
        current = current->next;
    }
}

void printList(struct Node* node){
    while( node != NULL){
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 10);
    append(&head, 30);
    append(&head, 20);

    printf("初始鍊表:");
    printList(head);

    removeDuplicates(&head);
    printf("去除重複後:");
    printList(head);

    return 0;
}