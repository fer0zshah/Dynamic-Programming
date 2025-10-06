#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int f(vector<int>arr,int i,vector<int>&dp){
        if(i<0)return 0;
        if(i==0)return arr[i];
        if(dp[i]!=-1)return dp[i];
        int notpick=f(arr,i-1,dp)+0;
        int pick=f(arr,i-2,dp)+arr[i];
        return dp[i]= max(pick,notpick);
    }
    int findMaxSum(vector<int>& arr) {
        // code here
        int n;
        n=arr.size();
        stack<int>s;
        vector<int>nv(n-1);
        for(int i=0;i<n;i++)s.push(arr[i]);
        for(int i=n-2;i>=0;i--){
            nv[i]=s.top();
            s.pop();
        }

        vector<int>dp(n+1,-1);
        return max( f(arr,n-2,dp),f(nv,n-2,dp));
        
    }
};
int main(){
    Solution sol;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sol.findMaxSum(arr);
}