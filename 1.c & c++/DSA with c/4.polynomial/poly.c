#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    float cofficent;
    int exponent;
    struct node *next;
} Node;

void createNodeList(int n, Node *head)
{
    Node *newNode, *ptr;
    float cof;
    int expo, i;
    // initialising head node
    head = (Node *)malloc(sizeof(Node));
    printf("\nEnter cofficent of node 1 is :");
    scanf("%f", &cof);
    printf("\nEnter exponent of node 1 is :");
    scanf("%d", &expo);
    head->cofficent = cof;
    head->exponent = expo;
    head->next = NULL;
    ptr = head;
    // using loop for create other nodes
    for (i = 2; i <= n; i++)
    {
        newNode = (Node *)malloc(sizeof(Node));
        printf("Enter cofficent of node %d is :", i);
        scanf("%f", &cof);
        printf("Enter exponent of node %d is :", i);
        scanf("%d", &expo);
        newNode->cofficent = cof;
        newNode->exponent = expo;
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }
}
// function of traverse linked list
void traversalLinkedList(Node *ptr)
{
    if (ptr == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("(%.1f*^%d ) + ", ptr->cofficent, ptr->exponent);
            ptr = ptr->next;
        }
        printf("NULL");
    }
}
int main()
{
    int n;
    Node *head;

    printf("\n\nEnter the number of nodes:");
    scanf("%d", &n);
    // calling function for create nodes
    createNodeList(n, head);
    printf("\n linkedList are created and :");
    printf("\n LinkedList are:");
    // calling function for print node
    traversalLinkedList(head);
    return 0;
}