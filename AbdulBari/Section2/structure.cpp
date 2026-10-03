#include<iostream>
#include<stdio.h>
using namespace std;


struct Rectangle{
    int length;
    int breadth;

};

struct Rectangle r1,r2,r3;

int main(){
    r1 = {5,10};
    printf("Size of Rectangle structure: %d \n", sizeof(r1));
    // cout<<r1.length<<endl;
    cout<<"Enter length: ";
    cin>>r2.length;
    cout<<"Enter breadth:  ";
    cin>>r2.breadth;
    cout<<"Area of Rectangle 2: "<<r2.length*r2.breadth<<endl;
    return 0;
}
