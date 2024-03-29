#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr,int n){
    
    
    int i=0;
    int j=n-1;
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
void print(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    reverse(arr,n);
    cout<<"array elements after reversal is :";
    print(arr,n);
    
    
}