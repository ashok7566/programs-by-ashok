
#include<iostream>
#include<climits>
using namespace std;
int partition(int arr[],int l,int r);
void swapp(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}



int kthsmallest(int arr[],int l,int r,int k)
{
    if(k > 0 && k <= r-l+1)
    {
        int pos = partition(arr,l,r);

        if(pos-1 == k-1)
        {
            return arr[pos];
        }
        if(pos-1 > k-1)
        {
            return kthsmallest(arr,l,pos-1,k);
        }

        return kthsmallest(arr,pos+1,r,k-pos+l-1);
    }

    return INT_MAX;
}
int partition(int arr[],int l,int r)
{
    int x = arr[r];
    int i = l;
    for(int j = l;j<r;j++)
    {
        if( arr[j] <= x)
        {
            swapp(&arr[i],&arr[j]);
            i++;
        }
    }
    swapp(&arr[i],&arr[r]);
    return i;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout<<"kth smallest"<<kthsmallest(arr,0,n-1,k);
    return 0;
}

/*

// Geeksforgeeks sol.
#include <climits>
#include <iostream>
using namespace std;
 
int partition(int arr[], int l, int r);
 

int kthSmallest(int arr[], int l, int r, int k)
{

    if (k > 0 && k <= r - l + 1) {
        int pos = partition(arr, l, r);
        if (pos - l == k - 1)
            return arr[pos];
        if (pos - l > k - 1)
            return kthSmallest(arr, l, pos - 1, k);
 
        return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
    }
    return INT_MAX;
}
 
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}

int main()
{
    int arr[] = { 12, 3, 5, 7, 4, 19, 26 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 4;
    cout << "K'th smallest element is " << kthSmallest(arr, 0, n - 1, k);
    return 0;
}
*/