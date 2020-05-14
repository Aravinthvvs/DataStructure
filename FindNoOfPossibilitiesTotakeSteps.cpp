#include<bits/stdc++.h>
using namespace std;

int FindNoOfPossibilitesToReachStairs(int n)
{
    if(n <= 2)
    {
        return n;
    }
    int currentStep = 0;
    int firstBackStep = 2;
    int secondBackStep  =1;
    for(int i=3;i<n+1;i++)
    {
        currentStep = secondBackStep+firstBackStep;
        secondBackStep = firstBackStep;
        firstBackStep = currentStep;
    }
    return currentStep;
}

int main()
{
    int n = 5;
    cout<<" No of possibilites to reach "<<n<<"-th Step :: "<<FindNoOfPossibilitesToReachStairs(n);
}