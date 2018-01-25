#include <iostream>

using namespace std;

class Animal {
 
 public:
   //void eat(){
   virtual void eat(){
        cout << "I'm eating generic food." << endl;
    }
};


class Cat:public Animal {

    public:

    void eat(){
        cout << "I'm eating a rat." << endl;
    }

};

void func(Animal * xyz) {xyz->eat();}



int main()
{
    Animal *a = new Animal;
    Cat * c =  new Cat;

    
    a->eat();
    c->eat();

    func(a);
    func(c);

    return 0;
}
