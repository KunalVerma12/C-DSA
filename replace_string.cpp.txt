//Replace substring
#include<iostream>
#include<string>
int main(){
    string str="Welcome to the MIET";
    str.replace(3,4,"abcd");
    cout<<str<<endl;
    return 0;
}