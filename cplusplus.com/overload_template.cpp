#include <iostream>


using namespace std;

template <class T>
bool is_equal(T i, T j){
    return bool(i == j);
}

//bool is_equal(string i, string j){
//    return (i == j);
//}

template <class T>
void print(T t){
    cout << "Output >>" << t << endl;
}

int main(int argc, char * argv[]){
    print(is_equal(21, 22));
    print(is_equal("hello", "hello"));
    return 0;
}
