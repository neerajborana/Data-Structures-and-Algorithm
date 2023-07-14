#include<iostream>
#include<queue>
using namespace std;
class kqueue{
        public:
        int n,k;
        int *front;
        int *rear;
        int *arr;
        int *next;
        int fs;

        kqueue(int n,int k){
            this->n=n;
            this->k=k;
            front = new int[n];
            rear = new int[n];
            for(int i=0;i<n;i++){
                front[i]=-1;
                rear[i]=-1;
            }
            arr = new int[n];
            next = new int[n];
            for(int i=0;i<n;i++){
                next[i]=i+1;
            }
            next[n-1]=-1;
            int fs=0;
        }

        void enqueue(int d,int qn){
            if(fs==-1){
                cout<<"Overflow"<<endl;
                return;
            }
            int index=fs;

            fs=next[index];

            if(front[qn-1]==-1)
                front[qn-1]=index;
            else
            next[rear[qn-1]]=index;

            next[index]=-1;

            rear[qn-1]=index;
            arr[index]=d;
        }

        int dequeue(int qn){
            if(front[qn-1]==-1){
                cout<<"Queue Underflow"<<endl;
                return -1;
            }
            int index=front[qn-1];

            front[qn-1]=next[index];
            next[index]=fs;
            fs=index;
            return arr[index];
        }
};

int solve(int *arr,int n,int k){
        deque<int> maxi(k);
        deque<int> mini(k);

        for(int i=0;i<k;i++){
                while(!maxi.empty() && arr[maxi.back()] <=arr[i])
                    maxi.pop_back();
                while(!mini.empty() && arr[mini.back()]>=arr[i])
                    mini.pop_back();
                maxi.push_back(i);
                mini.push_back(i);
                
        }
        int ans=0;
        for(int i=k;i<n;i++){
            ans+=arr[maxi.front()]+arr[mini.front()];
            while(!maxi.empty() &&i-maxi.front()>=k){
                        maxi.pop_front();
            }
            while(!mini.empty() &&i-mini.front()>=k){
                        mini.pop_front();
            }
            while(!maxi.empty() && arr[maxi.back()] <=arr[i])
                    maxi.pop_back();
            while(!mini.empty() && arr[mini.back()]>=arr[i])
                    mini.pop_back();
                maxi.push_back(i);
                mini.push_back(i);
            
        }
        ans+=arr[maxi.front()]+arr[mini.front()];
        return ans;
    }
int main(){
    cout<<"Namastey Duniya \n"<<endl;
    // kqueue q(10,1);
    // q.enqueue(10,1);
    // q.enqueue(15,2);
    // q.enqueue(12,1);
    // q.enqueue(89,2);
    // cout<<q.dequeue(1)<<endl;
    // cout<<q.dequeue(2)<<endl;
    // cout<<q.dequeue(3)<<endl;
    // cout<<q.dequeue(1)<<endl;

    int arr[7]={2,-5,-1,7,-3,-1,-2};
    cout<<solve(arr,7,4)<<endl;
    return 0;
}