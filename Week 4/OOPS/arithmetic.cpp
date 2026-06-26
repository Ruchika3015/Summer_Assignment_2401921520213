#include <bits/stdc++.h>
using namespace std;
class Test
{
public:
    virtual int square(int n)=0;
};
class arithmetic:public Test
{
public:
    int square(int n)
    {
        return n*n;
    }
};
int main()
{
    arithmetic obj;
    int n;
    cin>>n;
    cout<<"Square="<<obj.square(n);
}