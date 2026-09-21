#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;	
void push()
{
int value;
if(top==MAX-1){
printf("Stack overflow");
}
else{
printf("Enter the value:");
scanf("%d",&value);
top++;
stack[top]=value;
printf("%d pushed into stack",value);
}}
void pop()
{
if(top==-1){
printf("stack underflow");
}else{
printf("%d popped out of stack",stack[top]);
top--;
}
}
void peek()
{
if(top==-1){
printf("stack is empty");
}
else{
printf("top element is:%d",stack[top]);
}}
void display()
{
int i;
if(top==-1){
printf("stack is empty");
}else{
printf("stack elements:");
for(i = top;i >= 0; i--){
printf("%d\n",stack[i]);
}}}
int main()
{
int choice;
while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;
            
            case 3:
            	peek();
            	break;
		
            case 4:
                display();
                break;

            case 5:
                printf("Program ended.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
