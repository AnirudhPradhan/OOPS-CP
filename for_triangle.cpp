#include <iostream>
using namespace std;
void tc(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    int count=a[0];
    for(int i=0;i<3;i++){
        if(count<a[i]){
            count=a[i];
        }
    }
    int sum=0;
    for(int i=0;i<3;i++){
        if(a[i]!=count)
        sum=sum+a[i];
    }
    if(sum==count){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
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
