#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
void f(int i,vector<int>&v,vector<int>&s,int target,int n,int sum){
    if(i>=n){
        if(sum==target){
            for(auto it:s)cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }
    s.push_back(v[i]);
    sum+=v[i];
    f(i+1,v,s,target,n,sum);
    s.pop_back();
    sum-=v[i];
    f(i+1,v,s,target,n,sum);
}
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<int>v={1,2,1};
    vector<int>s;
    int target=2,n=3,sum=0;
    f(0,v,s,target,n,sum);
 
 return 0; }