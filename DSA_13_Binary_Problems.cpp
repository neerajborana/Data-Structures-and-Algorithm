#include<iostream>
using namespace std;
int firstocc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e= mid-1;;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s= mid+1;;
        }
       else if(key>arr[mid]){
            s=mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[7]={2,4,6,7,7,7,18};
    // int odd[5]={3,8,11,14,16};
    
    cout<<"First Occurence of 8 is \n"<<firstocc(even,7,7)<<endl;
   
    cout<<"Last Occurence of 8 is \n"<<lastocc(even,7,7)<<endl;
    return 0;
}