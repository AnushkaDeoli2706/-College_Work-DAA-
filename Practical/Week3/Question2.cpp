//Selection_sort
#include<bits/stdc++.h>
using namespace std;


void print_arr(int *arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}

void selection_sort(int *arr,int n,int *c,int *s)
{
    for(int i=0;i<n-1;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            (*c)++;
            if(arr[j]<arr[min_idx])
                {
                    min_idx=j;
                }
        }
        swap(&arr[min_idx],&arr[i]);
        (*s)++;

    }

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
    selection_sort(arr,n,&c,&s);
     cout<<"After"<<endl;
     print_arr(arr,n);
     cout<<"number of shifts : "<<s<<endl;
     cout<<"number of comparisons : "<<c<<endl;
     return 0;
}
