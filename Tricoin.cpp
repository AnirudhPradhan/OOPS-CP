#include <iostream>
using namespace std;

void tc(){
    int a,count=0;
    cin>>a;
    for(int i=1;i<=a;i++){
        a=a-i;
        if(a>=0){
            count++;
        }
    }
    cout<<count<<endl;
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

