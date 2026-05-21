#include<stdio.h>
#include<stdlib.h>

 struct Node{
    int data;
    struct Node* next;
};

struct Node *createNode(int data) {
     struct Node *newNode = ( struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    // Initially assigning the next pointer to NULL
    newNode->next = NULL;
    return newNode;
}
void traversalLinkedList(struct Node *ptr){
    if (ptr == NULL){ 
        printf("\nList is empty\n");
    } else{
        while (ptr != NULL){
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
}

int main(){
    struct Node *first = createNode(50);
    struct Node *second = createNode(100);
    first->next = second;
    struct Node *third = createNode(150);

    second->next = third;
    struct Node *forth = createNode(250);
    third ->next = forth;

    traversalLinkedList(first);
return 0;
} 