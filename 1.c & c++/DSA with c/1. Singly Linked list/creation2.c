#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
} Node;

Node *createNode(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    // Initially assigning the next pointer to NULL
    newNode->next = NULL;
    return newNode;
}
void traversalLinkedList(Node *ptr){
    if (ptr == NULL){
        printf("\nList is empty\n");
    }else
    {
        while (ptr != NULL){
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
}

int main(){ 
    Node *first, *second, *third, *forth;
    // calling function for create node
    first = createNode(50);
    second = createNode(100);
    first->next = second;
    third = createNode(150);

    second->next = third;
    forth = createNode(250);
    third->next = forth;

    traversalLinkedList(first);
    return 0;
}