#include<iostream>
using namespace std;
int apterm(int a){
    return (3*a+7);
}
int setbit(int a,int b){
    int ans=0;
    for(int i=0;i<32;i++){
      if(a&1||b&1){
        ans=ans+1;
      }
      a=a>>1;
      b=b>>1;
    }
    return ans;
}
int main(){
    // int n=2;
    // char ch='a';
    // cout<<endl;
    // switch (n)
    // {
    // case 1:
    //     cout<<"Namastey Duniya 1 \n"<<endl;
    //     break;

    // //continue; not used

    // case 2:switch (ch)
    // {
    // case 'a':
    //     cout<<"Character";
    //     break;
    
    // default:
    //     break;
    // }
    //     cout<<"Namastey Duniya 2 \n"<<endl;
    //     break;    
    
    // default:
    //     cout<<"Default \n"<<endl;
    //     break;
    // }

    // Calculator

    // int a,b;
    // cout<<"Enter the value of a : "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b : "<<endl;
    // cin>>b;

    // char op;
    // cout<<"Enter the Operation to be performed: "<<endl;
    // cin>>op;

    // switch (op)
    // {
    // case '+':
    //     cout<<(a+b)<<endl;
    //     break;
    // case '-':
    //     cout<<(a-b)<<endl;
    //     break;
    // case '*':
    //     cout<<(a*b)<<endl;
    //     break;        
    // case '/':
    //     cout<<(a/b)<<endl;
    //     break;
    // default:
    // cout<<"Not Valid operation"<<endl;
    //     break;
    // }

    // Find the no. of Notes
    // int a;
    // cout<<"Enter the Amount"<<endl;
    // cin>>a;
    // int Rs100,Rs50,Rs20,Rs1;
    // switch (1)
    // {
    // case 1:
    //     Rs100=a/100;
    //     a=a%100;
    //     cout<<"No. of 100 Rupees note: "<<Rs100<<endl;
        
    //  case 2:
    //     Rs50=a/50;
    //     a=a%50;
    //     cout<<"No. of 50 Rupees note: "<<Rs50<<endl;
        
    //  case 3:
    //     Rs20=a/20;
    //     a=a%20;
    //     cout<<"No. of 20 Rupees note: "<<Rs20<<endl;
        
    //  case 4:
    //     Rs1=a/1;
    //     a=a%1;
    //     cout<<"No. of 1 Rupees note: "<<Rs1<<endl;
              
    // default:
    //     break;
    // }

    int a,b;
    cin>>a>>b;
    // cout<<a<<" term of A.P is "<<apterm(a)<<endl;
    cout<<"Set bit is "<<setbit(a,b)<<endl;
    return 0;
}