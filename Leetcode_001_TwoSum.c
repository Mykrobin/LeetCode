// Leetcode_001_TwoSum

# include <stdio.h>
# include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(void)
{
	void* _ = malloc(233);
	int* sum = NULL;
	int nums[] = {2,7,11,15};
	int target = 9;
	int * returnSize = malloc(sizeof(int));
    sum = twoSum(nums, 4, target, returnSize);
	
	printf("%d %d\n", *(sum), *(sum + 1));
	
	return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
	int i = 0;
	int j = 0;
    if (nums == NULL)   return NULL;

	int* _ = (int*)malloc(sizeof(int)*2);
    //int *final = (int*)malloc(sizeof(int)*2);
    *returnSize = 2;

    for (i = 0; i<numsSize; i++)
    {
        for (j = i+1; j<numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                _[0] = i;
                _[1] = j;
                return _;
            }
        }
    }

    return _;
}
