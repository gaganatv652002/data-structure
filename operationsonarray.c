#include <stdio.h>
#include <stdlib.h>
void menu();
void insert();
void delete();
void display();
void search();
void sort();
int choice,j,i=0,a[50],b[10],s;
void main()
{
printf("\n Enter the size of array:");
scanf("%d",&s);
printf("\nenter the elements of array:");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
menu();

}
void menu()
{
printf("\n1.insert");
printf("\n2.delete");
printf("\n3.sort");
printf("\n4.search");
printf("\n5.display");
printf("\n6.exit");
printf("\n enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
   insert();
   break;
case 2:
    delete();
    break;
case 3:
    sort();
    break;
case 4:
    search();
    break;
case 5:
    display();
    break;
case 6:
    exit(1);
}
}
void search()
{
int ele,loc;
printf("\n Enter element to be searched:");
scanf("%d",&ele);
printf("\n Elements found at:");
for(i=0;i<s;i++)
{
if(ele==a[i])
printf("%d",i+1);
}
menu();
}
void sort()
{
printf("\n Current Array:");
for(i=0;i<s;i++)
printf("\t %d",a[i]);
for(i=0;i<s;i++)
{
for(j=i+1;j<s;j++)
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
printf("\n Sorted Array:");
for(i=0;i<s;i++)
printf("\t %d",a[i]);
menu();
}
void insert()
{
int loc,ele;
printf("\n Enter the location:");
scanf("%d",&loc);
printf("\n Enter the element to be inserted:");
scanf("%d",&ele);
for(i=s;i>loc-1;i--)
a[i]=a[i-1];
a[loc-1]=ele;
printf("\nElement inserted");
printf("\n New array after insertion:");
s++;
for(i=0;i<s;i++)
printf("\t %d",a[i]);
menu();
}
void delete()
{
int loc;
printf("\n Enter location:");
scanf("%d",&loc);
for(i=loc-1;i<s-1;i++)
{
a[i]=a[i+1];
}

printf("\n Element Deleted");
printf("\n New array after deletion:");
s--;
for(i=0;i<s;i++)
printf("\t %d",a[i]);

menu();
}
void display()
{
int i;
if(s==0)
{
printf("No elements to display!");
return;
}
printf("Array elements are:");
for(i=0;i<s;i++)
{
printf("%d \t",a[i]);
}
menu();
}
