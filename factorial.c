//factorial program for n number
#include <stdio.h>

int main()
{
    int num , i,fact=1;
    printf("enter the number for factorial ");
    
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%d!=  %d",num,fact);
 
    return 0;
}
