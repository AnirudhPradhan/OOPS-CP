#include<iostream>
using namespace std;
int factorial(int n){
    if((n==0) || n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"nCr: "<<(factorial(n)/factorial(r))*factorial(n-r);
}