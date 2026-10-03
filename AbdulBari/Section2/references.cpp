#include<iostream>
using namespace std;

int main(){

int a = 10;
int &r = a;

a = a+10;
cout<<"a: "<<a<<endl;
cout<<"r: "<<r<<endl;

}
