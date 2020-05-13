#include<iostream>
using namespace std;
int getSingle(int arr[], int n)
{
    int x,sum = 0;
    int result = 0;

    for( int i =0;i<32;i++)
    {
        sum = 0;
        x = 1<<i;
        cout<< " x "<<x<<"\n";
        for(int j=0;j<n;j++)
        {
            if(arr[j]&x)
            {
                sum++;
            }
        }

        if(sum %3)
        {
            result |= x;
            cout<<" x :: "<<x<<"\n";
        }
    }
    return result;
}


int main()
{
    int arr[7] ={50,50,50,8,8,8,100};
    cout<<getSingle(arr,7);
    return 0;
}