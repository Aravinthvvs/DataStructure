#include<iostream>
#include<iterator>
#include<unordered_map>
using namespace std;
int findFirstNonRepeatingNum(int arr[],int n)
{
    unordered_map<int,int> hmap;

    for(int i=0;i<n;i++)
    {
        hmap[arr[i]]++;
    }
    for(int j=0;j<n;j++)
    {
        if(hmap[arr[j]] == 1)
        {
            return arr[j];
        }
    }
    return -1;
}
int main()
{
    int a[9] = {0,1,2,1,4,2,3,3,0};
    int n = sizeof(a)/sizeof(a[0]);
    std::cout<<findFirstNonRepeatingNum(a,n);
    return 0;
}