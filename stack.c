//program for stack implimentation in c Language.
#include <stdio.h>
   
   int top=-1;
   int stack[100],n,choice,data;
   void push(void);
   void pop(void);
   void show(void);

int main()
{
    printf(" Enter size of stack \n");
    scanf("%d",&n);
  
     printf("\n Press 1 for push");
        printf("\n Press 2 for pop");
        printf("\n Press 3 for show");
        printf("\n Press 4 for exit\n");
      
    do{
          printf("\nChoose Your Option \n");
            scanf("%d",&choice);
        switch(choice)
        {
            case 1: {
                push();
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                show();
                break;
            }
            case 4: {
                
                break;
            }
            default:
            {
                printf("Enter correct choice");
            }
        }
       
      }while(choice!=4);
    return 0;
}

void push(){
        
        if(top>=n-1)
        {
         printf("\nStack is overflow");   
        }
        else{
            
            printf("\nEnter any value :");
            scanf("%d",&data);
            top++;
            stack[top]=data;
        }
}
void pop()
{
    if(top<=-1){
       printf("stack is underflow");
    }
    else{
         printf("\npoped value is %d",stack[top]);
         top--;
        
    }
}

void show(){
    
    if(top>=0){
        for(int i=top;i>=0;i--){
            printf("\t %d \t",stack[i]);
        }
    }
    else{
        printf("\nStack is Empty");
    }
}
