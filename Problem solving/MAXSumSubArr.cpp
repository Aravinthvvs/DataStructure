//Microsoft (R) C/C++ Optimizing Compiler Version 19.00.23506 for x64

#include <iostream>
using namespace std;

int findMaxSumOfSubArray(int arr[],int n)
{
    int maxSumHere,maxSumSoFar =0;
    
    for(int i=0;i<n;i++)
    {
     maxSumHere += arr[i];
        
       if(maxSumHere <0)
       {
           maxSumHere = 0;
       }
       if(maxSumHere>maxSumSoFar)
       {
           maxSumSoFar = maxSumHere;
       }
    }
   return maxSumSoFar; 
}
int main()
{
    int arr[6] = {1,12,-2,4,5,-1};
    
    std::cout <<findMaxSumOfSubArray(arr,6) <<"\n";
    return 0;
}