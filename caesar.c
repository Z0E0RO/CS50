#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Checking if the command arrgument is a digit or not
    if (argc == 2 && isdigit(*argv[1]))
    {
        // Setting the key value to int
        int k = atoi(argv[1]);
        // Printing the key
        printf("Key: %i\n", k);
        // Getting plain text from the user
        string plain_text = get_string("plaintext:  ");
        // Calculating the length of the string
        int length = strlen(plain_text);
        // Printing the cipher text
        printf("ciphertext: ");
        // Using for loop to check as well as change the character according to the key
        for (int i=0; i<length; i++)
        {
            if (isalpha(plain_text[i]))
            {
                if (isupper(plain_text[i]))
                {
                    printf("%c", (plain_text[i]-'A'+k)%26+'A');
                }
                else
                {
                    printf("%c", (plain_text[i]-'a'+k)%26+'a');
                }
            }
            else
            {
                printf("%c", plain_text[i]);
            }
        }
    }
    // If the argument is not a digit
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
   
    printf("\n");
    
}