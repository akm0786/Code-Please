//program to check Armstrong  number
#include <stdio.h>

int main()
{
    int num ;
    printf("enter any number to  check  Armstrong number ");
    scanf("%d",&num);
    int rem,sum=0,temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("The number is armstrong number");
        
    }
    else
    {
        printf("The number is not a Armstrong number");
        
    }
    
   
    return 0;
}
