#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // calculate the maximum sum with out adjacent
      int f(vector<int>&arr,int i,vector<int>&dp){
        if(i==0)return arr[i];
        if(i<0)return 0;
        if(dp[i]!=-1)return dp[i];
        int pick=arr[i]+f(arr,i-2,dp);
        int notpick=0+f(arr,i-1,dp);
        return  dp[i]= max(pick,notpick);
        
    }
    int findMaxSum(vector<int>& arr) {
        // code here
         int n=arr.size();
        vector<int>dp(n+1,-1);
        return f(arr,n-1,dp);
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