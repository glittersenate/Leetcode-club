/*
Date :- 31/10/2026

Problem statement:- Pointer to an Integer

Problem link:-
https://www.hackerrank.com/challenges/c-tutorial-pointer/problem


insights:- We get pointers to two integers a and b.
Use *a and *b to access their actual values.
Store their sum in *a and their absolute difference in *b.
Use abs() to make sure the difference is always positive.

*/

void update(int *a, int *b) {

    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;

}
