#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]){

    char * p1 = "dddddd";
    const char * p2 = "dddddd";
    char p3[] = "dddddd";
    char * p4 =(char*)malloc(sizeof("dddddd")+1);

    return 0;
}
