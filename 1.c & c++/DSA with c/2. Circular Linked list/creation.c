#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *head;

void Listcreation(int n);
void displayList();
void insertNodeAtMiddle(int num, int index);
void deleteAtKey(int key );

int main()
{
    int n, num,  possition, key;
    
    printf("\n\n Circular Linked List : \n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    Listcreation(n);
    printf("list are :");
    displayList();

    // // insertion at the front
    printf(" Input data you want to insert at front : ");
    scanf("%d", &num);
    insertFront(num);
    printf(" After insertion  ");
    displayList();

    // insertion in the middle
    // printf(" Input data you want to insert in the middle  : ");
    // scanf("%d", &num);
    // printf("Enter the  possition of list is   : ");
    // scanf("%d", &possition);
    // insertNodeAtMiddle(num,possition);
    // printf(" After insertion ");
    // displayList();

    // printf(" Input data you want to delete in the list  : ");
    // scanf("%d", &key);
    // deleteAtKey(key);
    // delFront();
    printf(" After Deletion  ");
    displayList();





    return 0;
}
void Listcreation(int n)
{
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
    ptr->next = head;
}

void displayList()
{
    Node *ptr = head;
    printf("Circular linked list are : ");
    printf("%d -> ", ptr->data);
    ptr = ptr->next;
    while (ptr != head)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("head\n");
}

void insertNodeAtMiddle(int num, int possition){
    struct node *newNode, *ptr;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->data= num;
    newNode->next = NULL;
    ptr = head;
    for (int i = 2; i < possition ; i++){ 
        ptr = ptr->next;
       
    }
        newNode->next = ptr->next;
        ptr->next = newNode;
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
 void insertFront( int num){
    Node * temp = head;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode ->data = num;
    newNode ->next = head;
    temp = temp->next;
    while(temp->next != head){
        temp = temp ->next;

    }
    temp->next = newNode;
    head = newNode;

  
 }
 void delFront(){
    Node * temp = head;
    Node* delptr =head;
    temp = temp->next;
    while(temp->next != head){
        temp = temp ->next;

    }
    head = head->next;
    temp->next = head;

    printf("%d is deleted :",delptr->data);
    free(delptr);
 }

//  void delEnd(){
//     Node * temp = head;
//     Node* delptr;
//     temp = temp->next;
//     while(temp->next != head){
//         temp = temp ->next;

//     }

//     temp->next = head;

//     printf("%d is deleted :",delptr->data);
//     free(delptr);
//  }

