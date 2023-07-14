#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void Swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={5,7,8,3,4,5,0,1};
    int odd[5]={3,6,9,1,0};
    Swapalternate(even,8);
    printarray(even,8);
    cout<<"Namastey Duniya \n"<<endl;
    return 0;
}