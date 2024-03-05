//palindrome

#include<stdio.h>
#include<string.h>
int pal(char*,int);

int main()
{
    char s1[100];
    printf("Enter a string:\n");
    fgets(s1,100,stdin);
    int l1 = strlen(s1)-1;
    //printf("%d\n",l1);
    int res = pal(s1,l1);
    //printf("%d\n",res);
    if(res)
    {
        printf("String is palindrome!\n");
    }
    else
    {
        printf("String is not palindrome!\n");
    }
    
    return 0;
    
}

int pal(char *p,int l1)
{
    int i,j;
    for(i = 0,j=l1-1;i < j;i++,j--)
    {
        //printf("%c %c",*(p+i),*(p+j));
        if(*(p+i) != *(p+j))
        {
            return 0;
        }
    }
    return 1;
    
}