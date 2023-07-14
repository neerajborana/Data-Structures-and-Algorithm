#include<iostream>
using namespace std;
#define PI 3.14   // MACRO
int s=5; // GLOBAL VARIABLE
void func(int a, int b){
    a++;
    b++;
    cout<<a<<b<<endl;
}
void a(int& i){
     cout<< i<<endl;
}
void b(int& i){
    cout<<i <<endl;
}
inline int getmax(int& a,int& b){
    return a>b?a:b;
}

void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    // int r=5;
    // double area ;
    // area= PI * r * r;
    // cout<<area<<endl;
    // int i=9;
    // a(i);
    // cout<<"Namastey Duniya \n"<<endl;

    /*
    int a=1, b=2;
    // func(a,b);
    int ans=0;
    ans= getmax(a,b);
    cout<<ans<<endl;
    a=a+2;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;
    */

   int arr[5]={1,2,3,4,5};
   print(arr,5);
    return 0;
}