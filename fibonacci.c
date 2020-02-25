//fibonacci series upto n numbers
#include <stdio.h>

int main()
{
   
    int a;
    
    printf("enter the limit of fibonacci ");
    scanf("%d",&a);
    
    int d=0,i,b=0,c=1;
    printf("fibonacci series : 0 1 ");
    for(i=2;i<a;i++)
    {
        d=b+c;
        printf(" %d  ",d);
        b=c;
        c=d;
        
    }
    
    
    
    return 0;
}
