#include <stdio.h>
#include <stdlib.h>
int n,choice,queue[50],front=-1,rear=-1;
void display(),enqueue(),dequeue(),menu();
int main() 
{
 printf("Enter the number of elements:");
 scanf("%d",&n);
 menu();
 return 0;
}
void menu()
{
 printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
 printf("\nEnter your choice:");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:enqueue();
  break;
  case 2:dequeue();
  break;
  case 3:display();
  break;
  case 4:exit(1);
 }
}
void display()
{
 int i=0;
 if(rear==-1)
 {
  printf("Queue is empty\n");
 }
 else
 {
  printf("The queue elements are:");
  for(i=front;i<=rear;i++)
  {
   printf("\t%d",queue[i]);
  }
 }
menu();
}
void enqueue(int ele)
{
 if(rear!=n-1)
 {
  printf("Enter the item to be inserted:");
  scanf("%d",&ele);
  front=0;
  rear=rear+1;
  queue[rear]=ele;
  printf("Inserted successfully\n");
 }
 else
 {
  printf("queue is full\n");
 }
menu();
}
void dequeue()
{
 int ele;
 if(front==-1||rear<front)
 {
  printf("Couldn't retrieve data, queue is empty");
 }
 else
 {
  ele=queue[front];
  printf("Deleted:%d",ele);
  if(front==rear)
  {
   front=rear=-1;
  }
  else
  {
   front=front+1;
  }
 }
menu();
}
