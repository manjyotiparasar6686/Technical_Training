#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=next;
    }
};

void insertathead(Node* &head,Node* &tail,int d){
    Node* newnode=new Node(d);
    
    newnode->next=head;
    head=newnode;
}

void print(Node* &head){
    Node * temp=head;
    while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}

int main(){
// Milan prakash
Node *head=nullptr;
Node *tail=nullptr;

cout<<"enter the number to inserted at head";
for(int i=0;i<5;i++){
int val;
cin>>val;
insertathead(head,tail,val);
}

print(head);
cout<<endl;

return 0;
// code by Milan prakash

}
