#include<iostream>
using namespace std;
class A{
    protected:
    int height;
    public:
    string name;
    private:
    int age;
    public:
    void func(){
        cout<<"I am A"<<endl;
    }
    int getage(){
        return this->age;
    }
    void setage(int age){
        this->age=age;
    }
};
class B: protected A{
    string color;
    void sleep(){
        cout<<"Sleeping"<<endl;
    }
    public:
    void func(){
        cout<<"I am B"<<endl;
    }
    int getheight(){
        return this->height;
    }
};

int main(){
    B obj1;
    // obj1.age=76;
    // cout<<obj1.age<<endl; 
    // cout<<obj1.height<<endl;
    // cout<<obj1.name<<endl;

    cout<<obj1.getheight()<<endl;


}