/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x){
  
  int size;
  int i = 0;
  int A[15] = {0};

  if (x < 0 || (x%10==0 && x!=0))
  {
    return false;
  }else if (x == 0)
  {
    return true;
  }
  else
  {
    while(x)
    {
      A[i] = x%10;
      x = x/10;
      i++;
    }
  }
  size = i - 1;

  for ( i = 0; i <= size/2; i++)
  {
    if (A[i] != A[size-i]) return false;
  }
    
  return true;

}
// @lc code=end

