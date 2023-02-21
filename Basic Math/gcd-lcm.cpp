/** Author: Kushaal Rana  **/
#include <bits/stdc++.h>
#define int long long 
#define mod (int)1e9+7
#define endl "\n"
#define pb push_back
#define fr(i,n) for(int i=0;i<n;i++)
#define all(a) a, a + n
#define vll(v) v.begin(),v.end()
#define fast ios_base::sync_with_stdio(false),  cin.tie(0),cout.tie(0)
using namespace std;

int x8dir[]={-1,-1,0,1,1,1,0,-1};
int y8dir[]={0,1,1,1,0,-1,-1,-1};
int x4dir[]={-1,0,1,0};
int y4dir[]={0,1,0,-1};
int gcd(int a,int b)
{
    //Euclidean Algorithm
    while (a>0 && b>0)
    {
        if(a>b){
            a=a%b;
        } 
        else
        {
            b=b%a;
        }
    }
        if(a==0) return b;
        else return a;
}
int32_t main()
{
    fast;
     int t=1;
    //  cin>>t;
     while(t--)
    {
         cout<<gcd(20,5);
         cout<<endl;
    }
}