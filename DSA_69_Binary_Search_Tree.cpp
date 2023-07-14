#include<iostream>
#include<queue>
using namespace std;
class Node{
        public:
            int data;
            Node*left;
            Node*right;
            Node(int d){
                this->data=d;
                this->left=NULL;
                this->right=NULL;
            }
};
Node * insertinbst(Node *  root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d>root->data){
        root->right=insertinbst(root->right,d);
    }
    else{
       root->left= insertinbst(root->left,d);
    }
}
void takeinput(Node * &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertinbst(root,data);
        cin>>data;
    }
}
Node* minval(Node*root){
    Node* temp=root;
    while(temp->left!=NULL){
            temp=temp->left;
    }
    return temp;
}
Node* maxval(Node*root){
    Node* temp=root;
    while(temp->right!=NULL){
            temp=temp->right;
    }
    return temp;
}
void levelordertraversal(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
        
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
Node* deletefrombst(Node * root, int val){

    if(root==NULL){
        return root;
    }

    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        // 1 Child
        if(root->left!=NULL && root->right==NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }

        if(root->left==NULL && root->right!=NULL){
            Node *temp=root->right;
            delete root;
            return temp;
        }

        // 2 Child
        if(root->left!=NULL && root->right!=NULL){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deletefrombst(root->right,mini);
            return root;
        }
    }

    else if(root->data > val){
        root->left=deletefrombst(root->left,val);
        return root;
    }

    else{
        root->right=deletefrombst(root->right,val);
        return root;
    }
}
int main(){
    Node *root=NULL;

    cout<<"Namastey Duniya \n"<<endl;
    takeinput(root);
    levelordertraversal(root);
    cout<<"Min Value"<<minval(root)->data<<endl;
    cout<<"Max Value"<<maxval(root)->data<<endl;
    root=deletefrombst(root,20);
    levelordertraversal(root);
    return 0;
}