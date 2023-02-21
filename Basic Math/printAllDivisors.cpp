#include <bits/stdc++.h>
using namespace std;
// https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
class Solution
{
public:
    long long sumOfDivisors(int n)
    {
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum += (n/i)*i;
            //Here when you do n/i it means How many times a number has come come in the N matalab if i=10 and I want to know how many times 10 comes in 100 how will I find I will do 100/10 OR if I want to know how many times 4 will come in 100 then I will do 100/4
            //And then Once you find how many times its occuring multiply with that number EX: in 4 2 is coming 2 times so 2 is coming 2 times means 2*2 = 4 this should be added to sum.
            }
        return sum;
        // Write Your Code here
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        Solution ob;
        cout << ob.sumOfDivisors(n) << endl;
    }
    return 0;
}

// Related Questions