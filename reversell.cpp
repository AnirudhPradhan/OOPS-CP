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
void reverse1(node*head){
    if(head==NULL)
    return;
    else{
        reverse1(head->next);
        cout<<head->data<<" ";
    }
}
node *reverse2(node*head){
    node *prev=NULL;
    node *cur=head;
    node *temp;
    while(cur!=NULL){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
    }
    return prev;
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
    node *head=new node(10);
    creation(head,20);
    creation(head,30);
    creation(head,40);
    reverse1(head);
    cout<<endl;
    head=reverse2(head);
    print(head);
}