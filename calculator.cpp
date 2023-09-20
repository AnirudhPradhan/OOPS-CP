#include<iostream>
using namespace std;
int main(){
    int a,b,c=0;
    cin>>a>>b;
    char n;
    cout<<"enter operations: ";
    cin>>n;
    switch(n){
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
    }
    cout<<c<<endl;
}