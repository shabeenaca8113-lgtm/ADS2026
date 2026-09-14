#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
struct Node*top=NULL;
int isEmpty()
{
	return top==NULL;
}
void push(int value)
{
	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
	if(newNode==NULL){
		printf("Stack Overflow!Cannot push %d.\n",value);
		return;
	}
	newNode->data=value;
	newNode->next=top;
	top=newNode;
	printf("%d pushed to stack.\n",value);
}
void pop()
{
	if(isEmpty())
	{
		printf("Stack Underflow! The stack is empty.\n");
		return;
	}
	struct Node*temp=top;
	printf("Popped element:%d\n",top->data);
	top=top->next;
	free(temp);
}
void peek()
{
	if(isEmpty())
		printf("Stack is empty.\n");
	else
		printf("Top element is:%d\n",top->data);
}
void display()
{
	if(isEmpty())
	{
		printf("Stack is empty.\n");
		return;
	}
	struct Node*temp=top;
	printf("Stack elements(Top to Bottom):");
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main()
{
	int choice,value;
	printf("---Stack Operations Using Linked List---\n");
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.Peek\n4.Display\n5.Exit\n");
		printf("Enter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1:
                  printf("Enter value to push:");
                  scanf("%d",&value);
                  push(value);
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
                  printf("Existing program....\n");
                  while(isEmpty())
                   {
                    pop();
                   }
                 exit(0);
               default:
                printf("invalid choice!please choose between 1 and 5.\n");
              }


       }
 return 0;
}
