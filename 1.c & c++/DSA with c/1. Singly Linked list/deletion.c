#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head;
void createNodeList(int n);
void DeletionNodeAtFront();
void DeletionNodeAtMiddle(int index);
void DeletionNodeAtLast();
void deleteAtKey(int key );
void displayList();

int main(){
    int n, num, index;
    printf("Singly linked list:Deletion a node at,front ,middle and end.");
    printf("\n\nEnter the number of nodes:");
    scanf("%d", &n);
    createNodeList(n);
    printf("Print the list after given value: ");
    displayList(head);

    // detete at front
    DeletionNodeAtFront();
    printf("\n\nPrint the list after deletion a node at front :");
    displayList(head);

    // delete between 
    printf("\n\nEnter the position to delete new node : ");
    scanf("%d", &index);
    DeletionNodeAtMiddle(index );
    printf("\nPrint the list after the deletion at middle: ");
    displayList(head);

    // delete last node
    DeletionNodeAtLast();
    printf("\n\nPrint the list after deletion a node at end:");
    displayList(head);

     // detete at key
     int key;
     printf("\n\nEnter the key:");
     scanf("%d", &key);
     deleteAtKey(key);
     printf("\n\nPrint the list after deletion of node :");
     displayList(head);
 
    
    return 0;
}
void createNodeList(int n)
{
    Node *newNode, *ptr;
    int num, i;
    // initialising head node
    head = (Node *)malloc(sizeof(Node));
    printf("\nEnter data of node 1 is :");
    scanf("%d", &num);
    head->data = num;
    head->next = NULL;
    ptr = head;
    // using loop for create other nodes
    for (i = 2; i <= n; i++)
    {
        newNode = (Node *)malloc(sizeof(Node));
        printf("Enter the data of %d is :", i);
        scanf("%d", &num);
        newNode->data = num;
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }
}
void displayList(Node *ptr){
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

// function for delate node at  front
void DeletionNodeAtFront(){
    struct node *delPtr;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    delPtr = head;
    head = head->next;
    free(delPtr);
}

// function for delete node between the linked list
void DeletionNodeAtMiddle(int index){
    int i;
    struct node *delPtr, *prePtr;
    prePtr = head;
    delPtr= head->next;
    for (i = 2; i <index  ; i++) {  
         prePtr = prePtr ->next;
         delPtr = delPtr ->next;
    }
    prePtr ->next = delPtr->next;
    free(delPtr);
   
}

// function for delete node at the end
void DeletionNodeAtLast(){
    Node *delPtr, *prePtr;
    prePtr = head;
    delPtr = head ->next;
    while (delPtr->next != NULL){
        prePtr = prePtr ->next;
        delPtr = delPtr ->next;
    }
    prePtr ->next = NULL;
    free(delPtr);
}

// function for delete node at the a given data
void deleteAtKey(int key ){
    Node *delPtr, *prePtr;
    prePtr = head;
    delPtr = head ->next;
    while (delPtr->data != key){
        prePtr = prePtr ->next;
        delPtr = delPtr ->next;
    }
    prePtr->next = delPtr ->next;
    free(delPtr);
}
