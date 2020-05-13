#include <iostream>

using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    int l,h;
    l = 0, h = n - 1;

    while(l<= h)
    {
        int mid = (l+h)/2;

        if(arr[mid] == key)
        {
            cout<< " found key val :: "<<key<< " in position :: "<<mid<<"\n";
            return key;
        }
        if(arr[mid] < key)
        {
            l = mid+1;
        }
        else
        {
            h = mid -1;
        }
    }
    cout<<" Could not find key value :: "<<key<<"\n";
    return 0;
}

int main()
{
    int arr[10] = {1,4,5,6,9,11,13,17,19,25};
    int n = 10,key = 25;
    BinarySearch(arr,n,key);

}