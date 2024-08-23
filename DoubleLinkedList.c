#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
}*head = NULL,*last= NULL;

void addNode(int num)
{

    struct node *tmp = NULL;

    if (head == NULL)
    {

        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        head->prev = NULL; 
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        tmp->prev = last; 
        last = tmp;
    }
}

void display()
{
    struct node *i;
    for (i = head; i != NULL; i = i->next)
    {
        printf(" %d", i->data);
    }
}

int main()
{

    // sum()
    // max()
    // search(10); found
    // search(100); not found
    int choice, source;
    int num;
    while (101)
    {
        printf("\n1 For Add Node + END");
        printf("\n2 For Add Node + BEG");
        printf("\n3 For Add Node + ANY");

        printf("\n4 For Delete Node - END");
        printf("\n5 For Delete Node - BEG");
        printf("\n6 For Delete Node - ANY");

        printf("\n7 For Display LinkedList");
        printf("\n8 For Display LinkedList - Reverse ");

        printf("\n0 EXIT\n");

        printf("\nEnter Your Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter number");
            scanf("%d", &num);
            addNode(num);
            break;
        case 7:
            display();
            break;
        case 0:
            exit(0);
        case 2:
            printf("\nEnter number");
            scanf("%d", &num);
            addNodeeBeg(num);
        case 4:
            deleteNodeLast();
            break;
        case 5:
            deleteNodeBeg();
            break;
        case 3:
            printf("\nEnter the source : ");
            scanf("%d", &source);
            printf("\nEnter number : ");
            scanf("%d", &num);
            addNodeAny(source, num);
            break;
        case 6:
            printf("\nEnter the source : ");
            scanf("%d", &source);
            deleteAny(source);
            break;
        default:
            break;
        }
    }
    return 0;
}