#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL, *last = NULL;

void addNode(int num)
{

    struct node *tmp = NULL;

    if (head == NULL)
    {

        head = malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void addNodeeBeg(int num)
{

    struct node *tmp = NULL;

    if (head == NULL)
    {
        addNode(num);
    }
    else
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = head;
        head = tmp;
    }
}

void addNodeAny(int source, int num)
{
    // source: 30
    // num : 35
    struct node *p;
    struct node *tmp;

    for (p = head; p != NULL; p = p->next)
    {
        if (p->data == source)
        {
            break;
        }
    }
    if (p != NULL)
    {
        tmp = malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = p->next;
        p->next = tmp;
    }
    else
    {
        printf("\nInvalid Source");
    }
}
void deleteNodeLast()
{
    struct node *p;

    for (p = head; p->next != last; p = p->next)
        ;

    p->next = NULL;
    free(last);
    last = p;
}

void deleteNodeBeg()
{
    struct node *p;
    p = head;
    head = head->next;
    free(p);
}

void deleteAny(int key)
{

    struct node *p;
    struct node *q;
    for (p = head; p != NULL; p = p->next)
    {
        if (p->next->data == key)
        {
            break;
        }
    }
    if (p == NULL)
    {
        printf("\nInvalid Source");
    }
    else if (p == head)
    {
        // beg
        deleteNodeBeg();
    }
    else if (p == last)
    {
        deleteNodeLast();
    }
    else
    {
        // delete any
        q = p->next;
        p->next = q->next;
        free(q);
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

void shift(){
    struct node *p,*q;
    int tmp;
    p=head;
   

    while(p!=NULL){
        if(p->next == NULL){
            break;
        }
        q = p->next;
        tmp = p->data; 
        p->data = q->data;
        q->data  = tmp; 
        p=q->next; 
    }
}