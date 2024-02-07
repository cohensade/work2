#include <stdio.h>
#include "my_mat.h"
#define SIZE_ITEMS 5
#define CAPACITY 20

int main(){
    
     char items[SIZE_ITEMS];
    int weights[SIZE_ITEMS];
    int values[SIZE_ITEMS];
    int selected[SIZE_ITEMS] = {0,0,0,0,0};
    char result[SIZE_ITEMS];
    
    
     for (int i = 0; i < SIZE_ITEMS; i++)
        {
           scanf(" %c", &items[i]);
            scanf(" %d", &values[i]);
            scanf(" %d", &weights[i]);
          
        }
        //  for (int i = 0; i < SIZE_ITEMS; i++)
        // {
          
           
        // }
        //  for (int i = 0; i < SIZE_ITEMS; i++)
        // {
        //    scanf(" %d", &weights[i]);
        
        // }
    
    int ans = knapSack(weights,values,selected);
    printf("Maximum profit: %d\n",ans);
    int count=0;
   // for (int i = SIZE_ITEMS; i >=0 ; i--) {
    for (int i = 0; i <=SIZE_ITEMS ; i++) {
        if (selected[i] ==1){
            result[count] = items[i];
            count++;
        }
        }
      
    printf("Items that give the maximum profit: [");
   
    for (int i = 0; i < count-1; i++) {
            printf("%c, ", result[i]);
            
      
        }
        printf("%c", result[count-1]);
        
    
    printf("]\n");


    return 0;
}


   






