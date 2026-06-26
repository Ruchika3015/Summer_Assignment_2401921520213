#include <bits/stdc++.h>
using namespace std;
class box
{
protected:
    float length,breadth;
public:
    box(float l,float b)
    {
        length=l;
        breadth=b;
    }
    float area()
    {
        return length*breadth;
    }
};
class box3d:public box
{
private:
    float height;
public:
    box3d(float l,float b,float h):box(l,b)
    {
        height=h;
    }
    float volume()
    {
        return length*breadth*height;
    }
};
int main()
{
    box b1(10,5);
    cout<<"Area="<<b1.area()<<endl;
    box3d b2(10,5,8);
    cout<<"Area="<<b2.area()<<endl;
    cout<<"Volume="<<b2.volume()<<endl;
}