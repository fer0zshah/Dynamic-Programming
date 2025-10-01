#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int fibo(int n ,vector<int>&v){
    if(n<=1)return n;
    if(v[n]!=-1)return v[n];
    return v[n]=fibo(n-1,v)+fibo(n-2,v); 
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int n;
cin>>n;
vector<int>v(n+1,-1);
cout<<fibo(n,v);
 
 return 0; }