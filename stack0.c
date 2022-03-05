#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int stack[SIZE];
int top=-1;

void push()
{
  int e;
  if(top==SIZE-1)
  {
    printf("stackoverflow\n" );
  }
  else
  {
    top++;
    printf("enter element:");
    scanf("%d",&e );
    stack[top]=e;
  }
}
void pop()
{
  if(top==-1)
  {
    printf("stack underflow\n");
  }
  else
  {
    top--;

  }
}
void display()
{
  int i;
  if(top==-1)
  {
    printf("stack is empty");
  }
  else
  {
    for(i=top;i>=0;i--)
    {
      printf("%d\t",stack[i]);
    }
  }
}
int main()
{
  int op;
  do{
    printf("enter your option\n");
    printf("1.push\t,2.pop\t,3.Display,4.exit\n");
    scanf("%d",&op );
    switch (op) {
      case 1:push();
        break;
      case 2:pop();
        break;
      case 3:display();
        break;
      case 4:exit(1);
    }
  }while (op!=4);

}
