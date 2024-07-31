#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a={3,4,2,7};
    int size=a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at index="<<a.at(3)<<endl;
    bool trueFalse=a.empty();
    cout<<"true of false = "<<trueFalse;
    bool empty=a.empty();
    cout<<"is array is empty or not="<<empty<<endl;
    cout<<"first element="<<a.front()<<endl;
    cout<<"last element="<<a.back();
}
