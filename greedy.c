#import <stdio.h>
#import <cs50.h>
#import <math.h>

int main(void)
{
    float money;
    int moneyChanger;
    int counter = 0;
    
     do
     {
        // Gets the input from the user and checks to make sure it is a proper input.
        printf("please enter the amount of money: \n");
        money = GetFloat();
        if(money <= 0)
        printf("Give an amount more than 0 c'mon now. \n");
        
     }
     while(money <= 0);
     {
        // Rounds the input up into an int to make it easier to work with and to avoid errors.
        moneyChanger = (int)round(money*100);
        
        // Loops till the amount of money is zero to see how many coins are needed.
        while(moneyChanger > 0)
        {
            if(moneyChanger >= 25)
            {
                moneyChanger -= 25;
                counter++;
            }
            else if(moneyChanger >= 10 && moneyChanger < 25)
            {
                moneyChanger -= 10;
                counter++;
            }
            else if(moneyChanger >= 5 && moneyChanger < 10)
            {
                moneyChanger -= 5;
                counter++;
            }
            else if(moneyChanger >= 1 && moneyChanger < 5)
            {
                moneyChanger -= 1;
                counter++;
            }
        }
        
        // Prints out the answer to the question at hand.
        printf("%d\n", counter);
        
        return 0;
     }
     
}
