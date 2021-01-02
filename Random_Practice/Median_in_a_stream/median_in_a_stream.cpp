#include<iostream>
#include<bits/stdc++.h>

struct Node{
    int val;
    priority_queue<int> *left;
    priority_queue<int, vector<int>, greater<int>> *right;
    int leftC;
    int rightC;
};

void insert(Node *n,int x){
    // if(x<=n->val){
    //     n->left->insert(x);
    //     (n->leftC)+=1;
    // }
    // else{
    //     n->right->insert(x);
    //     (n->rightC)+=1;
    // }
    
    if(x<=n->val && n->leftC > n->rightC){
        n->left->push(x);
        int y = n->left->top();
        n->left->pop();
        n->right->push(y);
        (n->rightC)+=1;
        n->val = (n->left->top() + n->right->top())/2;
    }
    else if(x<=n->val && n->leftC <= n->rightC){
        n->left->push(x);
        (n->leftC)+=1;
        if(n->leftC == n->rightC)
            n->val = (n->left->top() + n->right->top())/2;
        else
            n->val = n->left->top();
    }
    else if(x>n->val && n->leftC < n->rightC){
        n->right->push(x);
        int y = n->right->top();
        n->right->pop();
        n->left->push(y);
        (n->leftC)+=1;
        n->val = (n->left->top() + n->right->top())/2;   
    }
    else if(x>n->val && n->leftC >= n->rightC){
        n->right->push(x);
        (n->rightC)+=1;
        if(n->leftC == n->rightC)
            n->val = (n->left->top() + n->right->top())/2;
        else
            n->val = n->right->top();
    }
    
    //return n->val;
}    
  
int main() 
{ 
    Node n;
    priority_queue<int> max;
    priority_queue<int,vector<int>, greater<int>> min;
    
    n.val=0;
    n.left = &max;
    n.right = &min;
    n.leftC = 0;
    n.rightC = 0;
    int c;
    cin>>c;
    for(int i=0;i<c;i++){
        int x;
        cin>>x;
        if(n.leftC==0 && n.rightC == 0){
            n.left->push(x);
            n.leftC++;
            n.val=x;
        }
        else{
            insert(&n,x);
        }
        cout<<n.val<<"\n";
    }
    return 0;
}
