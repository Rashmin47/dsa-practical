#include <stdio.h>
#define MAX 10
#define INF 999

int main()
{
    int cost[MAX][MAX], dist[MAX], visited[MAX];
    int n, i, j, start, min, next;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = INF;
        }

    printf("Enter source vertex: ");
    scanf("%d", &start);

    for(i = 0; i < n; i++)
    {
        dist[i] = cost[start][i];
        visited[i] = 0;
    }

    dist[start] = 0;
    visited[start] = 1;

    for(i = 1; i < n; i++)
    {
        min = INF;

        for(j = 0; j < n; j++)
        {
            if(!visited[j] && dist[j] < min)
            {
                min = dist[j];
                next = j;
            }
        }

        visited[next] = 1;

        for(j = 0; j < n; j++)
        {
            if(!visited[j] && dist[next] + cost[next][j] < dist[j])
                dist[j] = dist[next] + cost[next][j];
        }
    }

    printf("Shortest distances:\n");
    for(i = 0; i < n; i++)
        printf("%d -> %d = %d\n", start, i, dist[i]);
                printf("\n---------------------------------------------------\n");
    printf("Name: Rashmin Sharma || Roll No.: 104 || Section: C\n");

    return 0;
}