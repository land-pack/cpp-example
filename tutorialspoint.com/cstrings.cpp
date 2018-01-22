/*
 *
 * C++ provides following two types of string representations
 * - The C-style character string.
 * - The string class type introduced with Standard C++.
 */


#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    //char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char greeting[6] = {'H', 'e', 'l', 'l', 'o'};
    cout << greeting << endl;

    // If you follow the rule of array initialization, then you can
    // write the above statement as follows -

    char greeting2[] = "Hello";
    cout << greeting2 << endl;
    
    // strcat 
    char greeting3[30];
    strcat(greeting2, greeting);
    cout << greeting2 << endl;

    // strlen VS sizeof
    cout << "Size of greeting3 == " << sizeof(greeting3) << endl;
    cout << "Strlen of greeting3 == " << strlen(greeting3) << endl;
    
    // copy something to a new array
    strcpy(greeting3, "New Data to a array");
    cout << "Size of greeting3 == " << sizeof(greeting3) << endl;
    cout << "Strlen of greeting3 == " << strlen(greeting3) << endl;
    
    // strcmp
    // Return 0 if s1 and s2 are the same; less than 0 if
    // s1 < s2; greater than 0 if s1 > s2
    if (strcmp("A", "B")){
        cout << "A > B" << endl;
    } else {
        cout << "B < A" << endl;
    }
    
    // strchr
    // Return a pointer to the first occurrence of character
    // ch in string s1.
    const char *p = strchr("hellowas", 'c');
    cout << &p<< endl;
    cout << &p<< endl;

    // strstr
    // Returns a pointer to the first occurrence of string s2 in 
    // string s1.

   
    return 0;
}

