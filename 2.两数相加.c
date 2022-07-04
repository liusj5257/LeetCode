/*
 * @lc app=leetcode.cn id=2 lang=c
 *
 * [2] 两数相加
 */

// @lc code=start

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
  typedef struct ListNode Node, *ListNode;
  int temp = 0;
  ListNode H, R;
  R = H;
  while (l1 || l2) {
    int val1 = l1 == NULL ? 0 : l1->val;
    int val2 = l2 == NULL ? 0 : l2->val;
    Node* L = (Node*)malloc(sizeof(Node));
    L->next = NULL;
    int asd = val1 + val2 + temp;
    int sum = asd > 9 ? asd % 10 : asd;
    temp = asd > 9 ? 1 : 0;
    L->val = sum;
    if (H == NULL) {
      H = L;
      R = L;
    } else {
      R->next = L;
      R = L;
    }
    if (l1 != NULL)  // l1不为空，链接到下一节点
      l1 = l1->next;
    if (l2 != NULL)  // l2不为空，链接到下一节点
      l2 = l2->next;
  }
  if (temp == 1) {
    Node* L = (Node*)malloc(sizeof(Node));
    L->next = NULL;
    L->val = 1;
    R->next = L;
  }
  return H;
}

// @lc code=end
