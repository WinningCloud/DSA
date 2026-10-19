#include<iostream>
using namespace std;

void getArray(int A[], int n){ //or *A
    // cout<<"Number of elements: "<<sizeof(A)/sizeof(int);
    cout<<"Elements: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<A[i]<<endl;
    }
};

void changeArray(int *A, int n){
    for(int i = 0; i<n; i++){
        A[i] = A[i]*2;
    }
    cout<<"Array doubled"<<endl;
    getArray(A, 5);
}

int * createArray(int size){
    int *p;
    p = new int[size];
    
    for(int i = 0; i<size; i++){
        p[i] = i+1;
    }
    
    cout<<"Array created dynamically"<<endl;
    return p;
}




int main(){
    int arr[] = {2,3,4,5,6};
    cout<<"Number of elements: "<<sizeof(arr)/sizeof(int)<<endl;
    getArray(arr, 5);
    changeArray(arr, 5);
    int *a = createArray(10);
    getArray(a, 10);
}