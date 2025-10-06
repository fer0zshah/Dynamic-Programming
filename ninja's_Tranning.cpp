#include<bits/stdc++.h>
using namespace std;

int f(vector<vector<int>>&points,int last,int i,vector<vector<int>>&dp){
    if(i==0){
        int maxi=0;
        for(int j=0;j<3;j++){
            if(j!=last){
                maxi=max(maxi,points[0][j]);
            }
        }
        return maxi;
    }
    if(dp[i][last]!=-1)return dp[i][last];
    int maxi=0;
    for(int j=0;j<3;j++){
        if(j!=last){
            maxi=max(maxi,points[i][j]+f(points,j,i-1,dp));
        }
    }
    return dp[i][last]=maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{  
     vector<vector<int>>dp(n+1,vector<int>(4,-1));
    return f(points,3,n-1,dp);
    // Write your code here.

}