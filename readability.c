#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) 
{
    // Prompting user for text
    string text = get_string("Text: ");
    // Initializing the value of words,letters and sentences to 0
    float words = 0,letter = 0,sentences = 0;
    // Calculating the length of the text
    int length = strlen(text);
    // Using for loop to calculate the no of words, letters and sentences
    for (int i=0; i<length; i++)
    {
        if (text[i]==' ')
        {
            words++;
        }
        if (text[i]=='.' || text[i]=='?' || text[i]=='!')
        {
            sentences++;
        }
        if (isalpha(text[i]))
        {
            letter++;
        }
    }
    words = words+1;
    // Finding the average of letter and sentences
    float L = (letter/words)*100;
    float S = (sentences/words)*100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    // Round off the result
    int grade = round(index);
    // Printing the grade
    if (grade>=16)
    {
        printf("Grade 16+\n");
    }
    else if (grade<1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}