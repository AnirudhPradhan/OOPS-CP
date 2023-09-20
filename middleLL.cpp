#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void creation(node*head,int key){
    node * temp=new node(key);
    node *ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
}
node *middle(node*head){
    node*ptr=head;
    while(head!=NULL && head->next!=NULL){
        ptr=ptr->next;
        head=head->next->next;
    }
    return ptr;
}
int main(){
    node *head=new node(10);
    creation(head,20);
    creation(head,30);
    creation(head,40);              
    creation(head,50);
    node *m=middle(head);
    cout<<m->data;
}