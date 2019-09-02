#include<stdio.h>
void main()
{
int i,j,num,temp;
int a[100];
printf("enter number of elements\n");
scanf("%d",&num);
printf("enter numbers\n");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<num;i++);
{
 for(j=0;j<num-1-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 printf("ascending order of given numbers is\n");
 for(i=0;i<num;i++)
 {
 printf("%d\n",a[i]);
}
getch();
 }