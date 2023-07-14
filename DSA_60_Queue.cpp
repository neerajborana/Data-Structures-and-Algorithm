#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(9);
    cout<<q.front()<<endl;
    cout<<"Size of Queue is :"<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<"Size of Queue is :"<<q.size()<<endl;
    q.pop();
    if(q.empty())
    cout<<"Namastey Duniya fjhad,fjhabh \n"<<endl;
    else
    cout<<"Size of Queue is :"<<q.size()<<endl;
    return 0;
}