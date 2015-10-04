#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    printf("We need to build a staircase for mario to climb. All that we need to decide is how high the staircase will rise. It just can't be larger than 23 nor smaller than 1 step!\n");
    
    do
    {
        printf("Please give a hieght for the staircase: \n");
        height = GetInt();
    }
    while(height > 23 || height < 0)
    {
        for(i = 0; i < height; i++)
        {
            for(j = 1; j < (height - i); j++)
            {
                printf(" ");
            }
            for(k = 0; k < (i + 2); k++)
            {
                printf(
            }
        }
    }
}
