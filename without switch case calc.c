#include<stdio.h>

// Declare main function
int main()

{
    int a,b,result;
    char ch;
    printf("Enter the first operand : ");
    scanf("%d",&a);
    
    printf("Enter the second operand : ");
    scanf("%d",&b);
    
    printf("Enter the choice of operator :");
    scanf("%c",&ch);
    
    if(ch=='+')
    {
        result+=a+b;
        printf("%d",result);
    }
    else
        if(ch=='-')
        {
            result=a-b;
            printf("%d",result);
        }
    else
       if(ch=='/')
        {
            result=a/b;
            printf("%d",result);
        }
    else 
    printf("Wrong choice");
}
