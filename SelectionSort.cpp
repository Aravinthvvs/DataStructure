#include<bits/stdc++.h>

/* Selection Sort */
/*Split array into sorted and unsorted array, Find the lowest element in the unsorted array
swap that element with array's front elements. */

vector<int> selectionSort(vector<int> arr) 
{
    int index;

    for(int i=0;i<arr.size();i++)
    {
        index = i;
        for(int j = i+1;j< arr.size();j++)
        {
            if(arr[j]< arr[index])
            {
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    return arr;
}

int main()
{
    vector<int> arr = {3,4,2,6,9};
    arr = selectionSort(arr);
    for(auto a: arr)
    {
        cout<<a<<" ";
    }
}