#include <iostream>

int FindMaxContagiousSum(int  arr[], int n)
{
    int max_so_far = 0;
    int max_ending_here = 0;
    int start,s,end = 0;

    for(int i =0;i<n;i++)
    {
        max_ending_here = arr[i] + max_ending_here;

        if(max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i+1;
        }
        else if( max_so_far< max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
    }
    std::cout<<" Max starts from position :: "<< start<< " to :: "<<end<<"\n";
    return max_so_far;
}


int main()
{
    int arr[6] = {-2,3,1,-2,4,6};

    int size = sizeof(arr)/sizeof(arr[0]);

    std::cout<<" Max Sum :: "<<FindMaxContagiousSum(arr,size);

    return 0;
}