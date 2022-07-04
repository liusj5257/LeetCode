/*
 * @lc app=leetcode.cn id=4 lang=c
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size) {
  int size = nums2Size + nums1Size;
  double* merge = malloc(sizeof(double) * (nums1Size + nums2Size));
  double mid = size / 2.0;
  int n = nums1Size > nums2Size ? nums1Size : nums2Size;  //
  int m = n == nums1Size ? nums2Size : nums1Size;
  int i = 0, j = 0;
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      if (n == nums1Size) {
        if (nums2[i] > nums1[j])
          merge[j] = nums1[j];
        else
          merge[j] = nums2[i];
      }
    }
  }
}
// @lc code=end
