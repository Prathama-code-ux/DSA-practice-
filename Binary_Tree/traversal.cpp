#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

node* createNode(int x){
    node* newNode = new node;
    newNode -> data = x;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

node* createTree(){
    int value;
    cout << "Enter root value:";
    cin >> value;

    node* root = createNode(value);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* current = q.front();
        q.pop();

        cout << "Enter left child of " << current -> data << "(-1 for no child ):";
        cin >> value;

        if(value != -1){
            current -> left = createNode(value);
            q.push(current -> left);
        }

        cout << "Enter right child of " << current -> data << "(-1 for no child ):";
        cin >> value;

        if(value != -1){
            current -> right = createNode(value);
            q.push(current -> right);
        }
    }
    return root;
}






