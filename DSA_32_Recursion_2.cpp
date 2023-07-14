#include<iostream>
using namespace std;
void reachhome(int s,int d){
    cout<<"Source "<<s<<" Destination "<<d<<endl;
    if(s==d){
        cout<<"Pahuch Gaya Ghar pr"<<endl;
        return;
    }
    s++;
    reachhome(s,d);
}
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return (fibonacci(n-1) + fibonacci(n-2));
}
void saydigit(int n,string arr[]){
    if(n==0)
     return ;

     int digit=n%10;
     n=n/10;
     
     saydigit(n,arr);
     cout<<arr[digit]<<" ";
}
int main(){
    // int d=10;
    // int s=1;
    // reachhome(s,d);
    // int n;
    // cin>>n;
    // int ans=fibonacci(n);
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    saydigit(n,arr);
    cout<<endl;
    cout<<"Namastey Duniya \n"<<endl;
    return 0;
}