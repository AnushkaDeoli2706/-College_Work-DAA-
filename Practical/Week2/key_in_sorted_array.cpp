//Given a sorted array of integers containing few duplicate elements , design an algo and implement it using program to find whether the given key is present in array or not . If present find number of copies of a given key .
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
    int key;
    cout<<"Enter key value"<<endl;
    cin>>key;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            c++;
            for(int j=i+1;j<n;j++)
            {
                if(key==arr[j])
                    c++;
            }
            cout<<"Key found "<<endl<<"The key is present "<<c<<" times in array "<<endl;
            break;
        }
    }
    if(c==0)
        cout<<"Key not found";
    return 0;
}
