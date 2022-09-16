#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

node* head=NULL;

void InsertAtTail(int val){
    node*new_node=new node(val);
    node*temp=head;
    if(head==NULL){
        head=new_node;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}

void deleteEndNode(){
    node*temp=head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    node*toDelete=temp->next;
    temp->next=NULL;
}

void display(){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    InsertAtTail(1);
    InsertAtTail(2);
    InsertAtTail(3);
    InsertAtTail(4);
    InsertAtTail(5);
    display();
    deleteEndNode();
    display();


    return 0;
}