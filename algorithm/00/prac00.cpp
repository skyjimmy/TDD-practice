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

void swap_arr(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp; 
}

void right_rotate(int arr[], int s, int e)
{
	int temp = arr[e];

	for(int i = e; i > s; i--)
	{
		arr[i] = arr[i-1];
	}

	arr[s] = temp; 
}

void left_rotate(int arr[], int s, int e)
{
	int temp = arr[s];

	for(int i = s; i < e; i++)
	{
		arr[i] = arr[i+1];
	}

	arr[e] = temp;

}
