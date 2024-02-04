#include <stdio.h>
#include "my_mat.h"


void getMatrixValues(int matrix[10][10]) {
    for (int i = 0; i < 10; ++i){
        for (int j = 0; j < 10; ++j){
            scanf("%d", &matrix[i][j]);
        }
    }
}


// Function to check if there is a route between two vertices
int hasRoute(int matrix[10][10], int start, int end) {
   return  matrix[start][end] != 0;
}

 int min(int i,int j){
        if(i<=j){
        return i;
        }
        else
        {
            return j;
        }
    }

    void waze(int matrix[10][10],int start,int end){
    if(hasRoute(matrix,start,end)==0){
        printf("%d\n",-1);
    }else{
      for (int k = 1; k < 10; k++) {
      for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
          matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
      }
      }
      }
       printf("%d\n",matrix[start][end]);
       
        
    }
}

