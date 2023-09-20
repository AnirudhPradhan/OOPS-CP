#include<iostream>
using namespace std;
void merge(int *a,int *b,int m,int n){
    int i=0,j=0,k=0;
    int c[m+n];
    while(k!=m+n){
        if(a[i]<b[j]){
            c[k]=a[i];
            k++;i++;
        }
        else if(a[i]>b[j]){
            c[k]=b[j];
            k++;j++;
        }
    }
    for(i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}
int main(){
    int a[]={1,3,5,7};
    int b[]={2,4,6,8};
    merge(a,b,4,4);
}