#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;
    heap(){
            arr[0]=-1;
            size=0;
    }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1){
            int parent=index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=0;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void deletion(){
            if(size==0){
                cout<<"Nothing to delete"<<endl;
                return ;
            }
            arr[1]=arr[size];
            size--;

            int i=1;
            while(i<size){
                int left=2*i;
                int right=2*i+1;

                if(left <size && arr[i]< arr[left]){
                    swap(arr[i],arr[left]);
                    i=left;
                }
                else if(right <size && arr[i]< arr[right]){
                    swap(arr[i],arr[right]);
                    i=right;
                }
                else{
                    return ;
                }
            }
    }
};
void heapify(int arr[],int n,int i){
    int lar=i;
    int left=2*i;
    int right=2*i+1;

    if(left <n && arr[i]< arr[left]){
        lar=left;
    }
    if(left <n && arr[i]< arr[right]){
        lar=right;
    }
    if(lar!=i){
        swap(arr[lar],arr[i]);
        heapify(arr,n,lar);
    }
    
}
void heapsort(int arr[],int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
    }
    heapify(arr,size,1);
}
int main(){
    cout<<"Namastey Duniya \n"<<endl;
    heap h;
    h.insert(40);
    h.insert(50);
    h.insert(30);
    h.insert(60);
    h.insert(55);
    h.insert(70);
    h.print();
    h.deletion();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<"Printing Array"<<endl;
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    priority_queue<int> q;

    q.push(4);
    q.push(2);
    q.push(3);
    q.push(5);

    cout<<"Element at Top"<<q.top()<<endl;
    q.pop();
    cout<<"Element at Top"<<q.top()<<endl;
    if(q.empty())
        cout<<"Queue is Empty"<<endl;
    return 0;
}