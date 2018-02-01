#include <iostream>


using namespace std;


namespace foo{
    int value(){
        return 12;
    }
}

namespace bar{
    int value(){
        return 99;
    }
}



int main(int argc, char * argv[]){
    int x=20;
    int y=10;

    // inner scopes
    {
        int x = 5;
        y = 55;
        cout << "inner x" << x << endl;
        cout << "inner y" << y << endl;
    }

    cout << "outer x" << x << endl;
    cout << "outer y" << y << endl;

    //using namespace foo;
    int i = foo::value();
    //using namespace foo::value;
    //int i = value();
    cout << i << endl;
    using namespace bar;
    int j = bar::value();
    cout << j << endl;
    return 0;
}
