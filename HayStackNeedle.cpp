/*
Date :- 30/10/2026

Problem statement:- Find the Index of the First Occurrence in a String

Problem link:-
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/


insights:- We need to find whether needle exists inside haystack.
Use a for loop to check every possible starting position in haystack.

At each position, compare the next needle.length() characters with needle using substr().
If both strings match, return that starting index.

If no match is found after checking all positions, return -1.

*/

class Solution {
public:
    int strStr(string haystack, string needle) {

        for (int i = 0; i <= haystack.length() - needle.length(); i++) {
         if (haystack.substr(i, needle.length()) == needle) {
               return i;
            } }

        return -1;
}
};
