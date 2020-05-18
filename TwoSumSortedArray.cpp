#include<bits/stdc++.h>
using namespace std;

/* LeetCode Problem - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/ */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() -1;
        int sum = 0;
        
        while(l<r)
        {
            sum = numbers[l]+numbers[r];
            if(sum == target)
            {
                return vector<int> {l+1,r+1};
            }
            else if(sum > target)
            {
                r--;
            }
            else if(sum < target)
            {
                l++;
            }
        }
        return vector<int>{-1,-1};
    }
};

int main()
{
    Solution sl;
    vector<int> num = {1,3,5,8};
    vector<int> out = sl.twoSum(num,9);
    for(auto index:out)
    {
        cout<<"Indexes :: "<<index<<" ";
    }
    return 0;
}