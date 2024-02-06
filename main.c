#include "my_mat.h"
#include <stdio.h>

int main()
{
    int i, j;
    int matrix[10][10];
    char ot ='A';
    while (ot != 'D')
    {
        scanf(" %c", &ot);
        switch (ot)
        {
        case 'A':
        {
            getMatrixValues(matrix);
            break;
        }

        case 'B':
        {
            scanf("%d%d", &i, &j);
            if (hasRoute(matrix, i, j) == 0)
            {
                printf("False\n");
            }
            else
            {
                printf("True\n");
            }
            break;
        }

        case 'C':
{
    scanf("%d%d", &i, &j);
    int distance = waze(matrix, i, j);
    if (distance == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", distance);
    }
    break;
}


        case 'D':
            break;
        }
    }

    return 0;
}