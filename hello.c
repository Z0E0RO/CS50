# include <cs50.h>
# include <stdio.h>
int main(void)
{
    //Prompt for users name
    string name = get_string("What's your name: ");
    //Print Hello + Users
    printf("Hello, %s\n", name);
}