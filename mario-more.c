# include <stdio.h>
# include <cs50.h>

int main()
{
    int n;
    // Prompting user for input
    do 
    {
        n = get_int("Enter positive number: ");
    } 
    while(n<=0 || n>8);
    // Using nested for loop to make the bricks
    for (int i=1; i<=n; i++)
    {
        //Used for loop to make empty spaces
        for (int j=n-i; j>0; j--)
        {
            printf(" ");
        }
        //Using loop to make 1st pattern.
        for (int k=1; k<=i; k++)
        {
            printf("#");
        }
        // Making double empty spaces between the patter
        printf("  ");
        // Using loop to make 2nd pattern
        for (int l=1; l<=i; l++)
        {
            printf("#");
        }
        // printing a new line
        printf("\n");
    }
    
}