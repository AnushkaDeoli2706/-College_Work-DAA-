//Given a sorted array of integers ,design an algorithm and implement it using program to find 3 indexes i,j,k such that arr[i]+arr[j]=arr[k]
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
    int i,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           for(k=j+1;k<n;k++)
           {
               if(arr[i]+arr[j]==arr[k])
                {
                    cout<<"i= "<<i<<endl<<"j= "<<j<<endl<<"k= "<<k<<endl;
                    return 0;
                }
                else if(arr[i]+arr[j]<k)
                {
                    j++;
                    break;
                }
           }
        }
    }
    cout<<"No set of index found"<<endl;
    return 0;

}
