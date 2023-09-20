// Linked list is a linear data structure used to shrinked or extended during runtime
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    // constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertion(node*head,int d){
    node * temp=new node(d);
    node *ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
}
void deletion(node*head,int d){
    node*temp,*ptr=head;
    while(ptr->next->data!=d){
        ptr=ptr->next;
    }
    temp=ptr->next;
    ptr->next=NULL;
    free(temp);
}
void print(node*head){
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){
    // node * head=new node(10);
    // cout<<head->data<<endl;
    // cout<<head->next<<endl;
    node*head=new node(10);
    insertion(head,20);
    deletion(head,20);
    print(head);
}