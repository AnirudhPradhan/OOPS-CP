#include<iostream>
using namespace std;
/*void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int  main(){
    int a=3,b=5;
    swap(a,b);
    cout<<"a is "<<a<<" and b is "<<b<<endl;
}*/

// How to create an object
class demo{
    private:
    int b;
    public:
    int a;
    demo(){
        cout<<"Constructor called"<<endl;
    }
    void set_val();
    // void set(int b){
    //     this->b=b;
    // }
    // int get(){
    //     return b;
    // }
    void display_value(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
    ~demo(){
        cout<<"Destructor called"<<endl;
    }
};
void demo:: set_val(){
    cin>>a>>b;
}
int main(){
    demo obj;
    obj.set_val();
    obj.display_value();




    // obj.a=5;
    // cout<<obj.a<<endl;
    // obj.set(6);
    // cout<<obj.get()<<endl;
    // obj.set_val(2,6);
    // obj.display_value();

}