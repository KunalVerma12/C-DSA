/*

Questions of arrays

1.) to find the largest element of the array

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int largest=a[0];
   for(int i=1; i<n; i++){
      if(a[i]>largest){
         largest=a[i];
      }
   }
   cout<<largest<<endl;
}

2.) to find the second largest and second smallest

#include<bits/stdc++.h>
using namespace std;

int secondlargest(int a[], int n){
   int largest = a[0];
   int slargest = -1;
   for(int i=0; i<n; i++){
      if(a[i]>largest){
         slargest=largest;
         largest=a[i];
      }
      else if(a[i]<largest && a[i]>slargest){
         slargest=a[i];
      }
   }
   return slargest;
}

int secondsmallest(int a[], int n){
   int smallest = a[0];
   int ssmallest = INT_MAX;
   for(int i=0; i<n; i++){
      if(a[i]<smallest){
         ssmallest=smallest;
         smallest=a[i];
      }
      else if(a[i]!=smallest && a[i]<ssmallest){
         ssmallest=a[i];
      }
   }
   return ssmallest;
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int slargest = secondlargest(a,n);
   int ssmallest = secondsmallest(a,n);

   cout<<slargest<<" "<<ssmallest;
}

3.) check whether an array is sorted in increasing order or not 

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   for(int i=0; i<n; i++){
      if(a[i]>=a[i-1]){

      }
      else{
         cout<<"false";
         return 0;
      }
   }
   cout<<"true";
}

4.) sort an array and then remove the duplicate

#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++){
      cin >> a[i];
   }

   sort(a, a + n);

   int i = 0;
   for(int j = 1; j < n; j++){
      if(a[j] != a[i]){
         a[i+1] = a[j];
         i++;
      }
   }

   for(int k = 0; k <= i; k++){
      cout << a[k] << " ";
   }
}

5.) left rotate array by one place

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int temp=a[0];
   for(int i=1; i<n; i++){
      a[i-1]=a[i];
   }
   a[n-1]=temp;
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

6.) left rotate elements by d positions

brute solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int d;
    cin >> d;
    int temp[d]; 
    for (int i = 0; i < d; i++) {
        temp[i] = a[i]; 
    }
    for (int i = d; i < n; i++) {
        a[i - d] = a[i]; 
    }
    for (int i = d; i < n; i++) {
        a[i]=temp[i-(n-d)];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; 
    }
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int d;
   cin>>d;

   d=d%n; //if d is greater then n

   reverse(a,a+d);
   reverse(a+d,a+n);
   reverse(a,a+n);
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

7.) right rotate array by one place

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int temp=a[n-1];
   for(int i=n-1; i>=0; i--){
      a[i+1]=a[i];
   }
   a[0]=temp;
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

8.) right rotate array by d places

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int d;
   cin>>d;
   d=d%n;
   reverse(a,a+n);
   reverse(a,a+d);
   reverse(a+d,a+n);
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

9.) move zero to end

brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   vector<int> temp;
   for(int i=0; i<n; i++){
      if(a[i]!=0){
         temp.push_back(a[i]);
      }
   }
   for(int i=0; i<temp.size(); i++){
      a[i]=temp[i];
   }
   for(int i=temp.size(); i<n; i++){
      a[i]=0;
   }
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int j=-1;
   for(int i=0; i<n; i++){
      if(a[i]==0){
         j=i;
         break;
      }
   }
   for(int i=j+1; i<n; i++){
      if(a[i]!=0){
         swap(a[i],a[j]);
         j++;
      }
   }

   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }

10.) linear search
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int num;
   cin>>num;
   for(int i=0; i<n; i++){
      if(a[i]==num){
         cout<<i<<endl;
         return 0;
      }
   }
   cout<<"not avalable"<<endl;
}

11.) union of sorted array
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n1, n2;
   cin >> n1 >> n2;      
   int a[n1];
   int b[n2];
   vector<int> u;
   for(int i = 0; i < n1; i++) {
      cin >> a[i];
   }
   for(int j = 0; j < n2; j++) {
      cin >> b[j];
   }
   int i = 0, j = 0;
   while(i < n1 && j < n2){
      if(a[i] <= b[j]){
         if(u.size() == 0 || u.back() != a[i]){
            u.push_back(a[i]);
         }
         i++;
      }
      else{
         if(u.size() == 0 || u.back() != b[j]){
            u.push_back(b[j]);
         }
         j++;
      }
   }
   while(i < n1){
      if(u.size() == 0 || u.back() != a[i]){
         u.push_back(a[i]);
      }
      i++;
   }
   while(j < n2){
      if(u.size() == 0 || u.back() != b[j]){
         u.push_back(b[j]);
      }
      j++;
   }
   for(auto it : u){
      cout << it << " ";
   }
}

12.) intersection of sorted array

brute solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;       
    int a[n1], b[n2];
    vector<int> s;
    int m;
    int temp[m]={0};
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }
    
    int i = 0;
    while (i < n1) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j] && temp[j]==0) {
                s.push_back(a[i]);
                temp[j]==1;
                break; 
            }
        }
        i++;
    }
    for (auto it : s) {
        cout << it << " ";
    }
    return 0;
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n1,n2;
   cin>>n1>>n2;
   int a[n1];
   int b[n2];
   vector<int> s;
   for(int i=0; i<n1; i++){
      cin>>a[i];
   }
   for(int j=0; j<n2; j++){
      cin>>b[j];
   }
   sort(a,a+n1);
   sort(b,b+n2);
   int i=0,j=0;
   while(i<n1, j<n2){
      if(a[i]<b[j]){
         i++;
      }
      else if(a[i]>b[j]){
         j++;
      }
      else{
         s.push_back(a[i]);
         i++;
         j++;
      }
   }
   for(auto it : s){
      cout<<s[it]<<" ";
   }
}

13.) find the missing number in the array from 1 to n;

brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n-1; i++){
      cin>>a[i];
   }
   for(int i=1; i<=n; i++){
      int flag=0;
      for(int j=0; j<n-1; j++){
         if(a[j]==i){
            flag=1;
            break;
         }
      }
      if(flag==0){
         cout<<i<<endl;
      }
   }
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n-1; i++){
      cin>>a[i];
   }
   int sum = (n*(n+1))/2;        // sum of natural numbers
   int s2=0;
   for(int i=0; i<n-1; i++){
      s2+=a[i];
   }
   cout<<sum-s2;
}

14.) count the maximum number of conecutive one in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int maxi=0;
   int count=0;
   for(int i=0; i<n; i++){
      if(a[i]==1){
         count++;
         maxi=max(maxi,count);
      }
      else{
         count=0;
      }
   }
   cout<<maxi<<endl;
}

15.) find the number which occurs only one time and the rest occurs two or more times.

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int XOR = 0;
   for(int i=0; i<n; i++){
      XOR=XOR^a[i];
   }
   cout<<XOR<<endl;
}

16.) to find the largest sub array who's sum is equal to l;

brute solution
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l;
    cin >> l;
    int length = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += a[j]; 
            if(sum == l) {
                length = max(length, j - i + 1);
            }
        }
    }
    cout << length << endl;
    return 0;
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int j=0; 
   int k;
   cin>>k;
   int sum=0;
   int length=0;
   for(int i=0; i<n; i++){
      sum+=a[i];
      while(sum>k && j<=i){
         sum-=a[j];
         j++;
      }
      if(sum==k){
         length=max(length,i-j+1);
      }
   }
   cout<<length<<endl;
}

17.) to find the count of sum k occurs in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int j=0; 
   int sum=0;
   int k;
   cin>>k;
   int count=0;
   for(int i=0; i<n; i++){
      sum+=a[i];
      while(sum>k && j<=i){
         sum-=a[j];
         j++;
      }
      if(sum==k){
         count++;
      }
   }
   cout<<count<<endl;
}

18.) to find if the sum of two numbers is equal to target or not and print their indexes as well if they are equal to the target.

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   sort(a,a+n);
   int target;
   cin>>target;
   int j=0;
   int i=n-1;
   while(i>j){
      if(a[i]+a[j]<target){
         j++;
      }
      else if(a[i]+a[j]>target){
         i--;
      }
      else if(a[i]+a[j]==target){
         cout<<"yes"<<endl;
         cout<<i+1<<" "<<j+1;
         return 0;
      }
   }
   cout<<"no"<<endl;
}

19.) duch national flag algorithm (sorting 0,1,2)
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;

   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int low=0, mid=0, high=n-1;
   while(mid<=high){
      if(a[mid]==0){
         swap(a[low],a[mid]);
         low++;
         mid++;      
      }
      else if(a[mid]==1){
         mid++;
      }
      else if(a[mid]==2){
         swap(a[mid],a[high]);
         high--;
      }
   }
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

20.) to find the number whose count is more then n/2
brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   for(int i=0; i<n; i++){
      int count=0;
      for(int j=1;j<n; j++){
         if(a[j]==a[i]){
            count++;
         }
      }
      if(count>n/2){
         cout<<a[i]<<endl;
         return 0;
      }
   }
}

optimal sotution:- moose voting algoritm
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }   
   int count=0;
   int element;
   for(int i=0; i<n; i++){
      if(count==0){
         count=1;
         element=a[i];
      }
      else if(element == a[i]){
         count++;
      }
      else{
         count--;
      }
   }
   int count1=0;
   for(int i=0; i<n; i++){
      if(a[i]==element){
         count1++;
      }
   }
   if(count1>n/2){
      cout<<element<<endl;
   }
   else{
      cout<<"no";
   }
}

21.) kadane's algorithm to find a maximum sum subarray and find the start and the end position of the subarray.
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int sum=0;
   int maxi=INT_MIN;
   int start=-1;
   int end=-1;
   for(int i=0; i<n; i++){
      if(sum==0){
         start=i;
      }
      sum+=a[i];
      if(sum>maxi){
         maxi=sum;
         end=i;
      }
      if(sum<0){
         sum=0;
      }
   }
   cout<<sum<<" "<<start<<" "<<end;
}

22.) rearrange array elements by sign where number of positives are equal to the number of negatives

brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   vector<int> pos;
   vector<int> neg;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            neg.push_back(a[i]);
        } else if (a[i] > 0) {
            pos.push_back(a[i]);
        }
    }
   for(int i=0; i<n/2; i++){
      a[2*i]=pos[i];
      a[2*i+1]=neg[i];
   }
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   vector<int> m(n);
   int posindex=0;
   int negindex=1;

    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            m[negindex]=v[i];
            negindex+=2;
            
        } else if (v[i] > 0) {
            m[posindex]=v[i];
            posindex+=2;
        }
    }
   for(auto it : m){
      cout<<it<<" ";
   }
}

23.) rearrange array elements by sign where number of positives are not equal to the number of negatives

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   vector<int> pos;
   vector<int> neg;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            neg.push_back(a[i]);
        } else if (a[i] > 0) {
            pos.push_back(a[i]);
        }
    }
   if(pos.size()>neg.size()){
      for(int i=0; i<neg.size(); i++){
         a[i*2]=pos[i];
         a[i*2+1]=neg[i];
      }
      int index=neg.size()*2;
      for(int i=neg.size(); i<pos.size(); i++){
         a[index]=pos[i];
         index++;
      }
   }
   else{
      for(int i=0; i<neg.size(); i++){
         a[i*2]=pos[i];
         a[i*2+1]=neg[i];
      }
      int index=pos.size()*2;
      for(int i=pos.size(); i<neg.size(); i++){
         a[index]=neg[i];
         index++;
      }
   }
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

stock array
24.) best time to buy and sell syock to gain maximum profit
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int profit=0;
   int mini=a[0];
   for(int i=1; i<n; i++){
      int cost=a[i]-mini;
      profit=max(cost,profit);
      mini=min(mini,a[i]);
   }
   cout<<profit<<endl;
}

25.) find the next permutation (the next greater combination)

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> a(n);
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int index=-1;
   for(int i=n-2; i>=0; i--){
      if(a[i]<a[i+1]){
         index=i;
         break;
      }
   }
   if(index==-1){
      reverse(a.begin(),a.end());
      return 0;
   }
   for(int i=n-1; i>index; i--){
      if(a[i]>a[index]){
         swap(a[i],a[index]);
         break;
      }
   }
   reverse(a.begin()+index+1,a.end());
   for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
   }
}

26.) leader in an array (everything in the right should be smaller)

brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   vector<int> v;
   for(int i=0; i<n; i++){
      bool isgreater=true;
      for(int j=i+1; j<n; j++){
         if(a[i]<a[j]){
            isgreater=false;
            break;
         }
      }
      if(isgreater){
         v.push_back(a[i]);
      }
   }
   for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
   }
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   vector<int> v;
   int maxi=INT_MIN;
   for(int i=n-1; i>=0; i--){
      if(a[i]>maxi){
         v.push_back(a[i]);
      }
      maxi=max(maxi,a[i]);
   }
   sort(v.begin(),v.end());
   for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
   }
}

27.) the largest consecutive numbers sequence

brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   sort(a,a+n);
   int count=1;
   int largest=1;
   for(int i=0; i<n-1; i++){
      if(a[i+1]==a[i]+1){
         count++;
      } else if(a[i+1] != a[i]) {
         count = 1;
      }
      largest=max(largest,count);
   }
   cout<<largest;
}

optimal solution (doing it with the help of sets, not doing any sorting)
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   unordered_set<int> st;
   int longest=1;
   for(int i=0; i<n; i++){
      st.insert(a[i]);
   }
   for(auto it : st){
      if(st.find(it-1)==st.end()){
         int count=1;
         int x=it;
         while(st.find(x+1)!=st.end()){
            x=x+1;
            count++;
         }
         longest=max(longest,count);
      }
   }
   cout<<longest<<endl;
}

matrix array
28.) set metrix zero

brute solution
#include<bits/stdc++.h>
using namespace std;
void markrow(int a[][100],int i, int m){
   for(int j=0; j<m; j++){
      if(a[i][j]!=0){
         a[i][j]=-1;
      }
   }
}
void markcol(int a[][100],int j,int n){
   for(int i=0; i<n; i++){
      if(a[i][j]!=0){
         a[i][j]=-1;
      }
   }
}
int main(){
   int n,m;
   cin>>n>>m;
   int a[100][100];
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin>>a[i][j];
      }
   }
   bool row[100]={false};
   bool col[100]={false};
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(a[i][j]==0){
            row[i]=true;
            col[j]=true;
         }
      }
   }
   for(int i=0; i<n; i++){
      if(row[i]){
         markrow(a,i,m);
      }
   }
   for(int j=0; j<m; j++){
      if(col[j]){
         markcol(a,j,n);
      }
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(a[i][j]==-1){
            a[i][j]=0;
         }
      }
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
}

better solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int a[n][m];
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin>>a[i][j];
      }
   }
   bool row[n]={false};
   bool col[m]={false};
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(a[i][j]==0){
            row[i]=true;
            col[j]=true;
         }
      }
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(row[i]||col[j]){
            a[i][j]=0;
         }
      }
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
}

optimal solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int a[n][m];
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin>>a[i][j];
      }
   }
   int col0=1;
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(a[i][j]==0){
            a[i][0]=0;
            if(j!=0){
               a[0][j]=0;
            }
            else{
               col0=0;
            }
         }
      }
   }
   for(int i=1; i<n; i++){
      for(int j=1; j<m; j++){
         if(a[i][j]!=0){
            if(a[i][0]==0 || a[0][j]==0){
               a[i][j]=0;
            }
         }
      }
   }
   if(a[0][0]==0){
      for(int j=0; j<m; j++){
         a[0][j]=0;
      }
   }
   if(col0==0){
      for(int i=0; i<n; i++){
         a[i][0]=0;
      }
   }
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }
}

29.) rotate a matrix by 90 degree in the clockwise direction
 
brute solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >>m; 
    int a[n][n]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int b[m][n]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[j][n-1-i] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

optimal solution 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    
    vector<vector<int>> b(n, vector<int>(n)); 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>b[i][j];
        }
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            swap(b[i][j],b[j][i]);
        }
    }
    for(int i=0; i<n; i++){
      reverse(b[i].begin(),b[i].end());
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

30.) spiral matrix
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,m;
   cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         cin>>v[i][j];
      }
    }
    int left=0, right=n-1;
    int top=0, bottom=n-1;
    vector<int>ans;
    while(left<=right && top<=bottom){
      for(int i=top; i<=right; i++){
         ans.push_back(v[top][i]);
      }
      top++;
      for(int i=top; i<=bottom; i++){
         ans.push_back(v[i][right]);
      }
      right--;
      if(top<=bottom){
         for(int i=right; i>=bottom; i--){
            ans.push_back(v[bottom][i]);
         }
         bottom--;
      }
      if(left<=right){
         for(int i=bottom; i>=top; i--){
            ans.push_back(v[i][left]);
         }
         left++;
      }
    }
    for(int i=0; i<ans.size(); i++){
      cout<<ans[i]<<" ";
    }
}

31.) Number of subarrays with sum k
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int count=0;
   int k;
   cin>>k;
   int j=0;
   int sum=0;
   for(int i=0; i<n; i++){
      sum+=a[i];
      while(sum>k && j<=i){
         sum-=a[j];
         j++;
      }
      if(sum==k){
         count++;
      }
   }
   cout<<count<<endl;
}

32.) pascal triangle
a.) given row(r) and column(c), tell the element at that position

#include <bits/stdc++.h>
using namespace std;

int NcR(int r,int c){
   long long res=1;
   for(int i=0; i<c; i++){
      res=res*(r-i);
      res=res/(i+1);
   }
   return res;
}

int main() {
   int r,c;
   cin>>r>>c;
   cout<<NcR(r-1,c-1)<<endl;
}

b.) print nth row of the pascal triangle

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int ans=1;
   cout<<ans<<" ";
   for(int i=1; i<n; i++){
      ans*=(n-i);
      ans/=i;
      cout<<ans<<" ";
   }
   
}

c.) generate first n rows of pascal triangle

#include <bits/stdc++.h>
using namespace std;

void generateRow(int row) {
   long long ans = 1;
   cout << ans << " ";
   for (int i = 1; i < row; i++) {
      ans *= (row - i);
      ans /= i;
      cout << ans << " ";
   }
   cout << endl;
}

int main() {
   int n;
   cin >> n;
   for(int i=1; i<=n; i++){
   generateRow(i);
   }
}

32.) find the elements whose count is more the n/3

#include<bits/stdc++.h>    //the maximum outcome can be two numbers
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int c1=0;
   int c2=0;
   int el1;
   int el2;
   for(int i=0; i<n; i++){
      if(c1==0 && a[i]!=el2){
         c1++;
         el1=a[i];
      }
      else if(c2==0 && a[i]!=el1){
         c2++;
         el2=a[i];
      }
      else if(el1==a[i]){
         c1++;
      }
      else if(el2==a[i]){
         c2++;
      }
      else{
         c1--,c2--;
      }
   }
   int count1=0;
   int count2=0;
   for(int i=0; i<n; i++){
      if(el1==a[i]){
         count1++;
      }
      if(el2==a[i]){
         count2++;
      }
   }
   if(count1>n/3){
      cout<<el1<<endl;
   }

   if(count2>n/3){
      cout<<el2<<endl;
   }
   //else{cout<<"no"<<endl;}
}

33.) three sum ( sum of any three elements in an array is equal to zero )

brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   set<vector<int>> s;
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   for(int i=0; i<n; i++){
      for(int j=i+1; j<n; j++){
         for(int k=j+1; k<n; k++){
            if(v[i]+v[j]+v[k]==0){
               vector<int> temp = {v[i], v[j], v[k]};
               sort(temp.begin(),temp.end());
               s.insert(temp);
            }
         }
      }
   }
   vector<vector<int>> ans(s.begin(),s.end());
   for(auto &it : ans){
      for(int num : it){
         cout<<num<<" ";
      }
      cout<<endl;
   }
}

better solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   set<vector<int>> s;
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   for(int i=0; i<n; i++){
      set<int> hashset;
      for(int j=i+1; j<n; j++){
         int third = -(v[i]+v[j]);
         if(hashset.find(third)!=hashset.end()){
            vector<int> temp = {v[i], v[j], third};
            sort(temp.begin(),temp.end());
            s.insert(temp);
         }
         hashset.insert(v[j]);
      }
   }
   vector<vector<int>> ans(s.begin(),s.end());
   for(auto &it : ans){
      for(int num : it){
         cout<<num<<" ";
      }
      cout<<endl;
   }
}

optimal solution (two pointer approach)
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   vector<vector<int>> ans;
   sort(v.begin(),v.end());
   for(int i=0; i<n; i++){
      if(i>0 && v[i] == v[i-1]) continue;
      int j=i+1;
      int k=n-1;
      while(j<k){
         int sum = v[i]+v[j]+v[k];
         if(sum<0){
            j++;
         }
         else if(sum>0){
            k--;
         }
         else{
            vector<int> temp = {v[i],v[j],v[k]};
            ans.push_back(temp);
            j++;
            k--;
            while(j<k && v[j] == v[j-1])j++;
            while(k>j && v[k] == v[k+1])k--;
         }
      }
   }
   for(auto &it : ans){
      for(int num : it){
         cout<<num<<" ";
      }
      cout<<endl;
   }
}

34.) four sum

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int> v(n);
   for(int i=0; i<n; i++){
      cin>>v[i];
   }
   vector<vector<int>> ans;
   sort(v.begin(),v.end());
   int target;
   cin>>target;
   for(int i=0; i<n; i++){
      if(i>0 && v[i] == v[i-1]) continue;
      for(int j=i+1; j<n; j++){
         if(j!=i+1 && v[j] == v[j-1]) continue;
         int k=j+1;
         int l=n-1;
         while(k<l){
            int sum = v[i]+v[j]+v[k]+v[l];
            if(sum==target){
               vector<int> temp = {v[i],v[j],v[k],v[l]};
               ans.push_back(temp);
               k++;
               l--;
               while(k<j && v[k]==v[k-1]) k++;
               while(j>k && v[j]==v[j+1]) j++;
            }
            else if(sum<target) k++;
            else l--;
         }
      }
   }
   for(auto it : ans){
      for(int num : it){
         cout<<num<<" ";
      }
      cout<<endl;
   }
}

35.) find the number who came twice in the arrray and the number who never came

brute solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   map<int,int> m;
   int s2=0;
   for(int i=0; i<n; i++){
      int x;
      cin>>x;
      s2=s2+x;
      m[x]++;
   }
   int element=0;
   for(auto it : m){
      if(it.second == 2){
         element = it.first;
      }
   }
   int sum = (n*(n+1))/2;
   s2-=element;
   sum-=s2;
   cout<<element<<" "<<sum;
}

optimal solution : 1
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   long long sN = (n * (n+1))/2;
   long long s2N = (n * (n+1) * (2*n+1))/6;
   int s=0, s2=0;
   for(int i=0; i<n; i++){
      s = s + a[i];
      s2 = s2 +(long long) a[i] * (long long)a[i];
   }
   long long val1 = s-sN;
   long long val2 = s2-s2N;
   val2 = val2/val1;
   long long x = (val1 + val2)/2;
   long long y = x-val1;
   cout<<x<<" "<<y;
}

optimal solution : 2


*/


#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>>a[i];
   }
   int k;
   cin>>k;
   map<int,int> m;
   m[0]=1;
   int presum=0, count=0;
   for(int i=0; i<n; i++){
      presum+=a[i];
      int remove = presum-k;
      count+=m[remove];
      m[presum]+=1;
   }
   cout<<count<<endl;
}