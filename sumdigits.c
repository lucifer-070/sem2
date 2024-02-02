#include<stdio.h>

int sod(int);

int main()
{
    int n,res;
    printf("Enter a number: ");
    scanf("%d",&n);
    res = sod(n);
    printf("The sum of the digits of %d is: %d\n",n,res);
    return 0;
}


int  sod(int num)   //Function to calculate Sum of Digits
{
    if (num == 0)     //If Number is Zero then Return 0
    {
        return 0;
    }
    else
    {
        return (num%10 + sod(num/10));      //Recursive Call and Adding the Last digit with the Result of Recursive call till Number becomes Zero
    }
}