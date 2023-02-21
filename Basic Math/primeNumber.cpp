/** Author: Kushaal Rana  **/
#include <bits/stdc++.h>
#define int long long
#define Kushaal
#define mod (int)1e9 + 7
#define endl "\n"
#define pb push_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define all(a) a, a + n
#define vll(v) v.begin(), v.end()
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;

int x8dir[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int y8dir[] = {0, 1, 1, 1, 0, -1, -1, -1};
int x4dir[] = {-1, 0, 1, 0};
int y4dir[] = {0, 1, 0, -1};
void solve(int n)
{
    int count = 0;
    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
        if (i != n / i)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime";
    }
}
int32_t main()
{
    // #ifndef Kushaal //if online judge is not defined
    //  freopen("input.txt","r",stdin); //r=read mode(reading from a file)
    //  freopen("output.txt","w", stdout);
    // #endif
    fast;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << endl;
    }
}