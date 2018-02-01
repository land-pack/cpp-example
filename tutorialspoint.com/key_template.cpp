#include <iostream>


using namespace std;

template <class myType>
myType GetMax(myType a, myType b) {
    return (a > b ? a: b);
}

int main(int argc, char * argv[]){
    int i=9, j=10, k=0;
    k = GetMax<int>(i, j);
    cout << k << endl;

    return 0;
}
