#include<stdio.h>
int power(int, int);
int main()
{
    int n,p;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the power of a number: ");
    scanf("%d",&p);
    printf("%d ",power(n,p));
    return 0;
}
int power(int n, int p)
{
    if(p==0)
        return 1;
    return n * power(n, p-1);
}
