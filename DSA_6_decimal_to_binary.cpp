#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    // while(n != 0){
        //Decimal to binary
        // int bit = n & 1;
        // ans = (bit * pow(10,i) ) + ans;
        // n = n >> 1;
        // i++;

        //Binary to decimal
    //     int digit = n%10;
    //     if(digit==1){
    //         ans=ans+pow(2,i);
    //     }
    //     n=n/10;
    //     i++;
    // }
    for(int i=31;i>=0;i--){
        int k=n>>i;
        if(k&1)
        cout<<"1";
        else 
        cout<<"0";
    }
    cout<<"Answer is "<<ans<<endl;
    return 0;
}
