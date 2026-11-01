/*
Date :- 01/11/2026

Problem statement:- 3Sum

Problem link:-
https://leetcode.com/problems/3sum/


insights:- First sort the array.

Use a for loop to fix the first number i, then use two pointers>>>>
left = i + 1
right = last index

If the sum of all three numbers is 0, store the triplet and move both pointers.
If the sum is less than 0, move left forward to increase the sum,
If the sum is greater than 0, move right backward to decrease the sum,


*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    while (left < right && nums[left] == nums[left - 1]) {
                    left++;
                    }

                    while (left < right && nums[right] == nums[right + 1]) {
                    right--;
                    }
                }
                else if (sum < 0) {
                    left++;
                }
                else {
                right--;
                } } } return ans;
    }
};
