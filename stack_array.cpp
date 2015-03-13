#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 20
class stack_array 
{
static  int top;
int arr[MAX];
public :
 stack_array()
{
top=-1;

}
void push(int num)
{
if(top>=MAX)
    printf("stack full\n ");
else
 	 {
	  arr[++top]=num;
	  printf("element [%d] inserted into stack!\n ",num);
	}

}
int pop ()
{
 if(top<=0)
 	{
   	printf("stack empty \n");
	return -1;	
	}
	else
	
   	return arr[top--];


}
int on_top()
{
if(top>=0)
    	return arr[top];
else 
	{ printf("array exhausted\n ");
	return -1;

	}
}	



};

int main()
{
stack_array obj;
int choice,num;
while(1)
{
printf("enter your choice \n 1. push 2.pop 3. top:");
scanf("%d",&choice);
printf("\n");
switch(choice)
{
case 1: printf("enter element to push :");
        scanf("%d",&num);
	printf("\n");
	obj.push(num);
	break;
case 2:
	num=obj.pop();
	if(num!=-1)
		printf("[%d] popped ", num);
 	break;
case 3: 
	num=obj.on_top();
	if(num!=-1)
		printf("[%d] is at top",num);
	break;



}
}
return 0;
}











