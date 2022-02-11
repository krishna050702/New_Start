#include <stdio.h>
void main()
{

    int n, m, i, j, k, alloc[30][30], max[30][30], available[30];
    int f[20], ans[20], ind = 0, need[30][30];

    printf("\nEnter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter the number of Resources: ");
    scanf("%d", &m);

    printf("\nEnter the Values of Resources Allocated: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter value at position (%d%d) :", i + 1, j + 1);
            scanf("%d", &alloc[i][j]);
        }
    }

    printf("\nEnter the Values of Max Resources allocated: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter value at position (%d%d) :", i + 1, j + 1);
            scanf("%d", &max[i][j]);
        }
    }

    printf("\nEnter the values of Resources available: \n");
    for (j = 0; j < m; j++)
    {
        printf("Enter value of R(%d) :", j + 1);
        scanf("%d", &available[j]);
    }

    for (k = 0; k < n; k++)
    {
        f[k] = 0;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    int y = 0;

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
                int flag = 0;
                for (j = 0; j < m; j++)
                {
                    if (need[i][j] > available[j])
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                {
                    ans[ind++] = i;
                    for (y = 0; y < m; y++)
                    {
                        available[y] = available[y] + alloc[i][y];
                    }
                    f[i] = 1;
                }
            }
        }
    }

    printf("\nThe SAFE SEQUENCE is: \n");
    for (i = 0; i < n - 1; i++)
    {
        printf(" P%d ->", ans[i]);
    }
    printf(" P%d", ans[n - 1]);
}