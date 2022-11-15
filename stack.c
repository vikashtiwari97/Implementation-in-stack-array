#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 20
int push(int);
int pop();
int stack[MAX] , top=NULL;
int main(void){
    int ch,x;
    printf("**********Stack Operation**********\n");
    printf("1. Push Operation\n");
    printf("2. Pop Operation\n");
    printf("3. Exit\n");
    while(1)
    {
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    printf("Enter the element to be Pushed\n");
                    scanf("%d",&x);
                    push(x);
                    break;
            case 2:
                    x=pop();
                    if(x!=-1)
                    {
                        printf("The number poped is %d\n",x);
                    }
                    else
                    {
                        printf("Stack is empty\n");
                    }
                    break;
            case 3:
                    exit(0);
            default :
                    printf("Entered Correct Choice\n");
                    break;
        }
    }
    return 0;
}
 int push(int x)
{
    if(top==MAX)
    {
        printf("Stack is overflow\n");
        return 0;
    }
    top=top+1;
    stack[top]=x;
    return 0;
}
int pop()
{
    int x;
    if(top==NULL)
            return NULL;
    else
    {
        x=stack[top];
        top=top-1;
        return x;
    }
}
