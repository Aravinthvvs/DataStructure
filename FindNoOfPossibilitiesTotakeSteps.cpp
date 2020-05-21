#include<bits/stdc++.h>
using namespace std;

int FindNoOfPossibilitesToReachStairs(int n)
{
    if(n <= 2)
    {
        return n;
    }
    int currentStep = 0;
    int firstBackStep = 1;
    int secondBackStep  = 2;
    for(int i=3;i<=n;i++)
    {   
        currentStep = firstBackStep+secondBackStep;
        firstBackStep = secondBackStep;
        secondBackStep = currentStep;
    }
    return currentStep;
}

int main()
{
    int n = 5;
    cout<<" No of possibilites to reach "<<n<<"-th Step :: "<<FindNoOfPossibilitesToReachStairs(n);
}