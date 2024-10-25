#include <stdio.h>
#include <stdlib.h>

int totalVertex;
int totalEdges;
struct edges *e;
struct vertex *v;
int visitCount = 0;

struct edges
{
    int source;
    int dest;
};
struct vertex
{
    int data;
};

int checkForVisit(int d, int visited[])
{
    int i;
    for (i = 0; i < totalVertex; i++)
    {
        if (visited[i] == d)
        {
            return 0;
        }
    }
    return 1;
}

void dfs(int s, int visited[])
{
    int i;
    int d;
    for (i = 0; i < totalEdges*2; i++)
    {
        printf("\nChecking for source : %d index : %d",s,i);  
        if (s == e[i].source)
        {
            d = e[i].dest; // 3 9
            printf("\nChecking for destination : %d",d);  

            if (checkForVisit(d, visited) == 1)
            {
                printf("\n New Visit :  %d ", d);
                visitCount++;
                visited[visitCount] = d;
                s = d;//3 9
                dfs(s,visited);
            }
        }
    }
}

int main()
{
    int i, s, d;

    int visited[]={-1,-1,-1,-1};

    printf("\nHow many Vertex you have??");
    scanf("%d", &totalVertex);

    // v = calloc(totalVertex, sizeof(struct vertex));
    // for (i = 0; i < totalVertex; i++)
    // {
    //     printf("\nEnter vertex value:");
    //     scanf("%d", &v[i].data);
    // }

    printf("\nHow many Edges you want to add?");
    scanf("%d", &totalEdges); // 4

    e = calloc(totalEdges * 2, sizeof(struct edges)); // 8

    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\nEnter source and dest");
        scanf("%d%d", &s, &d); // 0-1  1-2  2-3  3-0
                               // 1-0  2-1  3-2  0-3
        e[i].source = s;       // 0 2 4 6
        e[i].dest = d;         // 0 2  4 6
        i++;                   // 1 3 5 7
        e[i].source = d;
        e[i].dest = s;
    }

    printf("\nEnter Initial Vertex? ");
    scanf("%d", &s); //  6

    printf(" %d", s);
    visited[visitCount] = s; // visited[]={6,3}

    dfs(s, visited);

    return 0;
}
