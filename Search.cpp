/*
Date :- 29/10/2026

Problem statement:- Search in Rotated Sorted Array

Problem link:-
https://leetcode.com/problems/search-in-rotated-sorted-array/


insights:- I Used binary search because.

Even after rotation, only the one half will be sorted i think .

Find the middle element and check which half is sorted.

If the left half is sorted, check whether the target lies between nums[left] and nums[mid]. If yes, search left side 
otherwise search right side.

If the right half is sorted, check whether the target lies between nums[mid] and nums[right]. If yes, search right side-- otherwise search left side.

Repeat until the target is found or left becomes greater than right.

*/

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[left] <= nums[mid]) {

                if (target >= nums[left] && target < nums[mid]) {
                right = mid - 1;
                }
                else {
                  left = mid + 1;
                } }
            else {

                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                right = mid - 1;
                }  }  }

        return -1;
    }
};
