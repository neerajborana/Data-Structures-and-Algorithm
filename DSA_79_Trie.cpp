
#include<iostream>
using namespace std;
class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            this->data=ch;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            isTerminal=false;
            
        }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }
    void insertutil(TrieNode*root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return ;
        }
        char ch=word[0];
        int index=ch-'a';
        TrieNode*child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            child = new TrieNode(ch);
            root->children[index]=child;
        }

        insertutil(child,word.substr(1));
    }
    void insertword(string word){
        insertutil(root,word);
    }
    bool searchutil(TrieNode*root,string word){
        if(root==NULL)
            return false;
        if(word.length()==0)
            return root->isTerminal;
        char ch=word[0];
        int index=ch-'a';
        TrieNode*child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }

        return searchutil(child,word.substr(1));
    }

    bool search(string word){
        return searchutil(root,word);
    }

};
int main(){
    
    Trie t ;
    t.insertword("abd");
    cout<<" shdgdksdkj"<<endl;
    cout<<"Present or Not "<<t.search("abd")<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
class trienode{
    public:
    char data;
    trienode* children[26];
    bool ister;
    trienode(char data){
        this->data=data;
        for(int i=0;i<26;i++)
        children[i]=NULL;
        ister=false;
    }
};
class trie{
    public:
    trienode *root;

    trie(){
        root=new trienode('\0');
    }

    void insert(trienode* root,string word){
        if(word.length()==0) {
            root->ister=true;
            return ;
        }
        char c=word[0];
        int index=c-'a';
        //present
        trienode *child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        //absent
        else{
            child=new trienode(c);
            root->children[index]=child;
        }
        insert(child,word.substr(1));
    }
    void insertword(string word){
        insert(root,word);
    }
    bool search(trienode* root,string word){
        if(root==NULL ) return false;
        trienode *child;
        if(word.length()==0)
            return root->ister;
        
        char ch=word[0];
        int index=ch-'a';
        if(root->children[index]==NULL) return false;
        else
        child=root->children[index];

        return search(child,word.substr(1));

    }
    bool searc(string word){
        return search(root,word);
    }
};
int main(){
    trie t;
    t.insertword("abd");
    t.insertword("abcd");
    cout<<t.searc("abd");
    return 0;
}*/