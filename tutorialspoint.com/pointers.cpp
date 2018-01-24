#include <iostream>


using namespace std;


int main()
{
    char p[] = "hello world";
    cout << p << endl;
    
    char * p1 = &p[3];
    cout << p1++ << endl;
    cout << p1++ << endl;

    return 0;

}
