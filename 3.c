#include<stdio.h>
int sumEven(int);
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Sum of even no. is: %d",sumEven(N));
    return 0;
}
int sumEven(int n)
{
    if(n>0)
       return (2*n + sumEven(n-1));

}
