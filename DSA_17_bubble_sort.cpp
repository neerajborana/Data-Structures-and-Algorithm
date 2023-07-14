#include<iostream>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
         }
        
    }
}
int main(){
    int arr[5]={64,25,12,22,11};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Namastey Duniya \n"<<endl;
    selectionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}