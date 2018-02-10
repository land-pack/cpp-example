#include <iostream>
#include <cmath>

using namespace std;

float xround(float f)
{
    return floor(f * 5 + 0.5) / 5;
    // return std::round(f * 5) / 5; // C++11
}


int main(int argc, char * argv[]){

	cout << xround(9.2) << endl;
	cout << xround(9.6) << endl;
	cout << xround(9.061) << endl;
	return 0;
}
