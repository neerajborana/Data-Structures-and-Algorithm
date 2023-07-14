#include<iostream>
using namespace std;
void selectionsort(int arr[], int n){
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j])
                min=j;
        }
        swap(arr[min],arr[i]);
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