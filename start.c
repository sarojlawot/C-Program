/*
#include <stdio.h>
int main()
{
    printf("hello world!");
    return 0;
}
  
// insert new line using ' \n '
#include <stdio.h>

int main()
 {
    printf("i am  bot.\n\nyou can ask me anything.\ni can expalin it.");
    return 0;
}

#include <stdio.h>
int main()
{
   int mynum = 20;
   printf("%d",mynum);// to output the value of an int variable we must use format specifier %d surrounded by ""
   return 0; 
}
// CREATING VARIABLES
#include <stdio.h>

int main(){
    int num = 20;       // integer
    float ftnum = 2.11; // floating
    char letter = 'a';  // character
    //print variable

    printf("%d\n%f\n%c\n",num,ftnum,letter);
    return 0;
}
        // CHANGE VARIABLE VALUE          
//If you assign a new value to an existing variable, it will overwrite the previous value:


#include <stdio.h>
 
int main() {
    int num = 55;
    int next = 100;

    num = next;

    printf("%d\n",num);
    return 0;
}



// Add variables together
#include<stdio.h>

int main(){
    int x = 5;
    int y = 4;
    float z = 2.2;
    float sum = x+y+z;
    printf("%f",sum);
    return 0;
}

*/

// type conversion
//1.implicit(automatically)
//2.explicit(manually)

/*      implicit conversion*/

#include<stdio.h>
int main() {
    float floatvalue = 8;


    printf("%.3f",floatvalue);
    return 0;
}


