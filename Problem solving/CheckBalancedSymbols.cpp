#include<bits/stdc++.h>

int fun()
{
    cout<<" inside Thread \n";
    return 1;
}

int main()
{
  thread t(fun);
  cout<<" After Thread \n";
  t.join();
  return 0;
}