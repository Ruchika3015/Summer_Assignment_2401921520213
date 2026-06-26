#include <bits/stdc++.h>
using namespace std;
class outer
{
public:
    void display()
    {
        cout<<"Display function of Outer class"<<endl;
    }
    class inner
    {
    public:
        void display()
        {
            cout<<"Display function of Inner class"<<endl;
        }
    };
};
int main()
{
    outer obj1;
    obj1.display();
    outer::inner obj2;
    obj2.display();
}