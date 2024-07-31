#include<bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    if(num<=1)
    {
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    if(num<0)
    {
        cout<<"Factorial is not defined for negative number"<<endl;
    }
    else{
        int result = factorial(num);
        cout<<"The factorial of "<<num<<" is "<<result;
    }
    return 0;
}