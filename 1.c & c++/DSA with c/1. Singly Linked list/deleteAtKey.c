#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head;
void createNodeList(int n);
void displayList();
void deleteAtKey(int key);

int main()
{
    int n , key;
    printf("Singly linked list:Deletion a node at,front ,middle and end.");
    printf("\n\nEnter the number of nodes:");
    scanf("%d", &n);
    createNodeList(n);
    printf("Print the list after given value: ");
    displayList(head);

    // detete at key
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
    printf("\nEnter data of node 0 is :");
    scanf("%d", &num);
    head->data = num;
    head->next = NULL;
    ptr = head;
    // using loop for create other nodes
    for (i = 1; i < n; i++)
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
void displayList(Node *ptr)
{
    if (ptr == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
    }
}


void deleteAtKey(int key ){
    Node *delPtr, *prePtr;
    prePtr = head;
    delPtr = head ->next;
    while (delPtr->data != key)
    {
        prePtr = prePtr ->next;
        delPtr = delPtr ->next;
    }
    prePtr->next = delPtr ->next;
    free(delPtr);
}
