#include<stdio.h>
int main(void)
{
int i,j;

for(i=1;i<10;i++)
{
for(j=1;j<10;j++)
{
printf("%dX%d=%d\t",i,j,i*j);
}
printf("\n");
}
return 0;
}

