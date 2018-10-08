#include<stdio.h>
int power(int x,int y);
int power(int x,int y)
{
    int i=1,pow=x;
    while(i<y)
    {
        pow*=x;
        i++;
    }
    return pow;
}
int main()
{
    int n,p;
printf("enter a number,power: ");
scanf("%d,%d",&n,&p);
printf("n^p=%d",power(n,p));
return 0;
}

