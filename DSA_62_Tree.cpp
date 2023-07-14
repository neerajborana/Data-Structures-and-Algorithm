#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node *buildtree(node *root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1)
        return NULL;
    
    cout<<"Enter the data for left"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for right"<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}

void levelordertraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }}
    }
}void levelordertraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }}
    }
}
void buildfromlevelordertraversal(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }}
    }
}
void inorder(node*root){
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node*root){
    if(root==NULL)
    return;

    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL)
    return;

    
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    cout<<"Namastey Duniya \n"<<endl;
    // 1 3 7 -1 -1 11 -1 -1 5 7 -1 -1 -1
    node *root=NULL;
    root=buildtree(root);
    cout<<"printing"<<endl;
    levelordertraversal(root);
    inorder(root);
    preorder(root);
    postorder(root);
    return 0;
}