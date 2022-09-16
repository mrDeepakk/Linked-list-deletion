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

void deleteAtAny(int pos){
    node*temp=head;
    
    for(int i=1; i<pos-1; i++){
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;    
    delete toDelete;

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
    InsertAtTail(11);
    InsertAtTail(22);
    InsertAtTail(33);
    InsertAtTail(44);
    InsertAtTail(55);
    display();
    deleteAtAny(3);
    display();


    return 0;
}