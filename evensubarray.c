#include <stdio.h>
#define _ printf
#define __ scanf

int evenarr[100];
int evensubarray(int *arr, int size);

int main()
{
	int array[100];
	int size ;

	_("Enter the size of array");
	__("%d", &size);
	for(int i=0;i<size;i++)
		__("%d", &array[i]);

	int result = evensubarray(array, size);

	_("\n The original array is : ");
	for(int i=0; i<size; i++)
	{
		_("%d ",array[i]); 
	}
	_("\n The even subarray is  : ");
	for(int j=0;j<result;j++)
	{
		_("%d ", evenarr[j]);
	}

}

int evensubarray(int *arr, int size)
{
	int i;
	//int evenarr[100];
        int j=0;
	for(i=0;i<size;i++)
	{
		if(*(arr+i) % 2 == 0)
		{
			evenarr[j] = *(arr+i);
			j+=1;
		}		
	}
	return j;
}
