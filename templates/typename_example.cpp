#include <iostream>


using namespace std;

template <typename T>
inline int const max_value(T const & a, T const & b){
    return a > b ? a : b;
}

int main(int argc, char * argv[]){
    cout << max_value(912, 22) << endl;

    // error
    // cout << max_value(12, 22.2) << endl;

    // solution 1
    cout << max_value<double>(12, 22.2) << endl;


    // solution 2
    cout << max_value(static_cast<double>(4), 29.0) << endl;

    // define a new template function with different type !
    return 0;
}
