
//program to check prime number in c  
#include <stdio.h>

int main()
{
   int i,n,flag=1;
   printf("enter any number to check prime ");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
       if(n%i==0)
       {
           flag++;
       }
   }
   
   if(flag==2)
   {
       printf("%d is  prime number ",n);
   }
   else 
   {
       
       printf("%d is not prime number ",n);
   }
   
   
   
   
    
    
    return 0;
}
