#include <iostream>

using namespace std;

const int MAX_LIMIT = 90;

int main(int argc, char * argv[])
{
    int flag = 0;

    cin >> flag;

    cout << flag << endl;
    
    if (flag > MAX_LIMIT) {
        cout << "Out of max " << endl;

     }else{
        cout << "Low ..." << endl;

    }

    return 0;
}
