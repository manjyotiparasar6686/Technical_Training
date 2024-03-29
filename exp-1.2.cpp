#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr,int n,vector<int>&ans, int l){
    
    
    for (int i = 0; i < n; i++) {
    int newIndex = (i + n - l) % n;
    ans[newIndex] = arr[i];
 }
}
void print(vector<int>&ans,int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    cout<<"array reversal program:"<<endl;
    int n;
    cout<<"enter the length of the array=";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the array elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans(n);
    int l;
    cout<<"enter the position of l= ";
    cin>>l;
    reverse(arr,n,ans,l);
    cout<<"array elements after reversal is :";
    print(ans,n);
    
    
}