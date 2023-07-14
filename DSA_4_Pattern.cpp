#include<iostream>
using namespace std;
int main(){
    int j,i,n;
    cin>>n;
    i=1;
    j=1;
    // ****
    // ****
    // ****
    // ****
    // while (i<=n)
    // {
    //     while(j<=n){
    //         cout<<" * ";
    //         j++;
    //     }
    //     j=1;
    //     cout<<endl;
    //     i++;
    // }
    
    // 111
    // 222
    // 333
    //  while (i<=n)
    // {
    //     while(j<=n){
    //         cout<<i;
    //         j++;
    //     }
    //     j=1;
    //     cout<<endl;
    //     i++;
    // }

    // 54321
         // 54321
         // 54321
        // 54321
         // 54321
    // while (i<=n)
    // {
    //     j=0;
    //     while(j<n){
    //         cout<<n-j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 123
    // 456
    // 789
    // int count=1;
    // while (i<=n)
    // {
    //     j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // *
    // **
    // ***
    // ****
    // while (i<=n)
    // {
    //     j=1;
    //     while(j<=i){
    //         cout<<" * ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //  1
    //  23
    //  456
    //  78910
    // int count=1;
    // while (i<=n)
    // {
    //     j=1;
    //     while(j<=i){
    //         cout<<count;
    //         j++;
    //         count++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 1
    // 23
    // 345
    // 4567
    // while (i<=n)
    // {
    //     j=i;
    //     while(j<2*i){
    //        cout<<j;
    //        j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // 1
    // 21
    // 321
    // 4321

    // while(i<=n){
    //     j=0;
    //     while(j<i){
    //         cout<<i-j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    //  AAA
    //  BBB
    //  CCC
    //  char ch='A';
    //  while(i<=n){
    //     j=1;
    //     while(j<=n){
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
    //     ch++;
    //     i++;
    // }

    //  ABC
    //  ABC
    //  ABC
    //  while(i<=n){
    //     j=1;
    //     char ch='A';
    //     while(j<=n){
    //         cout<<ch;
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
    // }

    // ABC
    // BCD
    // CDE
    //  i=0;
    // char ch='A';
    // while(i<n){
    //     ch='A'+i;
    //     j=1;
    //     while(j<n){
    //         cout<<ch;
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
    // }

    // A
    // BB
    // CCC
    // i=0;
    // char ch='A';
    // while(i<n){
    //     ch='A'+i;
    //     j=0;
    //     while(j<=i){
    //         cout<<ch;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
    // }

    // D
    // CD
    // BCD
    // ABCD

    // i=0;
    // char ch='A';
    // while(i<n){
    //     ch='A'+n-i;
    //     j=0;
    //     while(j<=i){
    //         cout<<ch;
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
    // }
    
    //     *
    //    **
    //   ***
    //  ****
    // while(i<=n){
    //     int s=n-i;
    //     j=1;
    //     while(s){
    //         cout<<" ";
    //         s--;
    //     }
    //     while(j<=i){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
        
    //     i++;
    // }

    //   1
    //  121
    // 12321 
    // while(i<=n){
    //     int s=n-i;
    //     while(s){
    //         cout<<" ";
    //         s--;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }
    //     int st=i-1;
    //     while (st)
    //     {
    //         cout<<st;
    //         st--;
    //     }
    //     cout<<endl;
    //     i++;
        
    // }
    
    while(i<=n){
        int nt=n-i+1;
        int j=1;
        while(j<=nt){
            cout<<j;
            j++;
        }
        int s=2*i-2;;
        while(s){
            cout<<"*";
            s--;
        }
        // int st=n-i+1;
        while (nt)
        {
            cout<<nt;
            nt--;
        }
        cout<<endl;
        i++;
        
    }
    


    }