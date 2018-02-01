#include <iostream>

using namespace std;

int add(int a, int b){
    return a+ b;
}

template<class T>
void print(T i){
    cout << "The result >>" << i << endl;

    // try to return something
    // return 1; // error: void function 'print' should not return a value [-Wreturn-type]
}

// Arguments passed by value and by reference
void duplication_by_ref(int &a, int &b, int &c){

    a*=2;
    b*=2;
    c*=2;
}

// Arguments passed by value and by pointer
void duplication_by_point(int *a, int *b, int *c){
    *a*=2;
    *b*=2;
    *c*=2;
}

// Efficiency considerations and const references

string concatenate_no_efficiency(string a, string b){
    return a+b;
}

// is efficiency but can not guarantee that its reference parameters going to be modified
string concatenate_is_efficiency(string &a, string &b){
    return a+b;
}

// The solution is for the function to guarantee that its reference parameters are not going to be modified by this function. 
// This can be done by qualifying the parameters as constant:

string concatenate_is_efficiency(const string &a, const string &b){
    return a+b;
}

//Note that most compilers already optimize code to generate inline functions 
// when they see an opportunity to improve efficiency, even if not explicitly
// marked with the inline specifier. Therefore, this specifier merely indicates 
// the compiler that inline is preferred for this function, although the compiler 
//is free to not inline it, and optimize otherwise. In C++, optimization is a 
// task delegated to the compiler, which is free to generate any code for 
//as long as the resulting behavior is the one specified by the code.


inline string concatenate_inline_efficiency(const string &a, const string &b){
    return a+b;
}
int default_value_func(int a, int b=10){
    return a + b;
}



int main(int argc, char * argv[]){
    print(add(9, 8));
    print(add(9.0, 8.0));
    int q=2, w=3, e=4;
    duplication_by_ref(q, w, e);
    cout << q << w << e << endl;
    duplication_by_point(&q, &w, &e);
    cout << q << w << e << endl;

    string s1="hello";
    string s2="world";
    print(concatenate_is_efficiency(s1, s2));
    print(default_value_func(9));
    return 0;
}


