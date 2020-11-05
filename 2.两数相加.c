/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

  int a = 0;
  int b = 0;
  int sum;
  int flag = 0;
  struct ListNode * head = (struct ListNode *)malloc(sizeof(struct ListNode));
  struct ListNode * tail = head;
  head->next = tail;
  tail->next = NULL;

  while((l1!=NULL) || (l2!=NULL))
  {
    a = (l1==NULL)?0:l1->val;
    b = (l2==NULL)?0:l2->val;
    sum = a+b+flag;
    flag = (sum/10);
    sum = sum%10;
    tail->next = malloc(sizeof(struct ListNode));
    tail->next->val = sum;
    tail->next->next = NULL;
    tail = tail->next;
    if (l1 != NULL) l1=l1->next;
    if (l2 != NULL) l2=l2->next;
  }

  if(flag)
  {
    tail->next = malloc(sizeof(struct ListNode));
    tail->next->val = flag;
    tail->next->next = NULL;
    tail = tail->next;
  }

  return head->next;
}
// @lc code=end