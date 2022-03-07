//linear search
#include<bits/stdc++.h>
using namespace std;
int lsearch(int *arr,int n,int key)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
            return i;
    }
    return -1;
}
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int key;
    cout<<"enter key value"<<endl;
    cin>>key;
    cout<<"enter values"<<endl;
    for(int i=0;i<n;i++)
    {     cin>>arr[i];
    }
    int r=lsearch(arr,n,key);
    if(r==-1)
        cout<<"key not found"<<endl;
    else
        cout<<"key found at index:"<<r<<endl;
}
