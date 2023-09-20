#include<iostream>
using namespace std;
void reverse(int a[],int size){
    static int i=0;
    int x=a[i];
    if(x==a[size-1]){
        cout<<a[size-1]<<" ";
        return;
    }
    i++;
    reverse(a,size);
    cout<<a[--i]<<" ";
}
int main(){
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    reverse(a,size);
}