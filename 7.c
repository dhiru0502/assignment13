#include<stdio.h>
int hcf(int, int);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("HCF is: %d",hcf(a,b));
    return 0;
}
int hcf(int x,int y)
{
    if(x==y)
        return x;
    if(x%y==0)
        return y;
    if(y%x==0)
        return x;
    if(x>y)
        return hcf(x%y,y);
    else
        return hcf(x,y%x);

}
