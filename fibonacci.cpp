#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    cout<<0<<endl;
    for(int i=0;i<10;i++){
        int c=a+b;
        b=a;
        a=c;
        cout<<c<<endl;
    }
}