#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtPosition(struct Node** head, int data, int position){
    struct Node* newNode = createNode(data);

    if (position==1){
        newNode->next = *head;
        if (*head!=NULL){
            (*head)->prev = newNode;
        }
        *head = newNode;
        return ;
    }
    struct Node* temp = *head;
    for(int i=1; temp!=NULL && i <position -1;i++){
        temp = temp->next;
    }

    if (temp ==NULL){
        printf("位置超出範圍\n");
        return ;
    }
    newNode->next= temp->next;
    if (temp->next != NULL){
        temp->next->prev = newNode;
    }
    temp->next= newNode;
    newNode->prev = temp;
}

void printList(struct Node* node){
    while (node !=NULL){
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;
    insertAtPosition(&head, 10, 1);
    insertAtPosition(&head, 10,1);
    insertAtPosition(&head,15,2);

    printList(head);
    return 0;
}
