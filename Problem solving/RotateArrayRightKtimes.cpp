#include<iostream>
using namespace std;

void rotateArray(int *arr,int low, int high)
{
    for(int i=low,j=high;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[6] ={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    rotateArray(arr,n-k,n-1);
    rotateArray(arr,0,n-k-1);
    rotateArray(arr,0,n-1);
    for(auto i : arr)
    {
        cout<<i<<" ";
    }
}