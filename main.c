#include "my_mat.h"
#include <stdio.h>

int main()
{   
    int i,j;
    int matrix[10][10];
    char ot;
     while(ot != 'D'){
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
                if(hasRoute(matrix,i,j)){
                      printf("True\n");
   }
        else
                    printf("False\n");
                break;
            }

            case 'C':
            {
                scanf("%d%d", &i, &j);
                waze(matrix,i,j);
                break;
            }

            case 'D':
                break;
        }
    }

    
    return 0;
}
