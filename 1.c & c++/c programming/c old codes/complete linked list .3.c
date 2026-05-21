#include<stdio.h>
#include<stdlib.h>
struct node{ int data;
            struct node *next;};
            
  void linkedlistTraversal(struct node*ptr)
  {  while(ptr !=NULL)
        {printf("%d\n",ptr->data);
         ptr=ptr->next;
         }
  }
    
int main()
{struct node *head;
struct node *second;
struct node *third;
struct node *fourth;

head=malloc(sizeof(struct node));
second=malloc(sizeof(struct node));
third=malloc(sizeof(struct node));
fourth=malloc(sizeof(struct node));


head->data = 7;
head->next = second;

second->data = 78;
second->next = third;

third->data = 88;
third->next = fourth;

fourth->data =97;
fourth->next = NULL;
linkedlistTraversal(head);
  return 0;
}
  