#include<bits/stdc++.h>
using namespace std;
//memoization used 
// int f(int n,vector<int>&dp){
//     if(n<=1) return n;
//     if(dp[n]!=-1) return dp[n];
     
//      return dp[n]=f(n-1,dp)+f(n-2,dp);

// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     cout<<f(n,dp);

//     return 0;
// }
//tabulation method 
int main(){
int n;
cin>>n;
int prev2=0;
int prev1=1;
for(int i=2;i<=n;i++){
  int curl=prev1+prev2;
  prev2=prev1;
  prev1=curl;
}
cout<<prev1;
    return 0;
}