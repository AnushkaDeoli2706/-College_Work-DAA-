//to find max and min element in array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[50];
    int n;
    cout<<"Enter the number of elements in array";
    cin>>n;
    int ma=INT_MIN;
    int mi=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cout<<"enter values"<<endl;
        cin>>arr[i];
        if(arr[i]>ma)
            ma=arr[i];
        else if(arr[i]<mi)
           mi=arr[i];
    }
    cout<<"max is:"<<ma<<endl;
    cout<<"min is:"<<mi<<endl;

}
