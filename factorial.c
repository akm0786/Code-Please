//factorial program for n number

#include <stdio.h>

       int factorial(int User_inputF)
        {
            if(User_inputF==0)
            {
                return 1;
            }
            else
            {
                return (User_inputF*factorial(User_inputF-1));    
            }
        }
        
    int main()
    {
        int User_input;
        printf("Enter any number");
        scanf("%d",&User_input);
        int result=factorial(User_input);
      
        printf("Factorial of %d number is %d",User_input,result );
    

    return 0;
}
