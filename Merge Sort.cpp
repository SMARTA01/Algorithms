#include<iostream>
using namespace std;
int *a, n;

void input()
{
    cout<<"\nEnter the number of elements : ";
    cin>>n;
    a= new  int[n];
    cout<<"\nEnter the elements: ";
    for(int i =0; i<n; i++)
    {
        cin>>a[i];
    }

}

void display()
{
    cout<<"\nThe elements in the array are: ";
    for(int i =0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }

}

void merge(int a[], int l, int m, int r)
{
    int i, j, k, n1, n2;
    n1 = m - l + 1;
    n2 =  r - m;


    int la[n1];
    int ra[n2];

    //copying data to temp array
    for (i = 0; i < n1; i++)
        la[i] = a[l + i];
    for (j = 0; j < n2; j++)
        ra[j] = a[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    //merging back to original array
    while (i < n1 && j < n2)
    {
        if (la[i] <= ra[j])
        {
            a[k] = la[i];
            i++;
        }
        else
        {
            a[k] = ra[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        a[k] = la[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = ra[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {

        int m = l+(r-l)/2;

        mergesort(arr, l, m);
        mergesort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    input();
    mergesort(a,0,n-1);
    cout<<" \t \t SORT COMPLETE";
    display();

    return 0;
}
