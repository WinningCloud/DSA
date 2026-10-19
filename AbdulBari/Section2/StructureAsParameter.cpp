#include<iostream>
using namespace std;

struct Rectangle{
        int length;
        int breadth;
    };

void getRectangle(struct Rectangle r){
    // r.length += 10;
    cout<<"Length: "<<r.length<<endl;
    cout<<"Breadth: "<<r.breadth<<endl;
}

void getRectangleAddress(struct Rectangle *r){
    // r->length += 10;
    cout<<"Length: "<<r->length<<endl;
    cout<<"Breadth: "<<r->breadth<<endl;
    
}

struct Rectangle * returnRectangle(){
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle)); //Create in heap
    p->length = 15;
    p->breadth = 10;
    return p;
}

int main(){
    struct Rectangle r = {10, 5};
    getRectangle(r);

    getRectangleAddress(&r);

    struct Rectangle *ptr = returnRectangle();
    getRectangleAddress(ptr);

}