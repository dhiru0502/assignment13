#include<stdio.h>
int sumNatural(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Sum is: %d",sumNatural(N));
    return 0;
}
int sumNatural(int n)
{
    if(n>0)
       return n + sumNatural(n-1);

}
