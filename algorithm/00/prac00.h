#ifndef _ALGO_PRAC00_H_
#define _ALGO_PRAC00_H_
int min(int x, int y);
int max(int x, int y);
int tripleMax(int x, int y, int z);
int max_arr(int arr[], int arr_len);
void swap(int* a, int* b);
void swap_arr(int arr[], int a, int b);
void right_rotate(int arr[], int s, int e);
void left_rotate(int arr[], int s, int e);
void times_rotate(int arr[], int k, int length);
const char* QueueArray(int arr[], int len, int* head, int* tail, int inNum);
const char* DeQueueArray(int arr[], int len, int* head, int* tail);
#endif


