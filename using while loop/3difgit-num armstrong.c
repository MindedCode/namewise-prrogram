/******************************************************************************

Welcome to Online.
using while loop ==> there is a program of armstrong (153, 370, 371, 407,)

*******************************************************************************/
#include <stdio.h>

int main()
{
    int number, original_num , remainder, result=0;
    printf("Enter the three digit number: (153, 370, 371, 407,)");
    scanf("%d",&number);
    
    original_num = number;
    while(original_num != 0)
    {
        remainder = original_num % 10;
        
        result += remainder*remainder*remainder;
        original_num /= 10;
    }
    
    if(result == number)
    {
        printf("This is armstrong number = %d",result);
    }
    else
        printf("This is not armstrong number");
    return 0;
}

Output of the program :

Enter the three digit number: (153, 370, 371, 407,)407
This is armstrong number = 407
