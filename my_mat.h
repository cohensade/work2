#ifndef MY_MAT_H
#define MY_MAT_H
#define SIZE 10
#define SIZE_ITEMS 5

void getMatrixValues(int matrix[SIZE][SIZE]);
    
int waze(int matrix[SIZE][SIZE],int start,int end);
  
int hasRoute(int matrix[SIZE][SIZE], int start, int end);

int knapSack(int weights[SIZE_ITEMS],int values[SIZE_ITEMS], int selected_bool[SIZE_ITEMS]);

int max(int a, int b);



#endif