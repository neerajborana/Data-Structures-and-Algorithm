#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // CREATE 2D ARRAY
    int **arr = new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int [n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;

    }
    cout<<"Namastey Duniya \n"<<endl;
    for(int i=0;i<n;i++){
        delete []arr[i];
    }

    delete [] arr;
    return 0;
}