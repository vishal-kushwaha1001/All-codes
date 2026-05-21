#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;

Node *head;
void createNodeList(int n){  
    Node *newNode ,*ptr;
    int num, i;
    // initialising head node 
    head = ( Node *)malloc(sizeof( Node));
    printf("\nEnter data of node 1 is :");
    scanf("%d", &num);
    head->data = num;
    head->next = NULL;
    ptr = head;
    // using loop for create other nodes
    for (i = 2; i <= n; i++)
    {
        newNode = ( Node *)malloc(sizeof( Node));
        printf("Enter the data of %d is :", i);
        scanf("%d", &num);
        newNode->data = num;
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }
}
// function of traverse linked list
void traversalLinkedList(Node *ptr){
    if (ptr == NULL){
        printf("\nList is empty\n");
    }
    else{
        while (ptr != NULL){
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
}
int main(){
    int n;
    
    printf("\n\nEnter the number of nodes:");
    scanf("%d", &n);
    // calling function for create nodes
    createNodeList(n);
    printf("\n linkedList are created and :");
    printf("\n LinkedList are:");
    // calling function for print node
    traversalLinkedList(head);
    return 0;
}