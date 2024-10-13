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
void append(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void sortedInsert(struct Node** head, struct Node* newNode){
    struct Node* current;

    if (*head ==NULL){
        *head = newNode;
    } else if ((*head)->data >= newNode->data){
        newNode->next = *head;
        newNode->next->prev = newNode;
        *head = newNode;
    } else{
        current = *head;
        while(current->next != NULL && current->next->data <newNode->data){
            current = current->next;
        }
        newNode->next= current->next;
        if (current->next != NULL){
            newNode->next->prev = newNode;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}
void insertionSort(struct Node** head){
    struct Node* sorted = NULL;
    struct Node* current = *head;

    while(current != NULL){
        struct Node* new = current->next;
        current->prev = current->next = NULL;
        sortedInsert(&sorted, current);
        current = new;
    }
    *head = sorted;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    append(&head, 4);
    append(&head, 3);
    append(&head, 1);
    append(&head, 2);

    printf("初始鏈表: ");
    printList(head);

    insertionSort(&head);

    printf("排序後的鏈表: ");
    printList(head);

    return 0;
}