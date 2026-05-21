#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
} Node;

Node *head;

void createNodeList(int n);
void insertAtFront(int num);
void insertNodeAtMiddle(int num, int pos);

void NodeInsertatEnd(int num);
void displayList(Node *ptr);
int main()
{
    int n, num, index;
    // calling function for create node
    printf("Singly linked list:Insertion a node at,front ,middle and end.");
    printf("\n\nEnter the number of nodes:");
    scanf("%d", &n);
    createNodeList(n);
    printf("\nPrint the list after given value: ");
    displayList(head);

    // calling function for insert node at front
    printf("\n\nEnter the value of front node:  ");
    scanf("%d", &num);
    insertAtFront(num);
    printf("Print the list after insert of node at front: \t");
    displayList(head);

    // calling function for insert node in middle
    printf("\n\nEnter data to insert in the middle of the list : ");
    scanf("%d", &num);
    printf("Enter the position to insert new node : ");
    scanf("%d", &index);
    insertNodeAtMiddle(num, index);
    printf("Print the list after the insertion at middle: \t");
    displayList(head);

    // calling function for insert at the end
    printf("\n\nEnter value to insert at the end of the list : ");
    scanf("%d", &num);
    NodeInsertatEnd(num);
    printf("Print the list after insertion at end \t: ");
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
{ if (ptr == NULL){
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
// function for insert node at front
void insertAtFront(int num){
    struct node *newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = num;
    newNode->next = head;
    head = newNode;
}

// function for insert node betwwen linked list
void insertNodeAtMiddle(int num, int index){
    int i;
    struct node *newNode, *ptr;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data= num;
    newNode->next = NULL;
    ptr = head;
    for (i = 2; i < index ; i++){ // o base index
        ptr = ptr->next;
        if (ptr== NULL)
            break;
    }
    if (ptr != NULL){
        newNode->next = ptr->next;
        ptr->next = newNode;
    }
    else{
        printf(" Insertion is not possible at the given position.\n");
    }
}

// function for insert node at the end
void NodeInsertatEnd(int num)
{
    struct node *newNode, *ptr;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data= num;
    newNode->next = NULL;
    ptr = head;
    while (ptr->next != NULL)
    ptr = ptr->next;
    ptr->next = newNode;
}