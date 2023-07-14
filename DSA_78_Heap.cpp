#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    //Create
    unordered_map<string,int> m;

    //Insertion
    pair<string,int> p=make_pair("Neeraj",3);
    m.insert(p);

    //2
    pair<string,int>pair2("love",2);
    m.insert(pair2);

    //3
    m["Borana"]=1;
    m["Borana"]=2; // Update the previous pair entry
    cout<<"Namastey Duniya \n"<<endl;

    cout<<m["Borana"]<<endl;
    cout<<m.at("love")<<endl;

    cout<<m["vivek"]<<endl; // Make Entry
    cout<<m.at("vivek")<<endl;

    cout<<m.size()<<endl;

    // To check presence
    cout<<m.count("Neeraj")<<endl;
    //m.erase("love");
    cout<<m.size()<<endl;

    // Iterator
    unordered_map<string,int> :: iterator it=m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}