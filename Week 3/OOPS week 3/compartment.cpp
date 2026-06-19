#include <bits/stdc++.h>
using namespace std;
class Compartment {
public:
    virtual string notice()=0;
    virtual ~Compartment(){}
};
class FirstClass:public Compartment{
public:
    string notice() override{
        return "First Class Compartment:Enjoy your comfortable journey.";
    }
};
class Ladies:public Compartment {
public:
    string notice() override {
        return "Ladies Compartment: Reserved for women passengers.";
    }
};
class General:public Compartment {
public:
    string notice() override {
        return "General Compartment: Please maintain discipline.";
    }
};
class Luggage:public Compartment {
public:
    string notice() override{
        return "Luggage Compartment:Goods and luggage only.";
    }
};
int main() {
    srand(time(0));
    Compartment*compartments[10];
    for (int i=0;i<10;i++) {
        int randomnum=rand()%4+1;
        switch(randomnum) {
            case 1:
                compartments[i]=new FirstClass();
                break;
            case 2:
                compartments[i]=new Ladies();
                break;
            case 3:
                compartments[i]=new General();
                break;
            case 4:
                compartments[i]=new Luggage();
                break;
        }
    }
    cout<<"Notices of Compartments:\n";
    for (int i=0;i<10;i++) {
        cout<<compartments[i]->notice()<<endl;
        delete compartments[i];
    }
}