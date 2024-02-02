#include<stdio.h>

long double fact(int);
int main()
{
    int n;
    
    printf("Enter a number to find the factorial of:\n");
    scanf("%d",&n);
    long double res = fact(n);
    printf("The factorial of %d is: %Lf\n",n,res);
    return 0;
}

long double fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * fact(num - 1);
    }
}