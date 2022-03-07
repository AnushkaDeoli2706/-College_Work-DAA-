//given an array of non negative integers design algorithm and run program to count the number of pairs of integers such that their difference is equal to given key
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter number of elements present in array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int c=0;
    int key;
    cout<<"Enter key value"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]-arr[j]==key)
                c++;
        }
    }
    cout<<"count="<<c<<endl;
    return 0;
}
