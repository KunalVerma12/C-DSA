#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> g;
    for(int i=0;i<5;i++){
        g.push_back(i);
    }
    cout<<"Size:"<<g.size()<<endl;
    cout<<"Capacity:"<<g.capacity()<<endl;
    cout<<"Max_size:"<<g.max_size()<<endl;
    g.resize(6);
    cout<<"New Size:"<<g.size()<<endl;
    if(g.empty()==false){
        cout<<"Vector is not empty."<<endl;
    }
    else{
        cout<<"Vector is empty.";
    }
}
