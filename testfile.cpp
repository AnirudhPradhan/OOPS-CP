#include <iostream>
using namespace std;
void tc(){
    int n,k,i,temp=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>k)
        temp=i;
    }
    cout<<temp<<endl;
}
int main() {
	// your code goes here
	int n;
    cin>>n;
	while(n--){
	    tc();
	}
	return 0;
}
