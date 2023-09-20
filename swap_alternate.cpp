#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void alternate(int a[],int n){
    int i=0;
    int j=i+1;
    if(n%2==0){
        while(i!=n){
                swap(&a[i],&a[j]);
                j+=2;
                i+=2;
        }
    }
    else{
        while(i!=n-1){
            swap(&a[i],&a[j]);
            j+=2;
            i+=2;
    }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={1,2,7,8,5};
    int n=sizeof(a)/sizeof(a[0]);
    alternate(a,n);
}