#include <stdio.h>

#define _ printf 
#define input scanf
int main()
{
	int array[100], maximum, size, c, location =1;

	_("\n Enter no of elements in array:");
	input("%d", &size);

	//1. Input array
	for(int i=0;i<size;i++)
		input("%d", &array[i]);

	//2.Find largest
	maximum = 0;

	for(int i=0;i<size;i++)
	{
		if(array[i] > maximum)
		{
			maximum = array[i];
			location = i+1;
		}
	}
	_("Largest element %d is found at : %d", maximum, location);

}

