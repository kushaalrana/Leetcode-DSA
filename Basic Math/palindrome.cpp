class Solution {
public:
    bool isPalindrome(int x) {
        long long revNum=0, n=x;
        if(x<0) return false;
        while(x!=0){
            int lastDigit = x%10;
            revNum= revNum*10+ lastDigit;
            x/=10;
        }
        return revNum==n;
    }
};

https://leetcode.com/problems/palindrome-number/