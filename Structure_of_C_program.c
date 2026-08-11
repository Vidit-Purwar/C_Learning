# include <stdio.h>

int main()
{
    // declare an integer variable
    int userName;

    // prompt the user to type a number and hold user input 
    printf("please enter a while number");

    // read the number from the keyboard and save it in the variable 
    scanf("%d", &userName);

    // print the saved numnber back to the screen 
    printf("You entered the number: %d\n", userName);

    return 0;

}