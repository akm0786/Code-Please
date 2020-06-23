//Euclid's Algorithm to find GCD in fastest way
#include <stdio.h>
    
    int gcd(int a,int b)
    {
        if(a==b)
            return a;
             if(a%b==0)
            return b;
        if(b%a==0)
            return a;
        if(a>b)
            return gcd(a%b,b);
        else
            return gcd(b%a,a);
       
    }
    
    int main()
{
    
    int n1,n2;
    printf("Enter Any two number to find GCD ");
    scanf("%d%d",&n1,&n2);
    int result =gcd(n1,n2);
    printf("Result is %d",result);
    return 0;
}
