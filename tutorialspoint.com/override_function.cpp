#include <iostream>


using namespace std;

class PrintData{
    
    public:
        
        void print(int i){
            cout << "This is integer output >> " << i << endl;
       }
        void print(double i){
            cout << "This is double output >> " << i << endl;
       }
        void print(char * i){
            cout << "This is float output >> " << i << endl;
       }

};


int main(int argc, char * argv[])
{
    PrintData p;
    p.print(9);
    p.print(9.9);
    p.print("Something");


    return 0;
}
