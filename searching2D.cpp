#include<iostream>
using namespace std;
void search(int a[2][4],int key){
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]==key)
            cout<<"Present at "<<i<<","<<j;
        }
    }
}
int main(){
    int a[2][4]={{1,2,3},{4,5,6}};
    search(a,3);
}