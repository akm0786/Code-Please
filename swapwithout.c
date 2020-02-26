
//program to swap two values without using 3rd variable. 
#include <stdio.h>


int main()
{
    int a, b;
    printf("Hello World");
    printf("\nenter two values :");
    scanf("%lf",&a);
    scanf("%lf",&b);
   printf("brfore swapped a=%d and b=%d\n",a,b);
    
    a=a-b;
    b=a+b;
    a=b-a;
    
  printf("After swapped a=%d and b=%d",a,b);
    return 0;
}
