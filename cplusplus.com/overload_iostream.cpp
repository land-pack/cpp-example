#include <iostream>

using namespace std;

typedef struct Hello {
    int x;
    int y;
    int z;
}Hello;

ostream & operator<<(ostream& os, const Hello & obj){
    os << "x= " << obj.x << "y= " << obj.y << "z" << obj.z << endl;
    return os;
}


int main(int argc, char * argv[]){
    Hello hello = { 12, 33 ,44};
    cout << hello << endl;
    return 0;
}
