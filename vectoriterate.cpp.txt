#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num={1,2,3,4,5};
    int n=sizeof(num)/sizeof(num[0]);
    for(int i;i<n;i++){
        cout<<num[i]<<" ";
    }
    return 0;
}