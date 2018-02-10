#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main(int argc, char * argv[]){
	float n =0.0;
	bool is_str=true;
	is_str = !(std::istringstream(argv[1]) >> n);
    cout << "is_float ==> " << is_str << endl;
	//cout << is_str << endl;

	//ostringstream os;
	//os << "dec: " << 15 << " hex: " << std::hex << 15 << "bin: " << std::hex << 25 <<endl;
	//cout << os.str() << endl;

    string str1 = "Hello, World!";
    istringstream my_input_stream(str1);
    cout << my_input_stream << endl;
    string str2, str3;
    my_input_stream >> str2 >> str3;;
    cout << str2 << str3 << endl;
    
    
	return 0;
}
