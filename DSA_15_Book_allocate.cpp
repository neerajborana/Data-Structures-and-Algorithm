#include<iostream>
using namespace std;
bool ispossible(int arr[],int n, int m, int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
} 
int allocatebooks(int arr[],int n,int m){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
bool ispossibleac(int arr[],int n, int m, int mid){
    int cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastpos>=mid){
            cowcount++;
            if(cowcount==m ){
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
} 
int aggressivecow(int arr[],int n,int m){
    int s=0;
    int sum=-1;

    for(int i=0;i<n;i++){
        sum=max(sum,arr[i]);
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossibleac(arr,n,m,mid)){
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
int main(){
    int arr[5]={1,2,3,4,6};
    int x=aggressivecow(arr,5,2);
    cout<<"Namastey Duniya \n"<<x<<endl;
    return 0;
}