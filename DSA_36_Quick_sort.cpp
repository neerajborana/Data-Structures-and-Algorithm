#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotindex= s+cnt;
    swap(arr[pivotindex],arr[s]);
    
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
           i++;
        }
        while(arr[j]>pivot){
           j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
}
void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main(){
    int arr[8]={6,6,-6,-2,-4,-6,2,-6};
    int n=8;
    quicksort(arr,0,n-1);
    cout<<"Namastey Duniya \n"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}