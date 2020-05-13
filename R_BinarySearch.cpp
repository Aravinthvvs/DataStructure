#include <iostream>

using namespace std;

int arr [10] = { 2,4,6,8,10,15,22,28,30,50};

int BinarySearch(int l,int h, int key)
{   

    if(l > h)
    {
        cout<< " Could not find the Element "<< " :: "<<key<<"\n";
        return 0;
    }
    if( l == h)
    {
        if(arr[l] == key)
        {
            cout<<" Found the val :: "<<key<< " in position :: "<<l<<"\n";
            return l;
        }
    }

    int mid = (l+h)/2;

    if(arr[mid] == key)
    {
        cout<<" Found the val :: "<<key<< " in position :: "<<mid<<"\n";
        return mid;
    }
    else if(arr[mid] < key)
    {
        BinarySearch(mid+1,h,key);
    }
    else
    {
        BinarySearch(l,mid-1,key);
    }
    
    return 0;
}

int main()
{
    int n = 10;
    int l = 0;
    int h = n-1;
    int key = 5;
    BinarySearch(l,h,key);

}