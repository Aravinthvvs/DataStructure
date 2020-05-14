#include<bits/stdc++.h>
using namespace std;

int FindMinDistanceBetweenStrings(string s1,string s2, string strings[],int len)
{
    
    int mini = INT_MAX;
    int m = -1;
    int n = - 1;

    for(int i=0;i<len;i++)
    {
        if(s1.compare(strings[i]) == 0)
        {
            m = i;
            if(n!= -1)
            {
                mini = min(mini,m-n);
            }
        }
        else if(s2.compare(strings[i]) == 0)
        {
            n =i;
            if(m!=-1)
            {
                mini = min(mini,n-m);
            }
        }
    }
    return mini;
}
int main()
{
    string strArr[5] = {"name","roll","number","name","age"};
    int len = sizeof(strArr)/sizeof(strArr[0]);
    cout<<"Minimum distance between strings :: "<<FindMinDistanceBetweenStrings("roll","age",strArr,len);
}