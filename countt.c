#include<stdio.h>
int main()
{
int n,i,c=0;
printf("enter the numbers");
scanf("%d",&n);
while(n!=0)
{
n=n/10;    
c++;
}
printf("%d",c);
}
