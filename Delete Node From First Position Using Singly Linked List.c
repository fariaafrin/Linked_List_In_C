#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL,*newnode, *temp ;
int i,n ;
void create_node(void)
{
    for (i=1; i <=5; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter node %d:- ", i);
        scanf(" %d", &newnode -> data );
        newnode -> next= NULL;

        if (head==0)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp -> next = newnode;
            temp= newnode;

        }
    }
}


void display(void)
{
    temp= head;
    // printf("all nodes:");
    while (temp !=0)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }
}


void del_first(void)
{

    temp=head;
    head=head->next;

    free(temp);
    printf("\ndeleted node from 1st position:");
    display();
}

int main ()
{
    create_node();
    printf("all nodes:");
    display();
    del_first();
    return 0;
}



