#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("abha");
    q.push("sabha");
    q.push("mabha");
    cout<<"top element: "<<q.front()<<endl;
    q.pop();
    cout<<"top element after pop: "<<q.front()<<endl;
}