#include<stdio.h>
#include<string.h>

int anagram(char *,char[], char *,char[]);
int count(char,char[]);
int main()
{
    //PRXT
    int res;
    char str1[100],str2[100];
    printf("Enter string 1 :\n");
    fgets(str1,100,stdin);
    printf("Enter string 2 :\n");
    fgets(str2,100,stdin);
    res = anagram(str1,str1,str2,str2);
    if (res == 1)
    {
        printf("Strings are anagrams!");
    }
    else
    {
        printf("Strings are not anagrams!\n");
    }
    return 0;
}

int anagram(char * p1,char str1[], char * p2,char str2[])
{
    int l1,l2;
    l1 = strlen(str1)-1;
    l2 = strlen(str2)-1;
    if(l1!=l2)
    {
        printf("The string lengths are not equal!\n");
        return 0;
    }
    else
    {
        int check = 0;
        for(int i = 0; i < l1;i++)
        {
            char ele = *(p1+i);
                if (count(ele,str1) != count(ele,str2))
            {
                check++;
                break;
            }
        
        }
        if(check==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    
    }
}

int count(char ele, char s[])
{
    int i=0,cnt=0;
    while(s[i]!='\0')
    {
        if(s[i] == ele)
        {
            cnt++;
        }
        i++;
    }
    return cnt;
}