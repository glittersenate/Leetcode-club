/*
Date :- 28/10/2026

Problem statement:- Remove Element

Problem link:-
https://leetcode.com/problems/remove-element/


insights:- Traverse the array using a for loop.

Use one variable k to keep track of the position where the next valid element should be placed.

If nums[i] is not equal to val, copy it to nums[k] and increase k.

If nums[i] is equal to val, simply skip it.

Finally, return k because it represents the number of elements left after removing val.


*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
            }
        } return k;
    }
};
