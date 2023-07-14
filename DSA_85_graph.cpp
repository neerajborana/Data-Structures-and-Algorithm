#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
        unordered_map<int,list<int> > adj;

        void addedge(int u,int v,bool dir){
              // dir=0=undirected
              //dir=1=directed

              // create an edge from u to v
              adj[u].push_back(v);  

              if(dir==0)
                adj[v].push_back(u);
        }
        void printlist(){
            for(auto i: adj){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<j<<" , ";
                }
                cout<<endl;
            }
        }
};
int main(){
    cout<<"Namastey Duniya \n"<<endl;
    int n;
    cout<<"Enter nodes: "<<endl;
    cin>>n;
    int m;
    cout<<"Enter Edges: "<<endl;
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.printlist();
    return 0;
}