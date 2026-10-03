#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    cout<<"Using normal object:"<<endl;
    Rectangle r = {10, 5};
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    return 0;

    cout<<"Using pointer to object: "<<endl;
    Rectangle *p = &r;
    cout<<(p->length)<<endl;
    cout<<(p->breadth)<<endl;

    Rectangle *q = (Rectangle *)malloc(sizeof(Rectangle));
    
}