#include <stdio.h>
#include "my_mat.h"
#define INF 99999

void getMatrixValues(int matrix[10][10])
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}


// Function to check if there is a route between two vertices
int hasRoute(int matrix[10][10], int start, int end)
{
    int distance = waze(matrix, start, end);

    if (distance == 0)
    {
      
        return 0;
    }
    else
    {
       
        return 1;
    }
}



   

// ...

int waze(int matrix[10][10], int start, int end)
{
    if (start==end){
        matrix[start][end]=0;
        return matrix[start][end];
    }
    else
    {
    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                // Skip if any of the vertices are unreachable
                if (matrix[i][k] == 0 || matrix[k][j] == 0)
                    continue;

                // Update the distance if the new path is shorter
                if (matrix[i][j] == 0 || (matrix[i][j] > (matrix[i][k] + matrix[k][j])))
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    
    
    return matrix[start][end];
    }
}





int min(int i,int j){
    if(i>=j){
        return j;
    }
    else
    {
        return i;
    }
}



