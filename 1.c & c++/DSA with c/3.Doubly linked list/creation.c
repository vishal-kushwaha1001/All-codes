#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *preptr;
    struct node *nextptr;
} Node;
Node *head;
Node *ennode;

void displayList()
{
    struct node *tmp;
    tmp = head;
    printf("Doubly linked  list are :");
    while (tmp != NULL)
    {
        printf("  %d -> ",  tmp->num);
        tmp = tmp->nextptr;
    }
    printf("NULL\n");
}

void displayLinkedlListreverse()
{
    struct node *tmp;
    tmp = ennode;
    printf("\n Doubly linked  list  in reverse order are :");
    while (tmp != NULL)
    {
        printf("  %d ->  ", tmp->num);
        tmp = tmp->preptr;
    }
    printf("head\n");
}
void creation(int n)
{
    int i, num;

    struct node *newNode, *ptr;
    head = (struct node *)malloc(sizeof(struct node));
    printf(" Input data for node 1 : ");
    scanf("%d", &num);
    head->num = num;
    head->preptr = NULL;
    head->nextptr = NULL;
    ptr = head;
    for (i = 2; i <= n; i++)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf(" Input data for node %d : ", i);
        scanf("%d", &num);
        newNode->num = num;
        newNode->preptr = ptr;
        newNode->nextptr = NULL;
        ptr->nextptr = newNode;
        ennode = newNode;
        ptr = ptr->nextptr;
    }
}

void insertNodeAtBeginning(int num)
{
    Node *newnode;
    newnode = (Node *)malloc(sizeof(Node));
    newnode->num = num;
    newnode->nextptr = head;
    newnode->preptr = NULL;
    head->preptr = newnode;
    head = newnode;
}

void insertNodeAtEnd(int num)
{
    Node *newnode;
    newnode = (Node *)malloc(sizeof(Node));
    newnode->num = num;
    newnode->nextptr = NULL;
    newnode->preptr = ennode;
    ennode->nextptr = newnode;
    ennode = newnode;
}
void insertNodeAtMiddle(int num, int pos)
{
    int i;
    Node *newnode, *ptr ;
    ptr = head;
    for(i = 2 ; i<=pos; i++){
        ptr = ptr ->nextptr;
    }
    newnode = (Node *)malloc(sizeof(Node));
    newnode->num = num;
    // newnode->nextptr =NULL;
    // newnode->preptr = NULL;
    newnode ->nextptr = ptr;
    newnode ->preptr = ptr->preptr;
    ptr->preptr->nextptr = newnode;
    ptr->preptr = newnode;


    // ptr->nextptr->preptr = newnode;
    // ptr->nextptr = newnode;
}
void middledelete(int pos ){
    Node *delptr = head;
     for(int i = 2 ; i<=pos; i++){
        delptr = delptr ->nextptr;
    }
    delptr ->preptr ->nextptr = delptr ->nextptr;
    delptr ->nextptr ->preptr = delptr ->preptr;
    delptr ->nextptr =NULL;
    delptr->preptr = NULL;
    free(delptr);

}
void DeleteFirstNode()
{
    struct node *temp;
    temp = head;
    head = head->nextptr;
    temp->nextptr = NULL;
    head ->preptr = NULL;
   
    printf("deletion successfull");
    free(temp);
}
void delEnd(){
    Node * delptr = ennode;
    ennode= ennode ->preptr;
    delptr ->preptr = NULL;
    ennode->nextptr = NULL;
    free(delptr);


}
int main()
{
    int n, num, possition;
    printf("\n Doubly Linked List: Create and display a doubly linked list:\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    creation(n);
    displayList();
    // displayLinkedlListreverse();
// insertion
    // printf("\n Input data for the first node : ");
    // scanf("%d", &num);
    // insertNodeAtBeginning(num);
    // displayList();
    // printf("\nInput data for the last node : ");
    // scanf("%d", &num);
    // insertNodeAtEnd(num);
    // displayList();
    // printf("Input data for the insertion : ");
    // scanf("%d", &num);
    // printf("\nInput  position of data for insertion : ");
    // scanf("%d", &possition);
    // insertNodeAtMiddle(num, possition);
    // displayList();
    // deletion
    printf("After deletion");
    // DeleteFirstNode();
    // delEnd();
    middledelete(3);
    displayList();
    return 0;
}
