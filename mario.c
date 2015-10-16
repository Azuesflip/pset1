#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    // Describes to the user what is going on.
    printf("We need to build a staircase for mario to climb. All that we need to decide is how high the staircase will rise. It just can't be larger than 23 nor smaller than 1 step!\n");
    
    do
    {
        // Loops though till a user gives a proper input.
        printf("Please give a hieght for the staircase: \n");
        height = GetInt();
    }
    while(height > 23 || height < 0);
    {
        // Loop to build the whole staircase
        for(int i = 0; i < height; i++)
        {
            // Loop to add the spacing to align the stair steps properly.
            for(int j = 1; j < (height - i); j++)
            {
                printf(" ");
            }
            // Loop to print out the actual step.
            for(int k = 0; k < (i + 2); k++)
            {
                printf("#");
            }
            // Moves us to the next stair step.
            printf("\n");
        }
    }
    
    return 0;
}
