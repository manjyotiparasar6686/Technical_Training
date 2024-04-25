// MIlan prakash
#include<bits/stdc++.h>
using namespace std;

bool help(int index,vector<int>arr,int trgt,vector<vector<int>>&dp){
    
    if(trgt==0)return true;
    if(index==0) return(arr[0]==trgt);
    
    if(dp[index][trgt]!=-1)return dp[index][trgt];
    
    bool nottake=help(index-1,arr,trgt,dp);
    bool take=false;
    if(arr[index]<=trgt){
        take=help(index-1,arr,trgt-arr[index],dp);
    }
    return dp[index][trgt]=take|nottake;
}
bool issumpsbl(int n, vector<int>arr,int trgt){
    
    vector<vector<int>>dp(n,vector<int>(trgt+1,-1));
    return help(n-1,arr,trgt,dp);
}

int main(){
    int n;
    cout<<"enter the value of n= ";
    cin>>n;
    cout<<"enter teh array elements= ";
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"enter the target value= ";
    int trgt;
    cin>>trgt;
    
    int ans= issumpsbl(n,arr,trgt);
    if(ans==0)cout<<"false";
    else cout<<"true";
}
