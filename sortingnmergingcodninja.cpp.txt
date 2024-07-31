/*Ninja has been given two sorted integer arrays/lists ‘ARR1’ and ‘ARR2’ of size ‘M’ and ‘N’.
Ninja has to merge these sorted arrays/lists into ‘ARR1’ as one sorted array.
You may have to assume that ‘ARR1’ has a size equal to ‘M’ + ‘N’ such that ‘ARR1’ has enough space to add all the elements of ‘ARR2’ in ‘ARR1’.
For example:
‘ARR1’ = [3 6 9 0 0]
‘ARR2’ = [4 10]
After merging the ‘ARR1’ and ‘ARR2’ in ‘ARR1’. 
‘ARR1’ = [3 4 6 9 10]*/
#include<iostream>
#include<array>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of arr1: "<<endl;
    cin>>m;
    cout<<"Enter the size of arr2: "<<endl;
    cin>>n;
    int arr1[m]={};
    int arr2[n]={};
    cout<<"Enter the elements of arr1: "<<endl;
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the elements of arr2: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    return 0;
}