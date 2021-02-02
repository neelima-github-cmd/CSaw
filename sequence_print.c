#include <stdio.h>
int main()
{
	//Define a 4x4 array matrix
	int seq_array[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

	printf("\nPrinting the original array: \n");

	for(int i=0;i<4;i++)
	{
	   for(int j=0;j<4;j++)
	   {
		   printf("%d ", seq_array[i][j]);
	   }
	}


	printf("\n Printing the array in zig zag: \n");

	for(int i=0;i<4;i++)
	{
		
		int flag = 0;
		if(i == 0) 
			flag = 0;
		else if(i == 1)
			flag = 1;
		else if(i == 2)
			flag = 0;
		else if(i == 3)
			flag = 1;
		else
			flag = 0;

		if(flag == 0)
		{
			for(int j=0;j<4;j++)
			{
				printf("%d ", seq_array[i][j]);

			}
			flag = 1;
		}

		else if(flag == 1)
		{
			for(int j=3;j>=0;j--)
			{
				printf("%d ",seq_array[i][j]);
			}
			flag = 0;
		}

		else
		{
			;
		}

	}
}
