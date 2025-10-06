#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

class Solution {
  public:
     int cost(vector<int>&heights,int i,vector<int> &dp){
        if(i==0)return 0;
        if(dp[i]!=-1)return dp[i];
        int left=cost(heights,i-1,dp)+abs(heights[i]-heights[i-1]);
        int right=INT_MAX;
        if(i>1) right=cost(heights,i-2,dp)+abs(heights[i]-heights[i-2]);
        return dp[i]=min(left,right);
    }
    int minCost(vector<int>& heights) {
        // Code here
        int n=heights.size();
        vector<int>dp(n+1,-1);
        return cost(heights,n-1,dp);
    }
};
 
int main() {
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    Solution sol;
    int n;
    cin>>n;
    vector<int>heights(n);
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
 cout<<sol.minCost(heights)<<endl;
 return 0; }
