#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[4]={3,4,2,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}