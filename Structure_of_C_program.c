//1.Documentation section This is a single line comment 
/* this is a multiple
line comment*/

//2.Link section

# include <stdio.h>
// helps us use pre defined functions like printf and scanf [standard input output]

# include <conio.h>
// helps us use pre defined functions like getch() to hold the output 

//3.Definition section 

# define PI 3.14159
# define MAX 200

//4. Global definition section 
/* local variables can only be used inside a function*/

void sum()
{
    int a;
}
// Here a is defined only in this function i.e local declaration 

int a;
void sub()
{
    printf("hello world!");
}
// now a is defined globally 

//5. Main Section 
/* only one main function 
when you run program it goes to main
compulsory*/

void main()
{
    // Declaration, i.e declare variables
    // Executable part, i.e write logic(printf, scanf, etc.)
}


//6. Sub program functions 
/* user defined functions 
called into main function, optional*/
