#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data= data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
};

void append(struct Node** head, int data){
    struct Node* newNode = createNode(data);
    if (*head ==NULL){
        *head = newNode;
        return ;
    }
    struct Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next= newNode;
    newNode->prev = temp;
}

struct Node* mergeLists(struct Node* head1, struct Node* head2){
    if (head1 ==NULL) return head2;
    if (head2 ==NULL) return head1;

    struct Node *temp = head1;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = head2;
    head2->prev = temp;
    return head1;
}
void printList(struct Node* node){
    while (node != NULL){
        printf("%d", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    append(&head1, 10);
    append(&head1, 20);
    append(&head2, 30);
    append(&head2, 40);

    printf("鍊表1:");
    printList(head1);

    printf("鍊表2:");
    printList(head2);

    struct Node* mergeHead = mergeLists(head1, head2);
    printf("合併後的鍊表:");
    printList(mergeHead);

    return 0;
}