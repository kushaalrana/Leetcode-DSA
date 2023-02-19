#include <bits/stdc++.h>
using namespace std;
// Que. Given a number N. Count the number of digits in N which evenly divides N.
// https://practice.geeksforgeeks.org/problems/count-digits5716/1
class Solution{
public:
    int evenlyDivides(int n)
    {
        int counter = 0, num = n, lastDigit;
        while (n > 0)
        {
            // cout<<counter<<" "<<n<<" "<<n%(n%10)<<endl;
            lastDigit = n % 10;
            if (lastDigit != 0 && num % lastDigit == 0) //for checking divide by zero condition.
            {
                counter++;
            }
            n = n / 10;
        }
        return counter;
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
        cout << ob.evenlyDivides(n) << endl;
    }
    return 0;
}
