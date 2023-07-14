#include<iostream>
using namespace std;
int getmin(int num[],int n){
    int min = INT8_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
    return min;
}
int getmax(int num[],int n){
    int max = INT8_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
bool search(int arr[],int size,int a){
    for(int i=0;i<size;i++){
        if(arr[i]==a){
            return 1;
        }
    }
    return 0;
}
int Sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    // int a[10000];
    // fill_n(a,10000,5);
    // cout<<a[33]<<endl;

    // Max of Array
    // int size;
    // cout<<"Enter the size of Array "<<endl;
    // cin>>size;
    // int num[100];
    // for(int i=0;i<size;i++){
    //     cin>>num[i];
    // }
    // cout<<"Minimum Number in Array "<<getmin(num,size)<<endl;
    // cout<<"Maximum Number in Array "<<getmax(num,size)<<endl;

    // LINEAR SEARCH
    // int arr[10]={5,7,-2,10,22,-5,0,5,3,1};
    // int key;
    // cout<<"Enter the Element to be searched: "<<endl;
    // cin>>key;
    // bool found=search(arr,10,key);
    // if(found)
    // cout<<"Element is Found"<<endl;
    // else
    // cout<<"Element is not found"<<endl;

    // Sum of ARRAY
    int size;
    cout<<"Enter the size of Array "<<endl;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Sum of Array Element is : "<<Sum(num,size)<<endl;
    return 0;
}