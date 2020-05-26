#include<vector>
#include<iostream>
using namespace std;

vector<double> findContiguousSubArrayAverage(vector<int> arr, int k)
{
    vector<double> result;
    int winStart = 0;
    double sum = 0;
    for(int winEnd = 0; winEnd < arr.size();winEnd++)
    {
        sum += arr[winEnd];

        if(winEnd >= k-1)
        {
            result.push_back(sum/k);
            sum -= arr[winStart];
            winStart++;
        }
    }
    return result;
}


int main()
{
    vector<int> arr = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int k = 5;
    vector<double> res = findContiguousSubArrayAverage(arr,k);
    for(auto val:res)
    {
        cout<<val<<" ";
    }
    return 0;
}