#include <stdio.h>
int main()
{

    int p, r;
    printf("\nEnter number of processes: ");
    scanf("%d", &p);

    printf("\nEnter the number of Resources: ");
    scanf("%d", &r);

    int allocR[p][r];
    printf("\nEnter the Values of Resources Allocated: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("Enter value at position P(%d)R(%d) :", i + 1, j + 1);
            scanf("%d", &allocR[i][j]);
        }
    }

    int max[p][r];
    printf("\nEnter the Values of Max Resources allocated: \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("Enter value at position P(%d)R(%d) :", i + 1, j + 1);
            scanf("%d", &max[i][j]);
        }
    }

    int avail[r];
    printf("\nEnter the values of Resources available: \n");
    for (int j = 0; j < r; j++)
    {
        printf("Enter value of R(%d) :", j + 1);
        scanf("%d", &avail[j]);
    }

    int f[p], ans[p], count = 0;
    for (int k = 0; k < p; k++)
    {
        f[k] = 0;
    }
    int needR[p][r];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < r; j++)
            needR[i][j] = max[i][j] - allocR[i][j];
    }
    int y = 0;
    for (int k = 0; k < 5; k++)
    {
        for (int i = 0; i < p; i++)
        {
            if (f[i] == 0)
            {

                int state = 0;
                for (int j = 0; j < r; j++)
                {
                    if (needR[i][j] > avail[j])
                    {
                        state = 1;
                        break;
                    }
                }

                if (state == 0)
                {
                    ans[count++] = i;
                    for (int y = 0; y < r; y++)
                        avail[y] += allocR[i][y];
                    f[i] = 1;
                }
            }
        }
    }

    int state = 1;

    for (int i = 0; i < p; i++)
    {
        if (f[i] == 0)
        {
            state = 0;
            printf("\n\nThe Given System is not safe\n\n");
            break;
        }
    }

    if (state == 1)
    {
        printf("\n\nThe SAFE Sequence for given input is\n");
        for (int i = 0; i < p - 1; i++)
            printf(" P%d ->", ans[i] + 1);
        printf(" P%d", ans[p-1]+1);
    }

    printf("\n\nProgram exited with E-45 Krishna Mundada\n\n");
    return (0);
}