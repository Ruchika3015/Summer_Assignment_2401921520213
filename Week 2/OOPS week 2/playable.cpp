#include <iostream>
using namespace std;
class playable {
public:
    virtual void play()=0;
};
class veena:public playable {
public:
    void play() {
        cout<<"Playing Veena"<<endl;
    }
};
class saxophone:public playable {
public:
    void play(){
        cout<<"Playing Saxophone"<<endl;
    }
};
int main() {
    veena v;
    v.play();
    saxophone s;
    s.play();
    playable*p;
    p=&v;
    p->play();
    p=&s;
    p->play();
    return 0;
}