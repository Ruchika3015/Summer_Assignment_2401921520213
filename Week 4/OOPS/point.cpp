#include <bits/stdc++.h>
using namespace std;
class point
{
private:
    int x,y;
public:
    point()
    {
        x=0;
        y=0;
    }
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    void setx(int a)
    {
        x=a;
    }
    void sety(int b)
    {
        y=b;
    }
    void setxy(int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"Point=("<<x<<","<<y<<")"<<endl;
    }
};
int main()
{
    int x,y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    point p(x,y);
    p.display();
    cout<<"Enter new x: ";
    cin>>x;
    p.setx(x);
    p.display();
    cout<<"Enter new y: ";
    cin>>y;
    p.sety(y);
    p.display();
    cout<<"Enter new x and y: ";
    cin>>x>>y;
    p.setxy(x,y);
    p.display();
}