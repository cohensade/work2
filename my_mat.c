#include <stdio.h>
#include "my_mat.h"
#define SIZE 10

void getMatrixValues(int matrix[SIZE][SIZE])
{
    //get the values for the matrix from the user
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}


// Function to check if there is a route between two vertices
int hasRoute(int matrix[SIZE][SIZE], int start, int end)
{
    //if there is no way print false else true
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



   


//Function to return shortest path by value if there is no path return 0
int waze(int matrix[SIZE][SIZE], int start, int end)
{
    if (start==end){
        matrix[start][end]=0;
        return matrix[start][end];
    }
    else
    {
    for (int k = 0; k < SIZE; k++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
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










