#include<iostream>
using namespace std;
int hashtable[10]={0};
void insert(int key){
    int index=key%10;
    while(hashtable[index]!=0){
        index=(index+1)%10;
    }
    hashtable[index]=key;
}
void display(){
    for(int i=0;i<10;i++){
        cout<<i<<"->"<<hashtable[i]<<endl;
    }
}
int main(){
   insert(54);
   insert(73);
   insert(85);
   insert(11);
   insert(68);
   insert(21);
   display();
}