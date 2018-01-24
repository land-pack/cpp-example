#include <iostream>
#include <new>


using namespace std;

//char * allocate(size_t * bytes);


int main(int argc, char * argv[])
{
    char * buffer =   (char*)::operator new(sizeof(char));
    return 0;
}
