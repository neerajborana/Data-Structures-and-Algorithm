#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkpalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else {
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
char getmaxoccurence(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalanswer='a'+ans;
    return finalanswer;
}
int main(){
    // char name[20];
    // cout<<"Enter Your Name: ";
    // cin>>name;
    // cout<<"Namastey Duniya \nYour Name is :"<<name<<endl;
    // int len=getlength(name);
    // cout<<"Length : "<<len<<endl;
    // // reverse(name,6);
    // //  cout<<"Namastey Duniya \nYour Name is :"<<name<<endl;
    // cout<<"Palindrome or not "<<checkpalindrome(name,len); 
    // cout<<"CHARACTER is "<<tolowercase('b')<<endl;
    // cout<<"CHARACTER is "<<tolowercase('C')<<endl;
    string s;
    cin>>s;
    cout<<getmaxoccurence(s);
    return 0;
}