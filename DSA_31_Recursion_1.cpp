#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    // int ans=factorial(n);
    cout<<"Namastey Duniya \n"<<endl;
    print(n);
    return 0;
}