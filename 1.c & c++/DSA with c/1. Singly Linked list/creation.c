#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

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
    struct Node *head, *second, *third;
    // allocate memory for node in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node ));
    second = (struct Node *)malloc(sizeof(struct Node ));
    third = (struct Node *)malloc(sizeof(struct Node ));
    // link first node
    head->data = 15;
    head->next = second;
    // link second node
    second->data = 20;
    second->next = third;
    // link third node ;
    third->data = 25;
    third->next = NULL;
    traversalLinkedList(head);
    return 0;
}
