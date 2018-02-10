#include <iostream>
#include <memory>

class foo {
    private: 
        int x;
    public: 
        foo() { this->x = 0; }
        foo(int x) { this->x = x; }
        int getX() { return this->x; }        
//	foo * operator+(foo& f, int x) {
//    	foo *tmp = new foo(x);
//    	return tmp;
//	}
//
       // Overload + operator to add two Box objects.
   foo operator+(const foo& b) {
      foo box();
      box.x = this->x + b.x;
      return box;
   }
};

std::ostream& operator<< (std::ostream& text, foo& f) {
    text  << f.getX();
    return text;
}



int main()
{
    foo bar(2);
    foo sam(2);
    foo cc = bar + sam;
    std::cout <<cc << std::endl; //returns 2

    return 0;
}
