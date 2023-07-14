#include<iostream>
using namespace std;
int main(){
    int num=5;
    // int *ptr=&num;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;

    // double d=9;
    // double *ptr=&d;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    // cout<<sizeof(ptr)<<endl;

    // int *p=0;
    /*
    int i=5;
    int *p=0;
    p=&i;
    cout<<*p<<endl;
    cout<<p<<endl;
    */

   int n=4;
//    int a=n;
//    a++;
    cout<<n<<endl;
   int *p=&n;
//    int a=*p;
//    a++;
    (*p)++;
   cout<<n<<endl;

   int *q=p;
   cout<<p<<" - "<<q<<endl;
   cout<<*p<<" - "<<*q<<endl;
    return 0;
}