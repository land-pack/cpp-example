// In fact a class is really just a structure with functions in it.

#include <iostream>


using namespace std;

class Shape {
    public:
        void setHeight(int h){


            height = h;
        }


        void setWidth(int w){
            width = w;

        }

        //private:
        protected:
            int height;
            int width;
};


class Rect: public Shape {
    
    public:
        double getArea(){
            return (height * width);
        }

};


int main(int argc, char * argv[])
{

    Rect r ;
    r.setHeight(90);
    r.setWidth(2);

    cout << r.getArea() << endl;


    return 0;

}
