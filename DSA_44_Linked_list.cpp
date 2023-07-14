#include <iostream>
using namespace std;

// SINGLY LINKED LIST
/*
class Node{
    public:
    int data;
    Node *next;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }

};
void insertathead(Node* &head,int d){
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertattail(Node* &tail,int d){
    Node *temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void insertatpos(Node* &head,Node* &tail,int d,int pos){
    if(pos==1){
        insertathead(head,d);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}

void deletenode(Node* &head,Node* &tail,int pos){
    if(pos==1){
        Node*temp=head;
        head=head->next;
        delete temp;
    }
    else{
        Node*prev=NULL;
        Node*cur=head;
        int cnt=1;
        while(cnt<pos){
            prev=cur;
            cur=cur->next;
            cnt++;
        }
        prev->next=cur->next;
        cur->next=NULL;
        delete cur;
        tail=prev;
    }
}
void print(Node* &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
*/

// DOUBLY LINKED LIST
/*
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertathead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev=temp;
        head = temp;
    }
}

void insertattail(Node *&head,Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev=tail;
        tail = temp;
    }
}
void insertatpos(Node *&head, Node *&tail, int d, int pos)
{
    if (pos == 1)
    {
        insertathead(head,tail,d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertattail(tail,head, d);
        return;
    }
    Node *nodetoinsert = new Node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
}

void deletenode(Node *&head,Node* &tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        temp->next->prev=NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node *prev = NULL;
        Node *cur = head;
        int cnt = 1;
        while (cnt < pos)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
        }
        cur->prev=NULL;
        prev->next = cur->next;
        cur->next = NULL;
        delete cur;
        tail = prev;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

*/
// CIRCULAR LINKED LIST
class Node{
    public:
    int data;
    Node *next;

    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }

};
void insertnode(Node* &tail,int e,int d){
    if(tail==NULL){
        Node *newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node*curr=tail;
        while(curr->data!=e){
            curr=curr->next;
        }
        Node *temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}


void deletenode(Node* &tail,int v){
    if(tail==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    else{
        Node*prev=tail;
        Node*cur=prev->next;
        while(cur->data!=v){
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
        if(cur==prev){
            tail=NULL;
        }
        else if(tail==cur){
            tail=prev;
        }
        cur->next=NULL;
        delete cur;
        tail=prev;
    }
}
void print(Node* &tail){
    Node *temp=tail;
    if(tail==NULL){
        cout<<"List is Empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main()
{
    // Node *node1 = new Node(34);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    // Node *head = node1;
    // Node *tail = node1;
    // insertattail(tail, 67);
    // insertattail(tail, 89);
    // print(head);

    // insertatpos(head, tail, 33, 4);
    // print(head);

    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    // deletenode(head, tail, 4);
    // print(head);
    // cout << "head " << head->data << endl;
    // cout << "tail " << tail->data << endl;
    // cout << "Namastey Duniya \n"
    //      << endl;

  /*
    Node *head=NULL;
    Node *tail=NULL;

   print(head);

   insertathead(head,tail,23);
   print(head);

   insertathead(head,tail,89);
   print(head);

   insertathead(head,tail,90);
   print(head);

   insertattail(head,tail,78);
   print(head);

   insertattail(head,tail,45);
   print(head);

   insertattail(head,tail,12);
   print(head);

   insertatpos(head,tail,56,3);
   print(head);

   insertatpos(head,tail,56,7);
   print(head);

   deletenode(head,tail,3);
   print(head);

   */

  Node*tail=NULL;
 insertnode(tail,3,45);
 print(tail);

 insertnode(tail,45,49);
 print(tail);

 insertnode(tail,49,78);
 print(tail);

 deletenode(tail,49);
 print(tail);
    return 0;
}