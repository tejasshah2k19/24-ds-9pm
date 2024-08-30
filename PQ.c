#include <stdlib.h>
#include <stdio.h>

struct pq
{
    int data;
    struct pq *next;
    int priorty;
} *head = NULL, *last = NULL;

void enQueue(int data, int priority)
{
    struct pq *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct pq));
        head->data = data;
        head->priorty = priority;
        head->next = NULL;
        last = head;
    }else{
        tmp = malloc(sizeof(struct pq));
        tmp->data = data;
        tmp->priorty = priority;
        tmp->next = NULL;
        last->next  = tmp;
        last = tmp;
    }
}

void deQueue(){
    //findMax
    int max = head->priorty;
    struct pq *i;
    for(i=head;i!=NULL;i=i->next){
        if(i->priorty > max){
            max = i->priorty; 
        }
    }

    deleteAny(max);

}

int main()
{

    enQueue(10, 1);
}