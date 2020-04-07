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

void selectionsort(int a[], int n)
{
    int t, min;
    for(int i =0; i<n; i++)
    {
        min =i;
        for(int j =i+1; j<n; j++)
        {
            if(a[min]> a[j])
            {
                t= a[min];
                a[min]= a[j];
                a[j] = t;
            }


        }
    }
    cout<<"\n Sort Complete";
}
int main()
{
    input();
    selectionsort(a, n);
    display();

    return 0;
}
