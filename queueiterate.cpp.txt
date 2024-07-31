#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("abha");
    q.push("sabha");
    q.push("mabha");
    q.push("Eknath");
    q.push("Shinde");
    int n=q.size();
    for(int i=0;i<n;i++){
        cout<<" "<<q.front();
        q.pop();
    }
}