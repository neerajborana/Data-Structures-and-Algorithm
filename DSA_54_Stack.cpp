#include<iostream>
#include<stack>
using namespace std;

class Stack{
        public:
            int *arr;
            int top;
            int size;

        Stack(int size){
            this->size=size;
            arr=new int[size];
            top=-1;
        }    

        void push(int element){
            if(size-top > 1){
                top++;
                arr[top]=element;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack underflow"<<endl;
            }
        }
        int peek(){
            if(top>=0)
               return arr[top];
            else
                {
                    cout<<"Stack is Empty"<<endl;
                    return -1;
                }   
        }

        bool isempty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
};


int main(){
    /*
    stack<int> s;

    s.push(5);
    s.push(7);

    s.pop();
    s.pop();
    cout<<s.top()<<endl;

    if(s.empty()){
        cout<<" Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }
    */

    Stack st(4);

    st.push(22);
    st.push(43);
    st.push(12);
    st.push(45);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isempty()){
        cout<<"Stack is Empty "<<endl;
    }
    else
        cout<<"Stack is not Empty "<<endl;


}