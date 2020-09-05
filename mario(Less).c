#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height, i, j, k;
    
    // Get height of pyramid from user
    do
    {
       
        height = get_int("height:");
    }
    while (height < 1 || height > 8);
    
    // Print lines
    for (i = 1; i <= height; i++)
    {
        // Print spaces
        for (j = 0; j < (height - i); j++)
        {
            printf(" ");
        }
        
        // print hashes
        for (k = 0; k < i; k++)
        {
            printf("#");
        }
        
     
        printf("\n");
    }
    
    return 0;
}
