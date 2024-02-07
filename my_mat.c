#include <stdio.h>
#include "my_mat.h"
#define SIZE 10
#define CAPACITY 20

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


int max(int a, int b) {
    if (a>=b)
    {
        return a;
    }
    else{
        return b;
    }
}
    
int knapSack(int weights[SIZE_ITEMS], int values[SIZE_ITEMS], int selected_bool[SIZE_ITEMS]) {
    int tavla[SIZE_ITEMS + 1][CAPACITY + 1];

    // init the table by dynamic program 
    for (int i = 0; i <= SIZE_ITEMS; i++) {
        for (int w = 0; w <= CAPACITY; w++) {
            if (i == 0 || w == 0) { //  no items or no capacity
                tavla[i][w] = 0;
            } else if (weights[i - 1] <= w) { // Item can be included in the knapsack
                tavla[i][w] = max(values[i - 1] + tavla[i - 1][w - weights[i - 1]], tavla[i - 1][w]);
            } else {
                // no place for item
                tavla[i][w] = tavla[i - 1][w];
            }
        }
    }

    // update selected items in the array
    int i = SIZE_ITEMS, w = CAPACITY;
    while (i > 0 && w > 0) {
        if (tavla[i][w] != tavla[i - 1][w]) {
            // item i - 1 is selected
            selected_bool[i - 1] = 1;
            w -= weights[i - 1];
        }
        i--;
    }

    

    // Return maximum value
    return tavla[SIZE_ITEMS][CAPACITY];
}




















