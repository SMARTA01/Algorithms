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
void insertionSort(int a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

int main()
{
    input();
    insertionSort(a, n);
    display();

    return 0;
}

