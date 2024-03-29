#include<bits/stdc++.h>
using namespace std;
class Node {
public:
 int data;
 Node* left;
 Node* right;
 Node(int data){
     this->left=nullptr;
     this->right=nullptr;
     this->data=data;
     } 
};

void preorder(Node* root){
    if(root==nullptr)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    // milan prakash
    cout<<"pre order traversal :";
    
    // Constructing the sample binary tree
 Node* root = new Node(1);
 root->right = new Node(2);
 root->right->right = new Node(5);
 root->right->right->left = new Node(3);
 root->right->right->left->right = new Node(4);
 root->right->right->right = new Node(6);
 
 cout << "Preorder Traversal: ";
 preorder(root);
}