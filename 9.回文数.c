/*
 * @lc app=leetcode.cn id=9 lang=c
 *
 * [9] 回文数
 */

// @lc code=start


bool isPalindrome(int x){

  int reservedNumber = 0;

  if (x<0 || (x%10==0 && x!=0))
  {
    return false;
  }
  
  // 这里只翻转一半，就可以判断是否为回文数了

  while (x > reservedNumber)
  {
    reservedNumber = reservedNumber*10 + x%10;
    x /=10;
  }
  
  return (x==reservedNumber || x==reservedNumber/10);

}
// @lc code=end

