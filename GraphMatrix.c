#include <stdio.h>
#define SIZE 100

int main()
{
    int graph[SIZE][SIZE];

    int totalVertex;
    int i, j, source;

    printf("\nHow many vertices ?");
    scanf("%d", &totalVertex);

    for (i = 0; i < totalVertex; i++)
    {
        for (j = 0; j < totalVertex; j++)
        {
            printf("\n%d is connected with %d", i, j);
            scanf("%d", &graph[i][j]);//1 0
        }
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