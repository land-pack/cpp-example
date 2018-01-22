#include <iostream>

using namespace std;


int sum(int a, int b=10, int c=20)
{
    return a + b + c;
}


int main()
{
    int d =0;
    d = sum(9);

    cout << " sum of a + b + c ==" << d << endl;

    return 0;

}
