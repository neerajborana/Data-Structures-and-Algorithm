#include<iostream>
using namespace std;
void reverse(string& str,int i,int j){
    //base case
    if(i>j)
    return ;

    swap(str[i],str[j]);
    i++;
    j--;

    //Recursive call
    reverse(str,i,j);
}
bool checkpallindrome(string s,int i,int j){
    if(i>j)
    return true;
    if(s[i]!=s[j])
    return false;
    else{
        return checkpallindrome(s,i+1,j-1);
    }
}

int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=power(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    cout<<"Namastey Duniya \n"<<endl;
    // string name="abba";
    // reverse(name,0,name.length()-1);
    // cout<<name<<endl;
    // bool ispallindrome=checkpallindrome(name,0,name.length()-1);
    // if(ispallindrome)
    // cout<<"Pallindrome"<<endl;
    // else
    // cout<<"Not Pallindrome"<<endl;
    
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans<<endl;
    return 0;
}