#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void append(struct Node **head_ref, int new_data){
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref ==NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next !=NULL){
        last = last->next;
    }

    last->next = new_node;
}

void printList(struct Node *node){
    while(node !=NULL){
        printf("%d ->", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void freeList(struct Node *node){
    struct Node *temp;
    while (node != NULL){
        temp = node;
        node = node->next;
        free(temp);
    }
}
int main(){
    struct Node *head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    printList(head);
    freeList(head);
    return 0;
}
