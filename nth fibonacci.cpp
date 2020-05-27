#include <bits/stdc++.h>
using namespace std;
double fib(int n)
{
    double r= (1/sqrt(5))*((pow((1+sqrt(5)),n)- pow((1-sqrt(5)),n))/pow(2,n));
    return r;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fib(n)<<"\n";
    }
}

