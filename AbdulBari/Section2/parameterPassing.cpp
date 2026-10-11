#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}


int main(){
    cout<<"Enter A: ";
    int a;
    int b;
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    swap(a, b);
    cout<<"After swapping: "<<endl;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;
}