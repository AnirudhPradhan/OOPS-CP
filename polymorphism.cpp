#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    int operator+(A &obj){
        cout<<this->a-obj.a<<endl;
    }
};
int main(){
    A obj1,obj2;
    obj1.a=7;
    obj2.a=3;
    obj1+obj2;
}