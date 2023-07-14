#include<iostream>
using namespace std;
int getpivot(int arr[], int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
long long int sqrtInteger(int x){
    int s=0;
    int e=x;
    int ans=-1;
    long long int mid=s+(e-s)/2;
    while(s<=e){
       long long int sq=mid*mid;
        if(sq==x)
            return mid;
        if(sq<x){
                ans=mid;
                s=mid+1;
            }
        else{
                e=mid-1;
        }
     mid=s+(e-s)/2;
    }
    return ans;
}
double moreprecision(int n, int precision , int tempsol){
    double factor = 1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
// int arr[8]={4,6,7,8,9,1,2,3};
// int piv=getpivot(arr,8);
//     cout<<"Namastey Duniya \n"<<piv<<endl;
int n;
cout<<"Enter the Number"<<endl;
cin>>n;
int tempsol = sqrtInteger(n);
cout<<"Answer is "<<moreprecision(n,5,tempsol)<<endl;
    return 0;
}