#include <iostream>


using namespace std;

namespace first_name {
    
    void say(){
        cout << "I from first name space" << endl;
    }


}

namespace second_name {

    void say(){
        cout << "I come from second name space" << endl;
    }

    namespace inside_name {
        void go(){
            cout << "I gotta go some place now" << endl;
        }

    }
}




int main(void) {
    first_name::say();


    using namespace second_name;
    inside_name::go();
    // go(); // error ..
    return 0;

}
