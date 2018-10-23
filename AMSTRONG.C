#include<conio.h>
#include<stdio.h>
void main()
{
int n,i=0,a[10],itr,j=0,mul,sum=0;
clrscr();
scanf("%d",&n);
itr=n;
while(itr>0)
{
i++;
a[i]=itr%10;
itr=itr/10;
}
itr=i;
for(i=1;i<=itr;i++)
{
mul=1;
for(j=1;j<=itr;j++)
{
mul=mul*a[i];
}
sum=sum+mul;
}
if(sum==n)
printf("%d is a amstron number",n);
else
printf("%d is not a amstrong number",n);
getch();
}