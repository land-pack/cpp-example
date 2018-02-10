#include <iostream>

using namespace std;


RediciloulslyLongType::SubType func(){
    return 11;
}


int main(int argc, char * argv[]){
    

    // before cpp 17
    RediciloulslyLongType::SubType ret = func();

    //auto ret = func();

    cout << ret << endl;
}
