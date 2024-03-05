//reverse

#include<stdio.h>
#include<string.h>
int rev(char *,int);

int main()
{
    char s1[100];
    printf("Enter a string:\n");
    fgets(s1,100,stdin);
    int l1 = strlen(s1)-1;
    rev(s1,l1);
    printf("The reversed string is:\n");
    puts(s1);
    
    return 0;
    
}

int rev(char *p,int l1)
{
    int i,j;
    for(i = 0,j=l1-1;i < j;i++,j--)
    {
        char temp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = temp;
    }
    
    
}
