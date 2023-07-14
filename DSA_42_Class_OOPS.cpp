#include<iostream>
#include<string.h>
using namespace std;
class hero{
    private:
    
    public:
    char *name;
    hero(){
        cout<<"Simple Constructor called"<<endl;
        name=new char[100];
    }
    hero(hero& temp){
        this->health=temp.health;
        this->level=temp.level;
    }
    hero(int health){
        cout<<"This"<<this<<endl;
        this->health=health;
    }
    hero(int health,int level){
        
        this->health=health;
        this->level=level;
    }
    int level;
    int health;
    void print(){
        cout<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Level is "<<this->level<<endl;
        cout<<"HJealth is "<<this->health<<endl;

    }
    
    int gethealth()
    {return health;}
    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health=h;
    }
    void setlevel(char c){
         level=c;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
};
int main(){
    // cout<<"Namastey Duniya \n"<<endl;
    // hero h1;   //OBJECT
    // cout<<"Size of "<<sizeof(h1)<<endl;
    // cout<<"Health is "<<h1.health<<endl;
    // h1.health=70;
    // h1.level=45;
    // cout<<"Health is "<<h1.health<<endl;
    // cout<<"level is "<<h1.level<<endl;

    // cout<<"Health is "<<h1.gethealth()<<endl;
    // h1.sethealth(60);
    // cout<<"Health is "<<h1.gethealth()<<endl;
    /*
    hero a;
    cout<<"Level is"<<a.level<<endl;
    cout<<"Health is "<<a.gethealth()<<endl;
    //dynamicall
    hero*h=new hero;
    cout<<"Level is"<<(*h).level<<endl;
    cout<<"Health is "<<(*h).gethealth()<<endl;

    cout<<"Level is"<<h->level<<endl;
    cout<<"Health is "<<h->health<<endl;
    */
//     hero h1(10);
//    cout<<"Address of h1 is "<<&h1<<endl;
//    hero a(20,40);
//    a.print();

     hero suresh(30,68);
    suresh.print();
     hero ritesh(suresh);
    ritesh.print();
    char name[7]="Neeraj";
    suresh.setname(name);
    return 0;
}