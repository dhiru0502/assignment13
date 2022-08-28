#include<stdio.h>
int sumDigit(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Sum of Digit of a no. is: %d",sumDigit(N));
    return 0;
}
int sumDigit(int n)
{
    if(n>0)
       return (n%10 + sumDigit(n/10));

}
