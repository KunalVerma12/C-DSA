#include<iostream>
using namespace std;
int main(){
    int r,po;
    cout<<"Enter rupees:"<<endl;
    cin>>r;
    cout<<"enter pound: "<<po<<endl;
    cin>>po;
    int p=106.9;
    int ru=0.0098;
    int c=r*p;
    cout<<"Money in pound:"<<c<<endl;
    int cu=ru*po;
    cout<<"Money in rupee:"<<cu<<endl;
    return 0;
}