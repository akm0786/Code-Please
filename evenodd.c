//program to check even odd number
#include <stdio.h>

int main()
{
    int n;
 printf("Enter a number:");
 scanf("%d",&n);
 if(n&1){
  printf("\n%d is odd number",n);
 }
 else{
  printf("\n%d is even number",n);
 }
    
   
    return 0;
}
