#include<iostream>
using namespace std;

//function definition
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
    sum = add(a,b);  //function call
    cout<<"Sum = "<<sum<<endl;
    // return 0;
}