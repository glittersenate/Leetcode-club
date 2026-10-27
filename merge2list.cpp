/*
Date :- 23/10/2026
Problem statement:- Merge 2 lists
 Problem link:-
https://leetcode.com/problems/merge-two-sorted-lists/description/


insights:- Compare the 1st available number in the sorted array, take the smallest one and repeat using the for loop


*/
class Solution {
public:
    ListNode* mergeStuff(ListNode* l1, ListNode* l2) {
        ListNode extra(0);
        ListNode* current = &extra;

        while (l1 != nullptr && l2 != nullptr) {
        if (l1->val <= l2->val) {
          current->next = l1;
          l1 = l1->next;
        } else {
          current->next = l2;
            l2 = l2->next;
            }

        current = current->next;
        }

        if (l1 != nullptr) {
      current->next = l1;
        } else {
       current->next = l2;
        }

        return extra.next;
    }
};

