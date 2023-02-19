#include <iostream>
using namespace std;
void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void printPattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
void printPattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        { // find the relationship between n and i do some trial and error and derive the formula
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // whenever there is a triangle means you have spaces starts and space so think 3 loops and find relaitionship between those 3 loop indexes
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + i + 1; k++)
        { // here we have 2*i
            cout << "*";
        }
        for (int j = 0; j < n - i; j++)
        { // here we have relation between n and i
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (n * 2) - ((i * 2) + 1); k++)
        {
            cout << "*";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern9(int n)
{
    printPattern7(n);
    printPattern8(n);
}
void printPattern10(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int star = i;
        if (i >= n)
        {
            star = 2 * n - i - 2;
        }
        for (int j = 0; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Another Approache
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<n;i++){
    // for(int j=0;j<n-i-1;j++)
    // {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
}
void printPattern11(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
            //     if(j%2==0)
            //     {
            //     cout<<start<<" ";
            //     }
            //     else{
            //         if(start==1){
            //             cout<<"0 ";
            //         }
            //         else{
            //             cout<<"1 ";
            //         }
            //     }
            // }
        }
        cout << endl;
    }
}
void printPattern12(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        spaces -= 2;
    }
    //     for(int i=1; i<=n; i++)
    //     {
    //         //for left numbers
    //         for(int j=1; j<=i; j++){
    //             cout<<j<<" ";
    //         }
    //         //for stars
    //         for(int j=1;j<=2*n-2*i;j++){
    //             cout<<" "<<" ";
    //         }
    //         // for numbers
    //         for(int j=i;j>=1;j--){
    //             if(j!=1){
    //             cout<<j<<" ";
    //             }
    //             else{
    //                 cout<<j;
    //             }
    //         }
    //         cout<<endl;
    //     }
    // Another Approach
}
void printPattern13(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}
void printPattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char c = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int j = 0; j <= 2 * i; j++)
        {
            cout << c;
            if (j < breakPoint)
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        { // here we have relation between n and i
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Another Approach
        /*
        for(char ch='E'-i; ch<='E';c++){
            cout<<c;
        }
        */
        char c = 'A' + n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << c++;
        }
        cout << endl;
    }
}
void printPattern19(int n)
{
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // star
        for (int j = 0; j <=i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j <2*n-2*i-2; j++) // as it is 0 based indexing so -2
        {
            cout << " ";
        }
        // star
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern20(int n){
    int stars, space=2*n-2;
    for(int i=1;i<2*n;i++){
     stars=i;
    if(i>n){
        stars=2*n-i;
    }
    //star
        for(int j=1;j<stars;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

    //star
        for(int j=1;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n){
            space-=2;
        }
        else{
            space+=2;
        }
    }
}
void printPattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void printPattern22(int n){
for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        int top=i;
        int left=j;
        int right=(2*n-2)-j;
        int down=(2*n-2)-i;
        cout<<(n- min(min(top,down), min(left,right)));
    }
    cout<<endl;
}
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        printPattern22(n);
    }
}