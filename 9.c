#include<stdio.h>
int count(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d ", count(n));
    return 0;
}
int count(int n)
{
   static int c=0;
    if(n>0)
    {
    c++;
    count(n/10);
    }
    return c;
}
