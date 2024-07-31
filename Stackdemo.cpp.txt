#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("a");
    s.push("b");
    s.push("c");
    s.push("d");
    cout<<"top element:"<<s.top()<<endl;
    s.pop();
    cout<<"Element after pop "<<s.top()<<endl;
}