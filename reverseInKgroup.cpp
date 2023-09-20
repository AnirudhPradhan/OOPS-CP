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
void insert(node *head,int key){
    node*temp=new node(key);
    node*ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
}
node *reverseK(node*head,int k){
    node*cur=head,*prev=NULL,*temp; 
    int count=0;
    if(head==NULL)
    return NULL;
    while(cur!=NULL && count<k){
        temp=cur->next;
        cur->next=prev;
        prev=cur;
        cur=temp;
        count++;
    }
    if(temp!=NULL)
    head->next=reverseK(temp,k);
    return prev;
}
int main(){
    node *head=new node(1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    int k;
    cin>>k;
    head=reverseK(head,k);
    node*ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}