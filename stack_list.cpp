#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct stack_node
{
int data;
struct stack_node * next;

}node;
class stack_linked
{
node * head;
public:
 stack_linked()
{
head=NULL;
}
void push(int num)
{
node * temp=new node;
temp->data=num;
if(head==NULL)
	temp->next=NULL;
else
	temp->next=head;
head=temp;
printf("pushed [%d] data on stack \n",num);
}

int  pop()
{
int num ;
if(head!=NULL)
	{
	node * temp= head;
	num= head->data;
	head=head->next;
	return num;
        free(temp);
	}
else
	{
	printf("stack exhausted\n");
 	return -1;
	}
}

int top()
{
  if(head!=NULL)
	{
	return head->data;
        }
else
   	{ 
	printf("stack exhausted\n");
	return -1;
	}

}
int traverse()
{node * temp=head;
while(temp!=NULL)
{
	printf("[%d]->",temp->data);
       temp=temp->next;
	
}
printf("NULL\n ");


}
};

int  main()
{
while(1)
{
stack_linked obj;
int choice,num;
printf("enter your choice \n 1. push 2.pop 3. top:");
scanf("%d",&choice);
printf("\n");
switch(choice)
{
case 1: printf("enter element to push :");
        scanf("%d",&num);
        printf("\n");
        obj.push(num);
	obj.traverse();
        break;
case 2:
        num=obj.pop();
        if(num!=-1)
                printf("[%d] popped\n ", num);
	obj.traverse();
        break;
case 3:
        num=obj.top();
        if(num!=-1)
                printf("[%d] is at top\n",num);
        break;



return 0;
}
}
}
