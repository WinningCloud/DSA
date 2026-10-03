#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout<<"Address at p: "<<p<<endl;
    cout<<"Value at p: "<<*p<<endl;
    cout<<a<<endl;

    cout<<"Arrays implementation of pointers"<<endl;
    //Arrays
    int A[5] = {1,2,3,4,5};
    int *q = A;
    for(int i = 0; i<5; i++){
        cout<<*q<<endl;
        q++;
    }

    //Heap memory allocation
    cout<<"Heap memory allocation"<<endl;
    int *r;
    r = (int *)(malloc(5*sizeof(int)));
    //for c++: r = new int[5]
    r[0]=5;
    r[1]=15;
    r[2]=35;
    r[3]=25;
    r[4]=45;
    
    for(int i = 0; i<5; i++){
        cout<<*r<<endl;
        r++;
    }

    delete [] p;
    
    return 0;
}