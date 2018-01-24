#include <iostream>

using namespace std;


int main(int argc, char * argv[])
{
    
    char * a = "hello world"; // warning: conversion from string literal to 'char *' is deprecated [-Wc++11-compat-deprecated-writable-strings]
    cout << a << endl;
    
    //solution 1;
    const char * b = "Hello again!";
    cout << b << endl;

    // solution 2;
    char * c = (char *)"Somehtnkjsndf";
    char * d = (char *)malloc(strlen("hello") + 1);
    strcpy(d, "hello");
    cout << d << endl;
    return 0;


}
