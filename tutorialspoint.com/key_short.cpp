/*
 * 
 * To understand the difference betweenn the way signed and
 * unsiged integer modifiers are interpreted by C++, you should
 * run the following short program -
 */

#include <iostream>

using namespace std;

/* 
 *
 * This program shows the difference between
 * signed and unsigned integers.
 */

int main() {
    short int i;
    short unsigned int j;

    j = 50000;

    i = j;

    cout << i << " " << j;

    return 0;
}
