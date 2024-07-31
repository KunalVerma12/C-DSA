#include<iostream>
#include<array>
using namespace std;
int main(){
    int c=0;
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nSum of elements of array: ";
    for(int i=0;i<9;i++){
        c=c+arr[i];
    }
    cout<<c<<" ";
}
