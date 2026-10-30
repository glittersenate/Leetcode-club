/*
Date :- 25/10/2026

Problem statement:- Merge Sorted Array

Problem link:-
https://leetcode.com/problems/merge-sorted-array/


insights:- Since both arrays are already sorted, start comparing elements from the end of both arrays.

Use 3 pointers:
i = last valid element of nums1
j = last element of nums2
k = last position of nums1

Place the larger element at position k and move the respective pointer backwards.

Continue until all elements of nums2 are placed. This avoids overwriting the existing elements of nums1.


*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
          nums1[k] = nums1[i];
          i--;
            } else {
          nums1[k] = nums2[j];
          j--;
            }

        k--;
        }
    }
};
