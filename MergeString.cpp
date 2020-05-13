#include <iostream>
using namespace std;

class Test // abstract class
{
public:
    Test();
    virtual ~Test(){cout<<" Test";};
};

class Dtest : public Test
{
public:
    Dtest();
   
    ~Dtest(){cout<<" Dtest";};
};

int main()
{
    Dtest *t2 = new Dtest();
    Test *t1 = t2;
    delete t1;
    return 0;
}



/*string MergeString(string s1, string s2)
{
    string outputStr = s1+s2;
    cout<<" output :: "<<outputStr<<"\n";
    return outputStr;
}

int main()
{
    MergeString("Hello","world");
    return 0;
}*/