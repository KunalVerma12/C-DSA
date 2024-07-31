// #include<iostream>   program to swap two numbers.
// using namespace std;
// void swap(int *a, int *b){
//     int c = *a;
//     *a = *b;
//     *b = c;
// }
// int main(){
//     int a,b;
//     cout<<"enter the first number : ";
//     cin>>a;
//     cout<<"enter the second number : ";
//     cin>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }


// 

// #include<iostream>
// using namespace std; //program to find the largest number in an array
// int main(){
//     int n;
//     cout<<"enter the size of the array : ";
//     cin>>n;
//     cout<<"enter the elements of the array : ";
//     int arr[n];
//     for(int i=0; i<=n; i++){
//         cin>>arr[i];
//     }
//     int largest = arr[0];
//     for(int i=0; i<=n; i++){
//         if(arr[i]>largest){
//             largest = arr[i];
//         }
//     }
//     cout<<"the largest number : ";
//     cout<<largest;
//     return 0;
// }



// #include<iostream>   program to incert an element in the array
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size of the array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elememts of the array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int position;
//     cout<<"enter the position of the new number : ";
//     cin>>position;
//     cout<<endl;
//     int newnumber;
//     cout<<"enter the new number : ";
//     cin>>newnumber;
//     cout<<endl;
//     for(int i=n-1; i>=position-1; i--){
//         arr[i+1]=arr[i];
//     }
//     arr[position-1] = newnumber;
//     cout<<"array arter intersection : "<<endl;
//     for(int i=0; i<n+1; i++){
//         cout<<arr[i]<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of elements of the array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the elements of the array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int position;
//     cout<<"enter the position : ";
//     cin>>position;
//     if(position>=n+1){
//         cout<<"deletion is not possible"<<endl;
//     }
//     else{
//         for(int i=position-1; i<n-1; i++){
//             arr[i] = arr[i+1];
//         } 
//         cout<<"final array"<<endl;
//         for(int i=0;i<n-1;i++){
//             cout<<arr[i]<<endl;s
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     for(int i=0; 1 ;i++){
//         cout<<"enter the number : ";
//         cin>>n;
//         if(n%7==0){
//             break;
//         }
//     }
//   return 0;
// }



// #include<bits/stdc++.h>     
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//       int n;
//       cout<<"enter the number : ";
//       cin>>n;
//       int sum=0,r;
//       while(n>0)
//       {
//           r=n%10;
//           sum=sum+r;
//           n=n/10;
//       }
//       cout<<"the sum of the digits of the number : ";
//       cout<<sum<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//       for(int j=1;j<=i;j++){
//         cout<<"*";
//       }
//       cout<<endl;
//     }
//   }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   string str;
//   getline(cin,str);
//   cout<<str;
// }


// #include<bits/stdc++.h>
// using namespace std;             //program to reverse the given array.
// int main(){
//   int n;
//   cout<<"enter the quantity of the array : ";
//   cin>>n;
//   int arr[n];
//   cout<<"enter the elements of the array "<<endl;
//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   for(int i=0; i<n/2; i++){
//     int firstnumber = arr[i];
//     int lastnumber = arr[n-i-1];
//     arr[n-i-1] = firstnumber;
// 	arr[i] = lastnumber;
//   }
//   for(int i=0; i<n; i++){
//     cout<<arr[i];
//   }
// }



// #include<bits/stdc++.h>
// using namespace std;     in this problem we are looking at how push_back works.
// int main(){
//     int n;
//     cin>>n;
//   string s;
//   cin>>s;
//   for(int i=0; i<n; i++){
//     s.push_back('a');
//   }
//   cout<<s;
//}


// #include<bits/stdc++.h>
// using namespace std;        one more method to add a character in a string.   
// int main(){                    
//     int n;
//     cin>>n;
//   string s;
//   cin>>s;
//   for(int i=0; i<n; i++){
//     s=s+'a';
//   }
//   cout<<s;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter the number of rows amd columns of the metrix : "<<endl;
//     cin>>a>>b;
//     int arr[a][b];
//     cout<<"enter the rows and column of the metrix : "<<endl;
//     for(int i=0; i<a; i++){
//         for(int j=0; j<b; j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0; i<a; i++){
//         for(int j=0; j<b; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int sr,sc;
//     for(int i=0; i<a; i++){
//         sr = sc = 0;
//         for(int j=0; j<b; j++){
//             sr=sr+arr[i][j];
//             sc=sr+arr[j][i];
//         }
//         cout<<sr<<" "<<sc;
//     }
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int even = 0;
    
//     for(int i = 0; i < n; i++) {
//         int weapons;
//         cin >> weapons;
        
//         if(weapons % 2 == 0) {
//             even++;
//         }
//     }
    
//     if(even > n - even) {
//         cout << "READY FOR BATTLE" << endl;
//     } else {
//         cout << "NOT READY" << endl;
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){             if you want to take a lot of input like array and you don't want to use array then use this
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int s;
//         cin>>s;
//     }
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		for(int i=0; i<n; i++){
// 	    char s;
// 		cin>>s;
// 	    if(s=='A'){
// 	        cout<<"L";
// 	    }
// 	    else if(s=='L'){
// 	        cout<<"A";
// 	    }
// 	    else if(s=='C'){
// 	        cout<<"G";
// 	    }
// 	    else if(s=='G'){
// 	        cout<<"C";
// 	    }
// 		cout<<endl;
// 	}
	 
// 	}
// }
//  these two are ans of the same question but the methods are different.
// #include <iostream>
// using namespace std;

// int main() {
// 	int t,i;
// 	cin>>t;
// 	while(t--){
// 	    int n;            
// 	    cin>>n;
// 	    char p[n];
// 	    for(i=0;i<n;i++){
// 	        cin>>p[i];
// 	        if(p[i]=='A') cout<<"T";
// 	        else if(p[i]=='T') cout<<"A";
// 	        else if(p[i]=='C') cout<<"G";
// 	        else if(p[i]=='G') cout<<"C";
	        

// 	    }
// 	    cout<<endl;
// 	}
// 	return 0;
// }



//  BY USING HASHING     ( it is a method which helps to reduce the time comploxity of a code )

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++){                //CASE1:-we are doing the code normally without using any hashing tech.
//             cin>>arr[i];                       //this is the code of finding the count of a number in an array.
//         }
//         int x;
//         cin>>x;
//         int c=0;
//         for(int i=0; i<n; i++){
//             if(arr[i]==x){
//                 c++;
//             }
//         }
//         cout<<c<<endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;              
// const int N=1e7+10;
// int m[N];                        //this (m=hash)  this is haching technique.

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//             m[arr[i]]++;
//         }
//         int x;
//         cin>>x;
//         cout<<m[x]<<endl;
//     }
// }



//another method of finding factorial 

// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+10;
// int fact[N];
// int main(){
//     fact[0]=fact[1]=1;
//     for(int i=2; i<N; i++){
//         fact[i]=fact[i-1]*i;
//     }
//     int n;
//     cin>>n;
//     cout<<fact[n]<<endl;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
//     while(t--){
//         int a,b,x,y;
//         cin>>a>>b>>x>>y;
//         int m=a;
//         if(a<b){
//             for(int i=1; i<=x; i++){
//                 a++;
//                 if(a==b){
//                     cout<<"yes"<<endl;
//                     break;
//                 }
//             }
//             if(a<b){
//                     cout<<"no"<<endl;
                    
//                 }
//         }
//         else if(a>b){
//             for(int i=1; i<=b; i++){
//                 a--;
//                 if(a==b){
//                     cout<<"yes"<<endl;
//                     break;
//                 }
//             }
//             if(a>b){
//                     cout<<"no"<<endl;
                
//                 }
//         }
//         else if(a=b){
//             cout<<"yes"<<endl;
//         }
//     }

// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int c=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             c++;
//         }
//     }
//     cout<<c<<endl;
// }



// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e3+10;
// int ar[N][N];
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cin>>ar[i][j];
//         }
//     }
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c,d;
//         int sum=0;
//         cin>>a>>b>>c>>d;
//         for(int i=a; i<c; i++){
//         for(int j=b; j<d; j++){
//             sum=sum+ar[i][j];
//         }
//     }
//     cout<<sum<<endl;
//     }
// }



//this is known a prefix sum tecq.

// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e3+10;
// int ar[N][N];
// int pf[N][N];
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cin>>ar[i][j];
//             pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
//         }
//     }
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c,d;
//         cin>>a>>b>>c>>d;
//         cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;

//     }
// }


// #include<bits/stdc++.h>
// using namespace std;      
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int c=0;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=2; i<n; i++){
//         if(arr[i]%i==0){
//             c++;
//             if(c==2){//||2*i>n){
//                 break;
//             }
//         }
//     }
//     for(int i=0; i<arr[i]; i++){
//     if(c==0){
//         cout<<"yes"<<endl;
//     }
//     else if(c==1){
//         cout<<"no"<<endl;
//     }
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int n,q;
//     cin>>n;
//     int arr[n+10];
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//     }
//     while(q--){
//     int l,r;
//     cin>>l>>r;
//     int gc=0;
//     for(int i=0; i<=l-1; i++){
//         gc=__gcd(gc,arr[i]);
//     }
//      for(int i=r+1; i<=n; i++){
//         gc=__gcd(gc,arr[i]);
//     }
//     cout<<gc;
//     }
// }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,q;
//         cin>>n>>q;
//         int a[n];
//         int forward[n];
//         int backward[n];
//         //forward[0]=backward[n+1];
//         for(int i=1; i<=n; i++){
//             cin>>a[i];
//         }
//         for(int i=1; i<=n; i++){
//             forward[i]=__gcd(forward[i-1],a[i]);
//         }
//         for(int i=n; i>=1; i--){
//             backward[i]=__gcd(backward[i+1],a[i]);
//         }
//         while(q--){
//             int l,r;
//             cin>>l>>r;
//             cout<<__gcd(forward[l-1],backward[r+1])<<endl;
//         }
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e7+10;
// long long int arr[N];
// int main(){
//     int n, q;
//     cin>>n>>q;
//     while(q--){
//         int a,b,d;
//         cin>>a>>b>>d;
//         for(int i=a; i<=b; i++){
//             arr[i]=arr[i]+d;
//         }
//     }
//     long long mx=arr[n];
//     for(int i=1; i<=n; i++){
//         if(arr[i]>arr[n]){
//             mx=arr[i];
//         }
//     }
//     cout<<mx<<endl;
// }



// #include<bits/stdc++.h>        //by using prefix sum
// using namespace std;
// const int N=1e7+10;
// long long int arr[N];
// int main(){
//     int n, q;
//     cin>>n>>q;
//     while(q--){
//         int a,b,d;
//         cin>>a>>b>>d;   
//         arr[a] += d;
//         arr[b+1] -= d;
//     }
//     for(int i=1; i<=n; i++){
//         arr[i]=arr[i-1]+arr[i];
//     }
//     long long mx=arr[n];
//     for(int i=1; i<=n; i++){
//         if(arr[i]>arr[n]){
//             mx=arr[i];
//         }
//     }
//     cout<<mx<<endl;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     int a[n], b[m];
    

//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
    
//     for(int j = 0; j < m; j++) {
//         cin >> b[j];
//     }
    
 
//         for(int i = 0; i < n; i++) {
//             bool found = false;
//             for(int j = 0; j < m; j++) {
//                 if(a[i] == b[j]) {
//                     found = true;
//                     break;
//                 }
//             }
//             if(!found)
//                 cout << a[i] << " ";
//         }
//         for(int j = 0; j < m; j++) {
//             bool found = false;
//             for(int i = 0; i < n; i++) {
//                 if(b[j] == a[i]) {
//                     found = true;
//                     break;
//                 }
//             }
//             if(!found)
//                 cout << b[j] << " ";
//         }
//     }



// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e6+10;
// int arr[N];
// int main(){
//     int n,k;
//     cin>>n>>k;
//     for(int i=1; i<=n; i++){
//         cin>>arr[i];
//         //arr[i]=arr[i-1]+arr[i];
//     }
//     bool found = false;
//     for(int i=1; i<=n; i++){
//         if((arr[i-1]+arr[i])==k){
//             found=true;
//             cout<<"yes"<<endl;
//             break;
//         }
//     }
//     if(!found){
//         cout<<"no"<<endl;
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;        //it gives the largest sum of the of the k elements of the array.
// int main(){
//     int n, m, k;
//     cin>>n>>k;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-1; j++){
//             if(a[j]>a[j+1]){
//                 m=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=m;
//             }
//         }
//     }
//     int sum=0;
//     for(int i=0; i<k; i++){
//         int b=a[n-i-1];
//         sum+=b;
//     }
//     cout<<sum<<endl;
// }


// #include<bits/stdc++.h>   program to find whether the number is in the array or not.
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     cin>>k;
//     bool found = false;
//     for(int i=0; i<n; i++){
//         if(k==a[i]){
//             found=true;
//             cout<<"yes"<<endl;
//             break;
//         }
//     }
//     if(!found){
//         cout<<"no"<<endl;
//     }
// }



//program to eleminate the last number from the array every time.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     while (n > 0) {
//         for(int i = 0; i <= n - 1; i++) {
//             cout << a[i] <<" ";
//         }
//         cout<<endl;
//         n--; // Decrement n to exclude the last element in the next iteration
//     }
//     return 0;
// }







//program to play josephus

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
       
//     }
//     cin>>k;
//     int idx=0;
//     while(n>0){
//         idx=(idx + k - 1)%n;
//         for(int i=idx; i<n-1; i++){
//             a[i]=a[i+1];
//         }
//         n--;
//     }
//     cout<<a[0];
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     for(int i=0; i<n; i++){
//         int greater_element=-1;
//         for(int j=i+1; j<n; j++){
//             if(a[i]<a[j]){
//                 greater_element=a[j];
//                 break;
//             }
//         }
//         cout<<greater_element<<" ";
//     }


// }




//EXAMPLE:- to reverse the caracters of the strings and then replace them with the help of their assci value
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s;
// 	    if(n%2==1){
// 	        for(int i=0; i<n-1; i=i+2){
// 	            swap(s[i],s[i+1]);
// 	        }
// 	    }
// 	    else{
// 	        for(int i=0; i<n; i=i+2){
// 	            swap(s[i],s[i+1]);
// 	        }
// 	    }
// 	    for(int i=0; i<n; i++){
// 	        int a=s[i];
// 	        s[i]=(122-(a%97));
// 	    }
// 	    cout<<s<<endl;
// 	}
// }






/*
TOPIC RECURSION
so it is basically when a function calls it self in the same function is called recursion.
example
#include<bits/stdc++.h>
using namespace std;
void func(int n){
    if(n==0) return;
    cout<<n<<endl;
    func(n-1);         
                          EXAMPLE
                          func(5) is calling 5
                          func(4) is calling 4
                          func(3) is calling 3
                          func(2) is calling 2
                          func(1) is calling 1
                          and ultimately when n become equal to 0 then function returns.
}
int main(){
    func(5);
}
#include<bits/stdc++.h>      in the first case the output will be 5 4 3 2 1                            
                             but in the second case the output of this code will be 1 2 3 4 5
                             it is because, now the function is calling itself before the cout statement
                             so, first of all the function will call itself completely and the cout.
using namespace std;         
void func(int n){
    if(n==0) return;
    func(n-1);
    cout<<n<<endl;         
}
int main(){
    func(5);
}

EXAMPLE:-  for finding factorial of a number

#include<bits/stdc++.h>  
int fact(int n){
    if(n==0) return 1;
    return fact(n-1)*n;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}

It checks if n is equal to 0. Since it's not (4 != 0), it proceeds to the next step.
It recursively calls fact(4-1) which is fact(3).
Inside fact(3):
It recursively calls fact(3-1) which is fact(2).
Inside fact(2):
It recursively calls fact(2-1) which is fact(1).
Inside fact(1):
It recursively calls fact(1-1) which is fact(0).
Inside fact(0):
Since n is equal to 0, it returns 1 (base case).
The result of fact(1) is 1.
fact(2) multiplies 2 with the result of fact(1), which is 2 * 1 = 2.
The result of fact(2) is 2.
fact(3) multiplies 3 with the result of fact(2), which is 3 * 2 = 6.
The result of fact(3) is 6.
fact(4) multiplies 4 with the result of fact(3), which is 4 * 6 = 24.
The result, 24, is printed by the main function.


EXAMPLE:- sun of n numbers

#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return sum(n-1) + n;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
}


EXAMPLE:-find the sum of the elements of the array

#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
    if(n<0) return 0;
    return sum(arr,n-1)+arr[n];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n-1);
}


EXAMPLE:-to find the digit sum of a number

#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    if(n==0) return 0;
    return digit_sum(n/10) + n % 10;
}

int main(){
    int n;
    cin>>n;
    cout<<digit_sum(n);
}

this is how it is done

digit_sum(12345) = digit_sum(1234) + 5
digit_sum(1234) = digit_sum(123) + 4
digit_sum(123) = digit_sum(12) + 3
digit_sum(12) = digit_sum(1) + 2
digit_sum(1) = digit_sum(0) + 1


EXAMPLE:- program to find the fibonicc of a number.

#include<bits/stdc++.h>       
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
}


EXAMPLE:- program to find the fibonicc of n numbers.


#include<bits/stdc++.h>       
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
    cout<<fibo(i);
    }
}



EXAMPLE:- program to play josephus


#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k-1) % n + 1;
}

int main() {
    int n, k;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the elimination count: ";
    cin >> k;
    cout << "The chosen place is " << josephus(n, k) << endl;
    return 0;
}






*/









/*
TOPIC:- Sorting

a.) Selection sort  (this sort will help you to arrange the elements of the array in an order)

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
        int smallest_element = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[smallest_element]){
                smallest_element = j;
            }
        }
        swap(a[i],a[smallest_element]);      //this function is used for swaping
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}





*/







/*

TOPIC:- STL

a.) Pair  (so pair is basically when we want to make a pair of two data types it can be int string, int double, string double or any other)
          (so it is basically used to mentain relation between two variables of whether same or different kind)

#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;             :- this is the way to write a pair and p is the name of the variable being declared. You can think of p as a container that 
                                       will hold a pair of values, where the first value is an integer and the second value is a string.
    p=make_pair(2,"abcd");            
    p={2,"abcd"};                   :-these are the three ways of of giving the values to the variables.
    p.first=2;
    p.second="abcd";    

    cout<<p.first<<" "<<p.second<<endl;   :- this is how you print the values.

    pair<int,string> p1;            :- like this you can change the values of the variables like here I changed the value of p to p1, you can change it by writing p 
                                       instade of pi as well.
    p1.first=3;
    cout<<p1.first<<" "<<p1.second;

    pair<int,string> &p1 = p;        :- if you want to change the value like this then you have to write &p1 because you have to use the reference to change the value 
                                        otherwise it will write the previous value.
    p1.first=3;
    cout<<p.first<<" "<<p.second;
}

EXAMPLE:- program to print and swap the pair of arrays

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3};
    int b[] = {2,3,4};

    pair<int,int> p_array[3];               :- here thid=s 3 shows the size of the array like how many pair of elements it can store, here it is three so it can store three pair of elements

    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0],p_array[2]);
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}


We can take input from the user as well

#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string> p;
    cin>>p.first>>p.second;             :-here we are taking input from the user.
    cout<<p.first<<" "<<p.second;
}



b.)Vectors      (vectors are sort of arrays)

EXAMPLE:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;                              :- n is the size of the loop.
    cin>>n;
    for(int i=0; i<n; i++){
        int x;                          :- x is the elements you going to take.
        cin>>x;
        v.push_back(x);                 :- v.push_back(x) will help to put the new value at the end of the vector.
    }
    cout<<"size:-"<<v.size()<<endl;     :- v.size is providing the current size of the vector.
    for(int i=0; i<v.size(); i++){      :- this loop helps to print the values of the vector.
        cout<<v[i]<<endl;
    }
}


:-Doing it with functions

#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> v){
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    printvector(v);
}


#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int> v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        printvector(v);          :- 
        v.push_back(x);
    }
    printvector(v);
}


#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        printvector(v);
    }
}

EXAMPLE:-

#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v(10);                  :- we can also give size to a vector and here printvector(v) will print 0 ten times because we have not given any valure.
    printvector(v);                        

    vector<int> r(10,3);                :- here we are giving size and value to the vector so it will print 3 instead of 0, ten times
    r.assign(10,3);                      :- we can use r.assign(10,3) instead of r(10,3) as well.
    printvector(r);

    vector<int> m(10);                  :- here we are giving size to the vector and m.push_back(7) will print 7 after ten 0 therefore the size will be 11 
    m.push_back(7);                        
    printvector(m);
}


EXAMPLE:-

#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    printvector(v);
    v.pop_back();                     :- .pop_back helps to pop the last element of the vector, like the are two elements 7 and 6 so it will pop 6.
    printvector(v);
    
}



#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    vector<int> v2=v;                :- here we are making a copy of v, but if you make any changes in any of the vector that change will only be reflected in that vector
    v2.push_back(5);
    printvector(v);
    printvector(v2);
}

NOTE:- if you want to add a value from the function to the main function then use empresenr(&)
#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> &v){             :- here we are using & in front of v.
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    v.push_back(2);                           :- now this value will go as a reference to the mane function.
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    vector<int> v2=v;
    v2.push_back(5);
    printvector(v);
    printvector(v);
    printvector(v2);
}



NOTE:- here we are printing the stored value of v i.e 2
#include<bits/stdc++.h>
using namespace std;


void printvector(vector<int> &v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    vector<int> &v2=v;
    v2.push_back(5);
    printvector(v);
    printvector(v);
    printvector(v);
    printvector(v);
    printvector(v2);            :- here v2=v because we have used (vector<int> &v2=v) &v2=v. i.e pass by reference. 
}


EXAMPLE:- to print strings using vectors
#include<bits/stdc++.h>
using namespace std;


void printvector(vector<string> v){
    cout<<"size:-"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<string> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    printvector(v); 
}




#include<bits/stdc++.h>
using namespace std;


int main(){
   vector<int> v;

   v.assign(9,1);
   //or vector<int> v(9,1);
   cout<<"the contents are: ";
   for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
      cout<<endl;
   }

   v.push_back(4);
   int vo=v.size();
   cout<<"last element:- "<<v[vo-1]<<endl;

   v.pop_back();
   cout<<"now the contents are:- ";
   for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
      cout<<endl;
   }

   v.insert(v.begin(),7);                             :- here .begin() means the first element position.
   cout<<"first element is:- "<<v[0]<<endl;

   v.insert(v.end(),6);                               :- here .end() means the last element position
   cout<<"last elsement is:- "<<v[v.size()-1]<<endl;

   v.clear();
   cout<<"now the size is:- "<<v.size();
}



EXAMPLE:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;

    for(int i=1; i<=5; i++){
        v.push_back(i);
    }
    cout<<"output from the beginning to the end :- ";
    for(auto i=v.begin(); i!=v.end(); i++){                 :- auto is a data type which can be used in place if int, string, double etc. 
        cout<<*i<<" ";
    }
}



EXAMPLE:- Some functions of vectors
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;

    for(int i=1; i<=10; i++){
        v.push_back(i);
    }
    cout<<"size of the vector:- "<<v.size()<<endl;
    cout<<"capacity of the vector:- "<<v.capacity()<<endl;
    cout<<"maximum size of the vector:- "<<v.max_size()<<endl;
    v.resize(5);
    cout<<"vector size after resizing:- "<<v.size()<<endl;
    if(v.empty()==false){
        cout<<"vector is not empty";
    }
    else{
        cout<<"vector is empty";
    }
}


EXAMPLE:- vectors and pairs
#include<bits/stdc++.h>
 using namespace std;
 void printvector(vector<pair<int,int>> v){
    cout<<"size of the vector:- "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;;
    }
    cout<<endl;
 }

 int main(){
    vector<pair<int,int>> v ={{1,2}, {2,3}, {4,5}};
    printvector(v);
 }


EXAMPLE:-taking input from the user in case of pair of vector.

#include<bits/stdc++.h>
 using namespace std;
 void printvector(vector<pair<int,int>> v){
    cout<<"size of the vector:- "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;;
    }
    cout<<endl;
 }

 int main(){
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        //or v.push_back(make_pair(x,y));
    }
    printvector(v);
 }


EXAMPLE:- array of vector
#include<bits/stdc++.h>
 using namespace std;
 void printvector(vector<int> v){
    cout<<"size of the vector:- "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }

 int main(){
    int N;                                     :- N is number of arrays we want to take
    cin>>N;
    vector<int> v[N];
    for(int i=0; i<N; i++){
        int n;                                 :-n is the number of elements of the array
        cin>>n;
        for(int j=0; j<n; j++){
            int x;                             :-value of the elements in the array
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0; i<N; i++){
        printvector(v[i]);                     :-we have to call N times so to get all the arrays
    }
 }


EXAMPLE:- vector inside vector                  (in the previous case, array of vector, we can only change the value of column but in case of vector of vector we can 
                                                 change both rows and columns)
#include<bits/stdc++.h>
 using namespace std;
 void printvector(vector<int> v){
    cout<<"size of the vector:- "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }

 int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0; i<N; i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);                       :- this gives one more value to the first row 
    v.push_back(vector<int> ());              :- this is giving one more vector of size 0,    (vector<int> () this is the expression of a empty vector)
    for(int i=0; i<v.size(); i++){            :- we can use N also instead of v.size
        printvector(v[i]);
    }
    cout<<v[0][1];                            :- here v[0] in a vector, consider it as a vector
 }



:- another way

#include<bits/stdc++.h>
 using namespace std;
 void printvector(vector<int> v){
    cout<<"size of the vector:- "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }

 int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0; i<N; i++){
        int n;
        cin>>n;
        v.push_back(vector<int> ()); 
        for(int j=0; j<n; j++){
            int x;
            cin>>x;
            v[i].push_back(x);                  :- here we can use v[i] because we have an empty vector (vector<int> ())
        }
    } 
    for(int i=0; i<v.size(); i++){
        printvector(v[i]);
    }
   
 }


EXAMPLE:-taking the input from the user in vectors by two methods
a.)
#include<bits/stdc++.h>
 using namespace std;
 void printvector(vector<int> v){
    cout<<"size of the vector:- "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }

 int main(){
    int N;
    cin>>N;
    vector<int> v;
    for(int i=0; i<N; i++){
        int x;
        cin>>x;
        v.push_back(x);
     }
    printvector(v);
 }



b.)
#include<bits/stdc++.h>
 using namespace std;
 void printvector(vector<int> v){
    cout<<"size of the vector:- "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }

 int main(){
    int N;
    cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
         cin>>v[i];
     }
    printvector(v);
 }



EXAMPLE:-using iterators in vectors
#include<bits/stdc++.h>

 int main(){
    int N;                                    
    cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
            cin>>v[i];
    }
    cout<<endl;
    vector<int> ::iterator it;                     :- this is a sintax of an iterator
    it=v.begin();                                  :- v.begin() is pointing towords the first element of the vector
    cout<<*it<<endl;                               :- * helps to get the value from the vector
    it=v.end();                                    :- v.end() point towords the last+1 element 
    cout<<*(it-1)<<endl;                           :- here it is printing the last element of the vector
}
 

EXAMPLE:-printing the elements with the help of iteratires
 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;                                    
    cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
            cin>>v[i];
    }
    vector<int> ::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;
    }
 }


EXAMPLE:- using pairs in iterators and then printing it
#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    int N;                                    
    cin>>N;
    vector<pair<int,int>> v;
    for(int i=0; i<N; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        
    }
    cout<<endl;
    vector<pair<int,int>> ::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;              
    }                                                                     :- two ways of printing iterators only in pairs
    for(it=v.begin(); it!=v.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
 }



EXAMPLE:- print the values of the vetor using another method
#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int N;                                    
    cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin>>v[i];
    }
    for(int value : v){                   :- this is the way to do it, 
        cout<<value<<" ";                 :- here value is just the copy of the the integers, it is not the exect velue, so if you want to change the velues then use &.
    }
    cout<<endl;
 }


EXAMPLE:- using & and increasing the values by 1
#include<bits/stdc++.h>
 using namespace std;
 int main(){
    int N;                                    
    cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
        cin>>v[i];
    }
    for(int &value : v){
       value++;
    }
    for(int value : v){
       cout<<value<<" ";
    }
    cout<<endl;
 }



EXAMPLE:- using the same this in pairs
#include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    
    for(pair<int,int> value : v){
        cout<<value.first<<" "<<value.second;
    }
    cout<<endl;
 }



AUTO IT

NOTE:- in place of writing the whole initilisation of iterators we can use auto it;

EXAMPLE:-
#include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;                                    
    cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
            cin>>v[i];
    }
    for(auto it=v.begin(); it!=v.end(); it++){                :- here we used auto in place of vector<int> ::iterator it;
        cout<<*it<<endl;
    }
 }


 OR

 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int N;                                    
    cin>>N;
    vector<int> v(N);
    for(int i=0; i<N; i++){
            cin>>v[i];
    }
    for(auto it : v){                
        cout<<it<<endl;
    }
 }




EXAMPLE:-
#include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    int N;                                    
    cin>>N;
    vector<pair<int,int>> v;
    for(int i=0; i<N; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        
    }
    cout<<endl;
    
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;              
    }                                                                     
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
 }

 OR

 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    int N;                                    
    cin>>N;
    vector<pair<int,int>> v;
    for(int i=0; i<N; i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        
    }
    cout<<endl;
    
    for(auto it : v){
        cout<<(it).first<<" "<<(it).second<<endl;              
    }                                                                     
    
 }



EXAMPLE:- auto in place of pair<int,int>
#include<bits/stdc++.h>
 using namespace std;
 int main(){
    vector<pair<int,int>> v = {{1,2},{2,3},{3,4}};
    
    for( auto value : v){
        cout<<value.first<<" "<<value.second;
    }
    cout<<endl;
 }



EXAMPLE:- sort the elements in vectors
#include<bits/stdc++.H>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());                   - this is doing sorting.
    for(auto it : v){
        cout<<it<<" ";
    }
}



#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0; i<n; i++){
	        cout<<a[i]<<" ";
	    }
	}
}





c.) MAPS   (maps always store and print the values in a sorted order there initilisation is same as pairs)

EXAMPLE:- 
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> m;                          :-initilisation of maps
    m[1] = "abc";
    m[5] = "bbc";
    m[3] = "abd";
    //or
    m.insert({4,"bmc"});
    //or
    m.insert(make_pair(2,"mnv"));
    // map<int,string> :: iterator it;
    // for(it=m.begin(); it!=m.end(); it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    //or                                                    :- these are two values of printing the values of maps
    for(auto it : m){                                       :- here it is just the copy of the values, but we can use & to fight back.
        cout<<(it).first<<" "<<(it).second<<endl;
    }
}


EXAMPLE:- using .find() function
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "bbc";
    m[3] = "abd";
    m.insert({4,"bmc"});
    auto it = m.find(3);                                      
    if(it==m.end()){
        cout<<"no value"<<endl;
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }-
}


EXAMPLE:- using .erase() function
#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> m){
    cout<<"size:-"<<m.size()<<endl;
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "bbc";
    m[3] = "abd";
    m.insert({4,"bmc"});
    m.erase(3);
    print(m);
}

EXAMPLE:- using both .find() and .erase() operators
#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> m){
    cout<<"size:-"<<m.size()<<endl;
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "bbc";
    m[3] = "abd";
    m.insert({4,"bmc"});
    auto it = m.find(5);
    m.erase(it);
    print(m);
}


EXAMPLE:- using .clear() operator
#include<bits/stdc++.h>
using namespace std;

void print(map<int, string> m){
    cout<<"size:-"<<m.size()<<endl;
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    map<int, string> m;
    m[1] = "abc";
    m[5] = "bbc";
    m[3] = "abd";
    m.insert({4,"bmc"});
    m.clear();
    print(m);
}



EXAMPLE:-given N strings, print unique strings in lexiographical order with their frequency
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;                                                      :- here it is calculating the frequency of the strings 
    }
    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}



EXAMPLE:-given a list of n words count the number of words that appear exectly 2 times
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string,int> m;
    string s;
    
    for(int i = 0; i < n; i++) {
        cin >> s;
        m[s]++;
    }

    int count = 0;
    for(auto it : m) {
        if(it.second >= 2) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}




EXAMPLE:- (very impartent question) Print n lines, which are system responses to the requests: OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> names;

    for (int i = 0; i < n; ++i) {
        string name;
        cin >> name;

        if (names.find(name) == names.end()) {
            // Name doesn't exist, so register it
            names[name]=1;
            cout << "OK" << endl;
        } else {
            // Name already exists, find a new name
            int count = names[name]++;
            string newName = name + to_string(count);                    
            while (names.find(newName) != names.end()) {
                newName = name + to_string(++count);
            }
            names[newName] = 1;
            cout << newName << endl;
        }
    }

    return 0;
}


or(this is the batter way)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int> m;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(m.find(s)==m.end()){
            m[s]++;
            cout<<"ok";
        }
        else{
            cout<<s<<m[s];
            m[s]++;
        }
        cout<<endl;
    }
}




EXAMPLE:- Find the minimum number of moves required so that all the cards remaining on the table have the same number written on them.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> m;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            m[x]++;
        }
        int max_freq = 0;
        for(auto it : m){
            if(it.second > max_freq){
                max_freq = it.second;
            }
        }
        cout << n - max_freq << endl;
    }
}



EXAMPLE:- didderence between counting the strings and counting the characters of a single string
1.) Counting the characters of the string 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        map<char, int> m;
        
        for (char c : s) {
            m[c]++;
        }
        
        bool ans = true;
        for (auto it : m) {
            if (it.second % 2 != 0) {
                ans = false;
                break;
            }
        }
        
        if (ans) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}



2.) Counting the number of strings 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map<string, int> m;
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            m[s]++;
        }
        bool ans = true;
        for(auto it : m) {
            if(it.second % 2 != 0) {
                ans = false;
                break;
            }
        }
        if(ans) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}






b.) UNORDERED MAPS       
change compared to maps
1. it do not sort the elements, it just print it in hash table order
2. inbuilt implementation
3. time complexity 
4. valid keys datatype



EXAMPLE:-
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, string> m;                          :-initilisation of maps
    m[1] = "abc";
    m[5] = "bbc";
    m[3] = "abd";
    //or
    m.insert({4,"bmc"});
    //or
    m.insert(make_pair(2,"mnv"));
    // map<int,string> :: iterator it;
    // for(it=m.begin(); it!=m.end(); it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }
    //or                                                    
    for(auto it : m){                                       
        cout<<(it).first<<" "<<(it).second<<endl;
    }
}
note:-rest every thing is same



EXAMPLE:- given n strings and q queries in each query you are given a string print frequency of the string.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<string,int> m;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        m[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}






STACKS (LIFO :- last in first out)


EXAMPLE :- some functions of stacks

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}


EXAMPLE:- 


#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    int n;
    cin>>n;
    for(int i=0; i< n; i++){
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}



EXAMPLE:- you are given a string exp representing an expression
         if ((a+b)+(c+d)) = false
         if (a+b)+((c+d)) = true

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char> ch;
    string str;
    getline(cin,str);
    for(auto m : str){
        if(m==')'){
            if(ch.top()=='('){
                cout<<"true";
                return 0;
            }
            else{
                while(ch.top()!='('){
                    ch.pop();
                }
                ch.pop();
            }
        }
        else{
            ch.push(m);
        }
    }
    cout<<"false";
}



EXAMPLE:- balenced brackets

#include<bits/stdc++.h.>
using namespace std;
int main(){
    stack<char> ch;
    string str;
    getline(cin,str);
    for(auto m : str){
        if(m=='(' || m=='{' || m=='['){
            ch.push(m);
        }
        else if(m==')'){
            if(ch.empty() || ch.top()!='('){
                cout<<"false";
                return 0;
            }
            else{
                
                ch.pop();
            }
        }
        else if(m=='}'){
            if(ch.empty() || ch.top()!='{'){
                cout<<"false";
                return 0;
            }
            else{
                
                ch.pop();
            }
        }
        else if(m==']'){
            if(ch.empty() || ch.top()!='['){
                cout<<"false";
                return 0;
            }
            else{
                ch.pop();
            }
        }
    }
    if(!ch.empty()){
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}

OR by functions

#include <bits/stdc++.h>
using namespace std;

bool vansh(stack<char>& ch, char v) {
    if (ch.empty() || ch.top() != v) {
        return false;
    } else {
        ch.pop();
        return true;
    }
}

int main() {
    stack<char> ch;
    string str;
    getline(cin, str);
    for (auto m : str) {
        if (m == '(' || m == '{' || m == '[') {
            ch.push(m);
        } else if (m == ')') {
           bool val = vansh(ch, '(');
           if (!val) {
               cout << "false";
               return 0;
           }
        } else if (m == '}') {
           bool val = vansh(ch, '{');
           if (!val) {
               cout << "false";
               return 0;
           }
        } else if (m == ']') {
           bool val = vansh(ch, '[');
           if (!val) {
               cout << "false";
               return 0;
           }
        }
    }
    if (!ch.empty()) {
        cout << "false";
    } else {
        cout << "true";
    }
    return 0;
}



EXAMPLE:- to find the next greater element

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> v;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int a[n];  
    v.push(arr[n-1]);
    a[n-1] = -1;

    for (int i = n-2; i >= 0; i--) {
        while (!v.empty() && arr[i] >= v.top()) {
            v.pop();
        }
        if (v.empty()) {
            a[i] = -1;
        } else {
            a[i] = v.top();
        }
        v.push(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}



one more way of doing this question
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int> s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a[n];
    s.push(0);                                                  :- 0 in the position of the element in the stack
    for(int i=1; i<n; i++){
        while(s.size()>0 && arr[i]>arr[s.top()]){
            int pos = s.top();
            a[pos]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        int pos = s.top();
        a[pos]=-1;
        s.pop();
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}


EXAMPLE:- question of a stack span
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<int> s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a[n];
    s.push(0);
    a[0]=1;
    for(int i=1; i<n; i++){
        while(s.size()>0 && arr[i]>arr[s.top()]){
            s.pop();
        }
        if(s.empty()){
            a[i]=i+1;
        }
        else{
            arr[i] = i-s.top();
        }
        s.push(i);
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

*/




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s;
// 	    if(n%2==1){
// 	        for(int i=0; i<n-1; i=i+2){
// 	            swap(s[i],s[i+1]);
// 	        }
// 	    }
// 	    else{
// 	        for(int i=0; i<n; i=i+2){
// 	            swap(s[i],s[i+1]);
// 	        }
// 	    }
// 	    for(int i=0; i<n; i++){
// 	        int a=s[i];
// 	        s[i]=(122-(a%97));
// 	    }
// 	    cout<<s<<endl;
// 	}
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         map<int, int> m;
//         for(int i = 0; i < n; i++){
//             int x;
//             cin >> x;
//             m[x]++;
//         }
//         int max_freq = 0;
//         for(auto it : m){
//             if(it.second > max_freq){
//                 max_freq = it.second;
//             }
//         }
//         cout << n - max_freq << endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
    
//     while (T--) {
//         int N;
//         string S;
//         cin >> N >> S;
        
//         int count1 = count(S.begin(), S.end(), '1');
//         int count0 = N - count1; 
        
//         int minOperations = min(count1, count0);
        
//         cout << minOperations << endl;
//     }
    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
    
//     while (T--) {
//         int N;
//         cin >> N;
        
//         int count_odd = (N + 1) / 2; 
//         int count_even = N / 2;      
        
//         int valid_pairs = 2 * count_odd * count_even;
        
//         cout << valid_pairs << endl;
//     }
    
//     return 0;
// }

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
    for(int i=1; i<n; i++){
        if(a[i]!=a[j]){
            a[j+1]=a[i];
            j++;
        }
    }
    for(int k=0; k<=j; k++){
        cout<<a[k]<<endl;
    }
}