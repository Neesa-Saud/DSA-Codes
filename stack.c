#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100 
struct stack{
    int stack [MAXSIZE];
    int top;
};
void push (struct stack *p1) //function for push operation
{
    int item ;
    if(p1->top==MAXSIZE -1)
    {
        printf("\n The stack is full");
        exit(0);
    }
    else{
        printf("\n Enter the element that you want to insert");
        scanf("%d",&item);
        p1->top = p1->top+1;
       p1->stack[p1->top]=item;
    }
}
void pop (struct stack *p2) //function for pop operation
 {
 	
 	int item;
 	if(p2->top==-1)
 	{
		printf("\n The stack is empty");
		exit(0);
	}
	else
	{
		item=p2->stack[p2->top];
        p2->top=p2->top -1;
		printf("\n The Element which is deleted is =%d",item);	
	}
 }
void traverse (struct stack *p3)
 {
 	int i;
 	
 	if(p3->top==-1)
 	{
 		
 		printf("\n The stack is empty");
	}
	else
	{
		printf("\n\n The Elements in the stack is/are...: ");
		for (i=p3->top;i>=0;i--)
		{
		printf("\n %d", p3->stack[i]);	
		}
	}
 }
 int main()
 
 {
 	int choice;
 	int check=1;
 	
 	struct stack *ptr;
 	
 	ptr=(struct stack * ) malloc (100* sizeof(struct stack));
 	
 	ptr->top=-1;
 	
 	do
 	{
		printf("\n 1. Push Operation");
		printf("\n 2. Pop Operation");
		printf("\n 3. Traverse Operation");
		printf("\n Enter Your Choice : ");
		scanf("%d",&choice);
		switch(choice)
	{
			
			case 1: 
					push(ptr);
					break;
			case 2: 
					pop(ptr);
					break;
			case 3:
					traverse(ptr);
					break;
			default:
					printf("\n You Entered wrong choice");
		}	
		printf("\n\n Press 1 for continue and 2 for Exit the environment= ");
		scanf("%d",&check);	
	}
	while (check!=2);
 	return 0;	
 }