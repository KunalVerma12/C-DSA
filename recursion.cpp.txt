#include<bits/stdc++.h>
using namespace std;

int rsum(int n)
{
    int d,s;
    if(n!=0)
    {
        d=n%10;
        n=n/10;
        s=d+rsum(n);
    }
    else
        return 0;
    return s;
}

int main()
{
    int num,sum;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    sum = rsum(num);
    cout<<sum;
}