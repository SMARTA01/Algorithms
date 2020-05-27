#include <bits/stdc++.h>

using namespace std;
int fact(int n);

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int main()
{
    int  t,n,r ;
    cout<<"\nEnter test cases: ";
    cin>>t;
    while(t--)
    {
        cout<<"\nEnter n and r : ";
        cin>>n>>r;
        cout << "\nnCr= "<<nCr(n, r)<<endl;
    }

    return 0;
}
