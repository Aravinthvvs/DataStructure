#include<bits/stdc++.h>

void findSymPairs(int arr[][2],int rows)
{
    unordered_map<int,int> hmap;

    for(int i =0;i<rows;i++)
    {
        int first = arr[i][0];
        int sec = arr[i][1];

        if(hmap.find(sec) != hmap.end() && hmap[sec] == first)
        {
            cout<< first <<" and "<<sec << " are having symmetric pairs \n";
        }
        else
        {
            hmap[first] = sec;
        }
    }
}
int main() 
{ 
    int arr[5][2]; 
    arr[0][0] = 11; arr[0][1] = 20; 
    arr[1][0] = 30; arr[1][1] = 40; 
    arr[2][0] = 5;  arr[2][1] = 10; 
    arr[3][0] = 40;  arr[3][1] = 30; 
    arr[4][0] = 10;  arr[4][1] = 5; 
    findSymPairs(arr, 5); 
    return 0;
} 