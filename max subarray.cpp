//MAX-SUBARRAY__Complexity: O(n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[20],n,k;
    cout<<"\nEnter no of items :";
    cin>>n;
    cout<<"\nEnter the items :";
    for( k=0; k<n; k++)
    {
        cin>>array[k];
    }
    int best = 0, sum = 0;
    for ( k = 0; k < n; k++)
    {
        sum = max(array[k],sum+array[k]);
        best = max(best,sum);
    }
    cout << best << "\n";
}


