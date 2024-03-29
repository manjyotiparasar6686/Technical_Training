#include<bits/stdc++.h>
using namespace std;

void generateStr(string &str,int k){ // function too generate the new string 
    string newstr="";
    int len_str=str.length();
    int no_of_str=k/len_str; // no of times we need to add the saame string 
    int no_of_wrd_lft=k%len_str; // the remaning words left
    for(int i=0;i<no_of_str;i++){  
        newstr.append(str);
    }
    for(int i=0;i<no_of_wrd_lft;i++){
        char ch=str[i];
        newstr+=ch;
    }
    str=newstr;
}
int freqA(string str){ // function to count the occurance of a in the string
    int cnt=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a')cnt++;
    }
    return cnt;
}
int main(){
    // Milan prakash
    cout<<" sub-string problem"<<endl;
    cout<<"enter the string =";
    string str;
    getline(cin,str);
    cout<<"enter the length of string to be generated=";
    int k;
    cin>>k;
    cout<<"frequency of A in the string is :";
    generateStr(str,k);
    int cnt=freqA(str);
    cout<<cnt;
}
