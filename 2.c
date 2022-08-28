#include<stdio.h>
int sumOdd(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Sum of odd no. is: %d",sumOdd(N));
    return 0;
}
int sumOdd(int n)
{
    if(n>0)
       return (2*n-1) + sumOdd(n-1);

}
