#include<iostream>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int main(){
    struct rectangle r1  = {30,20};
    struct rectangle *r;
    r = &r1;
    cout<<"Old length: "<<r1.length<<endl;
    r->length = 40;
    cout<<"Updated length: "<<r1.length<<endl;

    struct rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    p->length = 45;
    p->breadth = 44;
    cout<<"Length of dynamic object: "<<(p->length)<<endl;
    return 0;
}