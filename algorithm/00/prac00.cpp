#include "prac00.h"

int min(int x, int y)
{
	if(x < y) return x;
	return y;
}

int max(int x, int y)
{
	if(x > y) return x;
	return y;
}

int tripleMax(int x, int y, int z)
{
	if(x > y && x > z) return x;
	else if(y > x && y > z) return y;
	return z;
}

int max_arr(int arr[], int arr_len)
{
	int max = 0;
	for(int i = 0; i < arr_len; i++)
	{
		if(max < arr[i]) max = arr[i]; 
	}
	return max;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
