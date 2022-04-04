//Insertion_sort
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int *arr,int n,int *c,int *s)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            (*c)++;
            arr[j + 1] = arr[j];
            j = j - 1;
            (*s)++;
        }
        arr[j + 1] = key;
        (*s)++;
    }
}
void print_arr(int *arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int c=0,s=0;
    int n;
    cout<<"enter number of elements to be entered"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before"<<endl;
    print_arr(arr,n);
    insertion_sort(arr,n,&c,&s);
     cout<<"After"<<endl;
     print_arr(arr,n);
     cout<<"number of shifts : "<<s<<endl;
     cout<<"number of comparisons : "<<c<<endl;
     return 0;
}
