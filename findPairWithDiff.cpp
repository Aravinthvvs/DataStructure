#include<bits/stdc++.h>

int pairsCount(vector<int> & nums, int k)
{
    unordered_map<int,int> hmap;

    int counter = 0;

    for(auto num : nums)
    {
        hmap[num]++;
    }

    for(auto itr : hmap)
    {
        if((k == 0 && itr.second > 1) || (k > 0 && hmap.count(abs(itr.first+k))))
        {
            counter++;
        }
    }
    return counter;

}

int main()
{
    vector<int> nums = {1,3,2,1,5};
    int k  = 2;
    cout<<" Pairs Count with diff "<<k<< " :: " <<pairsCount(nums,k);
}