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
