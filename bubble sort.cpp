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
void bubblesort(int a[], int n)
{
    int t;
    for(int i =0; i<n; i++)
    {
        for(int j =0; j<n-i-1; j++)
        {
            if(a[j]> a[j+1])
            {
                t= a[j];
                a[j]= a[j+1];
                a[j+1] = t;
            }


        }
    }
    cout<<"\n Sort Complete";
}
int main()
{
    input();
    bubblesort(a, n);
    display();

    return 0;
}
