#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void array_fill(int arr[200][200],int row_m,int column_n,int value)
{
    int i;
    // printf("Row: %d Column: %d value= %d\n", row_m, column_n, value);
for(i=row_m;i<=column_n;i++)
  // *((arr+row_m)+i) = value;
  {
 // printf("Loop Row: %d Column: %d value= %d\n", row_m, column_n, value);
    
   arr[row_m][i] = value;
   arr[column_n][i] = value;
   arr[i][row_m]=value;
   arr[i][column_n] = value;
  }

}

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int start_odd = n*2 -1;
    int _array[200][200];
    int temp_n = n;
    
    int i = 0;
    int y = 0;
    int z = 0;

    for(i=0;i<start_odd;i++)
    {
        if(n==0) break;
        array_fill(_array, i, start_odd-i-1,  n);
       // printf("Value of n %d\n", n);
        
        n = n - 1;
    }
    
    for(y=0;y<start_odd;y++)
    {
        for(z=0;z<start_odd;z++)
        {
            printf("%d ",_array[y][z]);
        }
        printf("\n");
    }
    
    return 0;
}

