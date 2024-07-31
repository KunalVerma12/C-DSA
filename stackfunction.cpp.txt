#include<iostream>
#include<stack>
using namespace std;
stack<string> s;
int element;
void insert(){
    cout<<"Enter string to push: ";
    cin<<element;
    s.push(element);
}
void delete(){
    int n=s.size();
    if(n<=0){
        cout<<"Underflow"<<endl;
    }
    else{
        s.pop();
    }
}
int x;
switch(x)