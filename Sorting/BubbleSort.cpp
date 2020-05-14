#include<bits/stdc++.h>

void bubbleSort(int *arr, int n) // timecomplexity - O(n^2)
{
    cout<<"size of arr "<<n<<"\n";
    for(int i=0;i<n;i++) //No of passes - n times
    {
        for(int j=0;j<n-i-1;j++) //No of comparisons - (n-i) times
        {
            if(arr[j+1] < arr[j]) //next is bigger then swap it
            {
                swap(arr[j],arr[j+1]); //swapping big element with small element
            }
        }
    }
}

int main()
{
    int a[] = {1,3,4,2,5,7};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Array before Bubble sort \n";
    for(auto no:a)
    {
        cout<<no<<" ";
    }
    bubbleSort(a,n);
    cout<<"\n Array after Bubble sort \n";
    for(auto no:a)
    {
        cout<<no<<" ";
    }
}