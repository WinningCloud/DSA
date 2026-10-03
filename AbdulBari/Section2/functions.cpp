#include<iostream>
using namespace std;

int add(int a, int b){
    int c;
    c = a+b;
    return c;
}


int main(){
    int a, b, sum;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    sum = add(a,b);
    cout<<"Sum = "<<sum<<endl;
    return 0;
}