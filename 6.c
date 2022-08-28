#include<stdio.h>
int fact(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Factorial of a no. is: %d",fact(N));
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    return (n * fact(n-1));

}
