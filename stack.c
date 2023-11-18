#include <stdio.h>
#include <stdlib.h>
int n,choice,stack[50],top=-1;
void display(),push(),pop(),peek(),menu();
int main()
{
 printf("Enter the number of elements:");
 scanf("%d",&n);
 menu();
 return 0;
}
void menu()
{
 printf("\n1.push\n2.pop\n3.peek\n4.Display\n5.Exit");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:push();
  break;
  case 2:pop();
  break;
  case 3:peek();
  break;
  case 4:display();
  break;
  case 5:exit(1);
 }
}
void display()
{
 int i=0;
 if(top==-1)
 {
  printf("stack is empty");
 }
 else
 {
  printf("The stack elements are:");
  for(i=top;i>-1;i--)
  {
   printf("\t%d",stack[i]);
  }
 }
 menu();
}
void push()
{
 int ele;
 if(top!=n-1)
 {
  printf("enter the item to be inserted:");
  scanf("%d",&ele);
  top=top+1;
  stack[top]=ele;
  printf("Inserted successfully");
 }
 else
 {
  printf("can't insert,stack is full");
 }
 menu();
}
void pop()
{
 int ele;
 if(top==-1)
 {
  printf("couldn't retrieve data,stack is empty");
 }
 else
 {
  ele=stack[top];
  printf("deleted:%d",ele);
  top=top-1;
 }
 menu();
}
void peek()
 {
 if(top==-1)
 {
 printf("no element in the stack");
 }
 else
 {
  printf("The top most element of the stack is:\t%d",stack[top]);
 }
 menu();
}
