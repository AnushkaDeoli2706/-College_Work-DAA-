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
