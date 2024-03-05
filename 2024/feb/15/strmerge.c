#include<stdio.h>
#include<string.h>
void merge(char[],int,char[],int);

int main()
{
    char s1[100];
    char s2[50];
    printf("Enter string 1:\n");
    fgets(s1,100,stdin);
    printf("Enter string 2:\n");
    fgets(s2,50,stdin);
    int l1 = strlen(s1)-1;
    int l2 = strlen(s2)-1;
    
    //printf("%d\n",l1);
    merge(s1,l1,s2,l2);
    //printf("%d\n",res);
    puts(s1);
    
    
    return 0;
    
}

void merge(char s1[],int l1,char s2[],int l2)
{
    int i=0,j=0;
    char *p1,*p2;
    p1 = &s1[l1];
    p2 = s2;
    //puts(s);
    while(*(p2+j)!='\0')
    {
        //printf("%c %c",*(p+i),*(p+j));
        *(p1+i) = *(p2+j);
        i++;
        j++;
    }
    
}