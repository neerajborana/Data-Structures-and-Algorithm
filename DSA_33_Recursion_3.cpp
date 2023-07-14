#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
        return ans;
    }
}
 int Sum(int arr[],int size){
    int sum=0;
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else{
       return arr[0] + Sum(arr+1,size-1);
    }
}
bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return 0;
    }
    if( arr[0]==key){
        return 1;
    }
    else
     return linearsearch(arr+1,size-1,key);
}

bool binarysearch(int arr[],int s,int e,int k){
    int mid=s+(e-s)/2;
    if(s>e)
    return 0;
    if(arr[mid]==k){
        return 1;
    }
    if(arr[mid]>k)
    return binarysearch(arr,s,mid-1,k);

    else
    return binarysearch(arr,mid+1,e,k);

}
int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;
    int key=60;
    bool ans=isSorted(arr,size);
    if(ans){
        cout<<"Arraty is Sorted"<<endl;
    }
    else
    cout<<"Arraty is not Sorted"<<endl;
    cout<<"Namastey Duniya \n"<<endl;
    int a=Sum(arr,size);
    cout<<a<<endl;
    bool an=binarysearch(arr,0,4,key);
    if(an){
        cout<<"Found"<<endl;
    }
    else
    cout<<"Not found"<<endl;
    
    return 0;
}