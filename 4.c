#include<stdio.h>
int sumSquare(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Sum of square no. is: %d",sumSquare(N));
    return 0;
}
int sumSquare(int n)
{
    if(n>0)
       return (n*n + sumSquare(n-1));

}
