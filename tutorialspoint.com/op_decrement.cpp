#include <iostream>


using namespace std;


class Time{

    private:
        
        int hours;
        int minutes;


    
    public:
        
        Time() {
            hours = 0;
            minutes = 0;
       }


       Time(int h, int m){
            hours = h;
            minutes = m;
       }


       void displayTime(){
            cout << "H:" << hours << " " << "M:" << minutes << endl;
       }

       // override operator prefix ++
       Time operator--(){


            if (minutes > 0){
                minutes--;
            }else{
                hours--;
                minutes = 59; //reset minutes to 59
            }
            return Time(hours, minutes);
       }

       //override operator postfix ++
       Time operator--(int){
            Time T(hours, minutes);

            if (minutes > 0){
                minutes--;
            }else{
                hours--;
                minutes = 59;
           }
           return T;
      }


};


int main(int argc, char * argv[])
{
    Time T1;
    T1.displayTime();


    Time T2(34, 0);
    T2.displayTime();

    --T2;
    T2.displayTime();
    
    T2--;
    T2.displayTime();

    return 0;

}
