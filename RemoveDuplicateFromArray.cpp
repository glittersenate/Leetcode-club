/*
Date :- 27/10/2026

Problem statement:- Remove Duplicates from Sorted Array

Problem link:-
https://leetcode.com/problems/remove-duplicates-from-sorted-array/


insights:- Since the array is already sorted, all duplicate elements will be next to each other.

Use two pointers:
i = keeps track of the position where the next unique element should be placed.
j = moves through the entire array.

Compare nums[j] with nums[i]. If they are different, move i forward and put nums[j] at that position.

Finally, return i + 1 because indexing starts from 0.


*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int i = 0;

        for (int j = 1; j < nums.size(); j++) {
          if (nums[j] != nums[i]) {
          i++;
          nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
