#include<iostream>
using namespace std;
bool ispresent(int arr[][3],int target,int row,int col){
         for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void printrowsum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum 0f "<<i<<" Row is "<<sum<<endl;
    }
}
void printcolsum(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
        }
        cout<<"Sum 0f "<<i<<" Column is "<<sum<<endl;
    }
}
void largestrowsum(int arr[][3],int row,int col){
    int maxi=INT8_MIN;
    int num=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi)
        {maxi=sum;
        num=i;}
    }
    cout<<"Sum 0f "<<num<<" Row is largest which is "<<maxi<<endl;
}
int main(){
    int arr[3][3];
    cout<<"Namastey Duniya \n"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // int target;
    // cout<<"Enter the element to Searched: ";
    // cin>>target;
    // if(ispresent(arr,target,3,4)){
    //     cout<<"Found"<<endl;
    // } 
    // else{
    //     cout<<"Not found"<<endl;
    // }

     printrowsum(arr,3,3);
    //  printcolsum(arr,3,3);
    largestrowsum(arr,3,3);
    cout<<"Namastey Duniya \n"<<endl;
    return 0;
}