/*
 * @lc app=leetcode.cn id=7 lang=c
 *
 * [7] 整数反转
 */

// @lc code=start

int reverse(int x){
  long long result = 0;
  while(x)
  {
    result = x%10 + result*10;
    x /= 10;
    if (result > 2147483647 || result < -2147483648)
      return 0;
  }

  return (int)result==result?result:0;
}
// @lc code=end

