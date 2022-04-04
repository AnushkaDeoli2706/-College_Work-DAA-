#include<bits/stdc++.h>
using namespace std;
void merge(int a[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2]; //temporary arrays

    /* copy data to temp arrays */
    for (int i = 0; i < n1; i++)
      LeftArray[i] = a[beg + i];
    for (int j = 0; j < n2; j++)
      RightArray[j] = a[mid + 1 + j];

    i = 0; /* initial index of first sub-array */
    j = 0; /* initial index of second sub-array */
    k = beg;  /* initial index of merged sub-array */

    while (i < n1 && j < n2)
    {
        if(LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i<n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j<n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}

int main()
{
    int n;
    cout<<"enter number of elements to be entered"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,(n-1));
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            c++;
            break;
        }
    }
    if(c!=0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
     return 0;
}
