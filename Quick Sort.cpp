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
void quicksort(int a[25],int first,int last)
{
    int i, j, pivot, temp;

    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;

        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;

      quicksort(a,first,j-1);
      quicksort(a,j+1,last);

   }
}

int main()
{
    input();
    quicksort(a,0,n-1);
    display();

    return 0;
}

