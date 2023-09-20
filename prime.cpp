#include<iostream>
using namespace std;
int main(){
    int k=0,n;
    cin>>n;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            k=i;
        }
    }
    if(k==0)
    cout<<n<<" is prime";
    else
    cout<<n<<" is not prime";
}