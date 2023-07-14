#include<iostream>
using namespace std;
void update(int **p){
    // p=p+1;
    // *p=*p +1; 
    **p= **p +1;
}
int main(){
    int i=3;
    int *p=&i;
    int **p2=&p;
    // cout<<"P : "<<p<<endl;
    // cout<<"&P : "<<&p<<endl;
    // cout<<"P2 : "<<*p2<<endl;
    // cout<<"P2 : "<<**p2<<endl;
    // cout<<"P : "<<*p<<endl;

    cout<<"Before: "<<i<<endl;
    cout<<"Before: "<<p<<endl;
    cout<<"Before: "<<p2<<endl;
    update(p2);
    cout<<"After: "<<i<<endl;
    cout<<"After: "<<p<<endl;
    cout<<"After: "<<p2<<endl;
    cout<<"Namastey Duniya \n"<<endl;
    return 0;
}