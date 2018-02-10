#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[]){

    char * p1 = "dddddd";
    const char * p2 = "dddddd";
    char p3[] = "dddddd";
    char * p4 =(char*)malloc(sizeof("dddddd")+1);
    strcpy(p4, "dddddd");
    //*(p1+2) = 'b'; 
    //Output >>  Bus error: 10
    
    // *(p2+2) = 'b'; 
    // Output >> char_point.c:11:13: error: read-only variable is not assignable
    *(p3+2) = 'b';
	// Output >>
    //d
	//dddddd
	//dddddd
	//ddbddd

    *(p4+2) = 'k'; 
    // Output >>
    //d
	//dddddd
	//dddddd
	//ddbddd
	//ddkddd

    printf("%c\n", *(p1+2));
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);
    printf("%s\n", p4);

    return 0;
}
