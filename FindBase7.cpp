#include<bits/stdc++.h>
using namespace std;

string FindBase7Value(string no)
{
    int num = atoi(no.c_str());
    string ans;
    bool isNeg = false;

    if(num == 0)
    {
        return "0";
    }
    if(num < 0)
    {
        isNeg = true;
        num = abs(num);
        ans += "-";
    }
    while(num != 0)
    {
     ans.append(to_string(num%7));
     num = num/7;
    }
    if(isNeg)
    {
        string sign = "-";
        reverse(ans.begin(),ans.end());
        ans = sign.append(ans);
        return ans;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string num = "7";
    cout<<FindBase7Value(num);
}