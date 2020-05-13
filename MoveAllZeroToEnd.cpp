#include<iostream>
using namespace std;

void moveZeros(int arr[], int n)
{
    int count = 0;

    for ( int i =0;i<n;i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }

    while(count < n)
    {
        arr[count++] = 0;
    }
}
int main()
{
    int arr[6] = { 1,0,3,4,0,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr,size);

    for(int i = 0;i < size; i++)
    {
        cout<<" position :: "<< i <<" :: "<< arr[i] <<"\n";
    }
}
