#include <stdio.h>
#include <stdlib.h>

struct edges
{
    int source;
    int dest;
    int cost;
};

int main()
{

    int totalEdges;
    int i, s, d;

    struct edges *e;

    printf("\nHow many Edges you want to add?");
    scanf("%d", &totalEdges); // 4

    e = calloc(totalEdges * 2, sizeof(struct edges)); // 8

    for (i = 0; i < totalEdges * 2; i++)
    {
        printf("\nEnter source and dest");
        scanf("%d%d", &s, &d); // 0-1  1-2  2-3  3-0
                               // 1-0  2-1  3-2  0-3
        e[i].source = s; // 0 2 4 6
        e[i].dest = d;   // 0 2  4 6
        i++;             // 1 3 5 7
        e[i].source = d;
        e[i].dest = s;
    }


    printf("\nEnter Vertex? ");
    scanf("%d", &s); // 1

    printf("\n%d connected with : ", s);

    for (i= 0; i < totalEdges * 2 ; i++)
    {
        if (e[i].source == s)
        {
            printf(" %d", e[i].dest);
        }
    }

    return 0;
}