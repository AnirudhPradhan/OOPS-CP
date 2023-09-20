#include<iostream>
using namespace std;
void common(int *a,int n){
    int temp,key=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]==a[j]){
                key=a[i];
                temp++;
            }
        }
        if(temp==2)
        cout<<key<<" ";
        temp=0;
    }
}
int main(){
    int a[]={1,2,2,4,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    common(a,size);
}