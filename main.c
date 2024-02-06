#include "my_mat.h"
#include <stdio.h>
#define SIZE 10

int main()
{
    int i, j;
    int matrix[SIZE][SIZE];
    char ot ='v'; //init the char of cases
    while (ot != 'D' || ot != EOF)//if its not D or EOF countinue the prog   
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
            if (hasRoute(matrix, i, j) == 0)//if there is no way print false else true
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
    int distance = waze(matrix, i, j);//save the shortest path in int
    if (distance == 0)//if there is no path return 0 and print -1
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
        {
            break;
        }

case EOF:
{
        
        break;
}
        }
        
    }

    return 0;
}