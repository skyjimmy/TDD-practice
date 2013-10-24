#include "gtest/gtest.h"
#include "prac00.h"

TEST(minTest, ValueCompare)
{
	EXPECT_EQ(1, min(1, 2));
	EXPECT_EQ(2, min(3, 2));
}

TEST(maxTest, ValueCompare)
{
	EXPECT_EQ(2, max(2, 1));
	EXPECT_EQ(2, max(1, 2));
}

TEST(tripleMaxTest, ValueCompare)
{
	EXPECT_EQ(3, tripleMax(3,2,1));
	EXPECT_EQ(3, tripleMax(2,3,1));
	EXPECT_EQ(3, tripleMax(1,2,3));
}

TEST(max_arrTest, ValueCompare)
{
	int arr[] = {1,2,3};
	EXPECT_EQ(3, max_arr(arr, 3));
	int arr2[] = {1,2,3,4};
	EXPECT_EQ(4, max_arr(arr2, 4));
	int arr3[] = {4,5,2,3};
	EXPECT_EQ(5, max_arr(arr3, 5));
}

TEST(swapTest, changedValue)
{
	int a = 2, b = 3;
	swap(&a, &b);
	EXPECT_EQ(3, a);
	EXPECT_EQ(2, b);
}

TEST(swaparrTest, changeValue)
{
	int arr[] = {2,1,3,4,5};
	swap_arr(arr, 0, 1);
	EXPECT_EQ(1, arr[0]);
	EXPECT_EQ(2, arr[1]);
}

TEST(rightRotateTest, rightRotate1)
{
	int arr[] = { 1,2,3,4,5,6 };
	right_rotate(arr, 1, 3);
	EXPECT_EQ(4, arr[1]);
	EXPECT_EQ(2, arr[2]);
	EXPECT_EQ(3, arr[3]);
}

TEST(rightRotateTest, rightRotate2)
{
	int arr[] = { 1,2,3,4,5,6 };
	right_rotate(arr, 0, 3);
	EXPECT_EQ(4, arr[0]);
	EXPECT_EQ(1, arr[1]);
	EXPECT_EQ(2, arr[2]);
	EXPECT_EQ(3, arr[3]);
}

TEST(leftRotateTest, leftRotate1)
{
	int arr[] = { 1,2,3,4,5,6 };
	left_rotate(arr, 1, 3);
	EXPECT_EQ(3, arr[1]);
	EXPECT_EQ(4, arr[2]);
	EXPECT_EQ(2, arr[3]);
}

TEST(leftRotateTest, leftRotate2)
{
    int arr[] = { 1,2,3,4,5,6 };
	left_rotate(arr, 0, 3);
	EXPECT_EQ(2, arr[0]);
	EXPECT_EQ(3, arr[1]);
	EXPECT_EQ(4, arr[2]);
	EXPECT_EQ(1, arr[3]);
}

TEST(timesRotateTest, timeRotate)
{
	int arr[] = { 1,2,3,4,5,6,7 };
	times_rotate(arr, 1, 7);
	EXPECT_EQ(7, arr[0]);
	EXPECT_EQ(1, arr[1]);
	EXPECT_EQ(2, arr[2]); 
}

TEST(timRoatateTest, timeRotate2)
{
	int arr[] = { 1,2,3 };
	times_rotate(arr, 2, 3);
	EXPECT_EQ(2, arr[0]);
	EXPECT_EQ(3, arr[1]);
	EXPECT_EQ(1, arr[2]);
}

TEST(QueueArrayTest, isEmpty)
{
	int arr[8];
	int head = 0;
	int tail = -1;
	EXPECT_EQ(0, strcmp(DeQueueArray(arr, 8, &head, &tail), "queue empty!"));
	tail = 9;
	EXPECT_EQ(0, strcmp(QueueArray(arr, 8, &head, &tail, 1), "queue full!"));
	tail = -1;
	EXPECT_EQ(0, strcmp(QueueArray(arr, 8, &head, &tail, 1), "[1]"));
	EXPECT_EQ(0, tail);
	EXPECT_EQ(0, strcmp(DeQueueArray(arr, 8, &head, &tail), "1"));
	EXPECT_EQ(1, head); 
}
