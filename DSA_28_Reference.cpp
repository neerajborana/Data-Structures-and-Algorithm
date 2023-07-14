#include<iostream>
using namespace std;
// int& func(int a){
//     int n=a;
//     int& ans = n;
//     return n;
// }
void update2(int& n){
    n++;
}
void update(int n){
    n++;
}

int getsum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;


}
int main(){
    /*
    int i=5;
    int &j=i;
    cout<<"Namastey Duniya \n"<<j<<i<<endl;
    j++;
    i--;
    cout<<j<<i<<endl;
    int n=5;
    cout<<"Before : "<<n<<endl;
    update2(n);
    
    cout<<"After : "<<n<<endl; 
    func(n);*/
    
    int n;
    cin>>n;

    int *arr= new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getsum(arr,n);

    cout<<ans<<endl;
    
    return 0;
}