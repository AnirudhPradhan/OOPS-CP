#include<iostream>
using namespace std;
class hero{
    //Properties
    //int value;
    private:
    int health;
    public:
    static int time;
    char level;
    char name[10];


    hero(){
        cout<<"Constructor called"<<endl;
    }
    //parameterised constructor
    hero(int health){
        cout<<this<<endl;
        this->health=health;
    }
    hero(int health,char level){
        this->health=health;
        this->level=level;
    }
    // copy constructor
    hero(hero &h2){
        this->health=h2.health;
        this->level=h2.level;
    }
    ~hero(){
        cout<<"Destructor called"<<endl;
    }

    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health=h;
    }
    char getlevel(){
        return level;
    }
    void setlevel(char l){
        level=l;
    }
};

int hero::time=5;

int main(){
    cout<<hero::time<<endl;
}
    // char na[10]="Anirudh";
    // //hero h3.name=na;
    // hero h1(70,'a');
    // hero h2(80,'b');
    // h2=h1;
    // cout<<h2.level<<endl;
    // cout<<h2.gethealth()<<endl;



    // hero h1(70,'a');
    // cout<<h1.level<<endl;
    // cout<<h1.gethealth()<<endl;
    // hero h1;
    // h1.sethealth(70);
    // cout<<h1.gethealth()<<endl;
    // cout<<sizeof(h1)<<endl;

    // hero *b=new hero;
    // b->level='b';
    // cout<<b->level<<endl;

    // hero s(70,'d');
    // s.print();

    // hero r(s);
    // r.print();


    //static
    // cout<<"HI"<<endl;

    // hero h2(20,'b');
    // cout<<&h2<<endl;

    // cout<<"HELLO"<<endl;

    // //dynamically
    // hero *b = new hero;



    //static allocation
    // hero a;
    // a.level='a';
    // a.sethealth(70);
    // cout<<a.level<<endl;
    // cout<<a.gethealth()<<endl;

    // //dynamic allocation
    // hero *b= new hero;
    // b->setlevel('b');
    // b->sethealth(80);
    // // cout<<(*b).getlevel()<<endl;
    // // cout<<(*b).gethealth()<<endl;
    
    // cout<<b->getlevel()<<endl;
    // cout<<b->gethealth()<<endl;


    //creation of object
    // hero h1;
    // cout<<sizeof(h1)<<endl;
    // h1.health=4;
    // h1.level='a';
    //cout<<"size of: "<<sizeof(h1)<<endl;

    // h1.sethealth(70);
    // h1.level='a';
    // cout<<"health is: "<<h1.gethealth()<<endl;
    // cout<<"level is: "<<h1.level<<endl;
//}