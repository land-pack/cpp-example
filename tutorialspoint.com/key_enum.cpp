#include <iostream>


using namespace std;

int main(int argc , char * argv[])
{
    enum color { red, green, blue } c;
    c = blue;
    cout << "The color is " << c << endl;

    return 0;
}
