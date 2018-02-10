#include <stdio.h>
#include <tuple>

using namespace std;

template < class ... ES >
class EventDriver {
  public :
    template<class T> using Func = void (*)(T& x);

    std::tuple< Func< ES > ... > actions;

    // Func< > default_action;

    template < class EVENT>
    void setAction ( void (*fp )(EVENT& ) ){
        std::get< Func<EVENT> >( actions )=fp;
    }

    template < class EVENT>
    void notify( EVENT& e ){
        Func<EVENT> f = std::get< Func<EVENT> >( actions );

        if( f ){
            f( e );
        }else{
         printf("Could not process event. No registered action found \n");
        }

    }
};

// TEST the EventDriver
//
class EventAA{};
class EventBB{};
class EventCC{};

void processAA( EventAA& a ){
   printf("Processing EventAA \n");
}

int main (){

   EventDriver <EventAA, EventBB, EventCC> ed;
   ed.setAction( &processAA );

   EventAA aa;
   ed.notify( aa );

   EventBB bb;
   ed.notify( bb );  // will display that no action registered
} 
