#include<iostream>
using namespace std;
int binarySearch(int a[],int size,int key){
    int mid,low=0,high=size-1;
    while(low<=high){
        mid=(high+low)/2;
        if(a[mid]==key)
        return mid;
        else if(a[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int a[]={5,6,9,10,22};
    int size=sizeof(a)/sizeof(a[0]);
    int position=binarySearch(a,size,10);
    cout<<position+1;
}