#include<iostream>
using namespace std;
// class human {
//     public:
//     int height;
//     int weight;
//     int age;
//     int getage(){
//         return this->age;
//     }
//   void setweight(int w){
//          this->weight=w;
//     }

// };

// class Male : public human{
//           public:
//           string color;

//           void sleep(){
//             cout<<"Male Sleeping"<<endl;
//           }
// };

// // Single
// class Animal{
//     public:
//     int age;
//     void speak(){
//         cout<<"Speaking"<<endl;
//     }
// };
// class Dog : public Animal{

// };

// // Multiple 
// class mixed : public Animal,human{
          
// };

// // Ambiguity
// class A {
//     public:
//     void f(){
//         cout<<"jhgdsjj"<<endl;
//     }
// };
// class B{
//     public:
//     void f(){
//         cout<<"jhgdsjj"<<endl;
//     }
// };
// class C : public A,B{

// };


//POLYMORPHISM

//1. FUNCTION OVERLOADING

class A{
       public:
       void sayhello(){
        cout<<"Hello Neeraj"<<endl;
       }
       void sayhello(string n){
        cout<<"Hello string "<<n<<endl;
       }
       void sayhello(char n){
        cout<<"Hellocharacter "<<n<<endl;
       }
};

//OPERATOR OVERLOADING
class B{
    public:
    int a;
    int b;
    void operator+ (B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<val2-val1<<endl;
    }
};

// Function OVERRIDING
class animal{
    public:
    void spesk(){
        cout<<"Speaking"<<endl;
    }
};

class dog: public animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
   /* Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.color<<endl;
    obj1.sleep();
    obj1.setweight(5);
    cout<<obj1.weight<<endl;
    Dog d;
    d.speak();
    cout<<"Namastey Duniya \n"<<endl;
    C obj;
    obj.A::f();
    */
//    A obj;
//    obj.sayhello('n');
//     return 0;

    // B obj1,obj2;
    // obj1.a=5;
    // obj2.a=8;
    // obj2+obj1;
   
   dog d;
   d.speak();
    
}