/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i, j;
    if (nums == NULL) return NULL;
    *returnSize = 2;
    int * tag = (int *)malloc(sizeof(int)*2); 
    for (i=0; i<numsSize; i++)
    {
      for (j = i+1; j<numsSize; j++)
      {
        if (nums[i] + nums[j] == target)
        {
            tag[0] = i;
            tag[1] = j;
            return tag;
        }
      }
      
    }
    return tag;
}
// @lc code=end

