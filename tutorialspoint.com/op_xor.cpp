#include <iostream>


using namespace std;

const int hash_key=10;


int main(int argc, char * argv[])
{
    char * a = (char*)"Hello";

    char * b = (char*)malloc(sizeof(a));
    
    char c;
    
    for (int i=0; i < sizeof(a); i++){
        cout << a[i] << endl;
        c = hash_key ^ a[i];
        cout << c << endl;
        b[i] = c;
    }

    cout << "Origin >>" << a << endl;
    cout << "Hash   >>" << b << endl;


    return 0;
}
