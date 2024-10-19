#include <stdio.h>
#define SIZE 100

int main()
{
    int graph[SIZE][SIZE];

    int totalVertex, totalEdges;
    int i, j, source, dest;

    printf("\nHow many vertices ?");
    scanf("%d", &totalVertex);

    printf("\nHow many Edges you want to add?");
    scanf("%d", &totalEdges);

    for (i = 1; i <= totalEdges; i++)
    {
        printf("\nEnter Source : Destination ");
        scanf("%d%d", &source, &dest);//0,1 
        graph[source][dest] = 1;//0,1
        graph[dest][source] = 1;//1,0
    }

    printf("\nEnter Vertex? ");
    scanf("%d", &source); // 1

    printf("\n%d connected with : ", source);

    for (j = 0; j < totalVertex; j++)
    {
        if (graph[source][j] == 1)
        {
            printf(" %d", j);
        }
    }

    return 0;
}