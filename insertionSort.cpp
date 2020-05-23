#include<bits/stdc++.h>
vector<int> insertionSort(vector<int>arr)
{
    for(int i=1;i<arr.size();i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]< arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
        }
    }
    return arr;
}

int main()
{
    vector<int> arr = {4,2,5,1,8};
    arr = insertionSort(arr);
    for(auto n:arr)
    {
        cout<<n<<" ";
    }
}