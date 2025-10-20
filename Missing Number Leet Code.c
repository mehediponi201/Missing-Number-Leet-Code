
/*
Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
*/

#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int missingNumber(int* nums, int numsSize)
{
    qsort(nums,numsSize,sizeof(int),compare);
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] != i)
        {
            return i;
        }
    }
    return numsSize;
}
int main()
{
    int arr[] = {3,0,1};
    //int arr[] = {9,6,4,2,3,5,7,0,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    //qsort(arr,len,sizeof(int),compare);

    int result = missingNumber(arr,len);
    printf("%d ",result);
}
