/*
Date :- 24/10/2026

Problem statement:- Divide Two Integers

Problem link:-
https://leetcode.com/problems/divide-two-integers/


insights:- We cannot use multiplication, division or modulo.

Convert both numbers to long long and make them positive to avoid integer overflow.

Keep subtracting the largest possible doubled divisor from the dividend. Each time, add the corresponding power of 2 to the answer.

Finally, check the signs and return the quotient. Handle the INT_MIN and INT_MAX overflow case separately.

*/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);

        long long ans = 0;

        while (a >= b) {
        long long temp = b;
        long long count = 1;

      while (a >= (temp << 1)) {
                temp = temp << 1;
                count = count << 1;
            }

        a = a - temp;
        ans = ans + count;
        }

        if ((dividend < 0) != (divisor < 0)) {
            ans = -ans;
        }


      

        return ans;
    
    
    
    }
};
