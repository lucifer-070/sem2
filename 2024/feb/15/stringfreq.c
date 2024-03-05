#include<stdio.h>
#include<string.h>
 

int linearSearch(char arr[], int n, char target)
{
	for (int i = 0; i< n; i++)
	{
		if (arr[i] == target)
		{
			return 1; // Return the index if the target is found.
		}
	}
	return 0;
}
 
void freq(char[], char);
 
int main()
{
	int l,i=0,ls=1,target_l,count=0;
	char str[200];
	char target[100];
	printf("Enter a string:\n");
	fgets(str,200,stdin);
    l = strlen(str)-1;
    printf("%d",l);

	for(i = 0; i < l; i++)
	{
		if(str[i]==' ')
        {
            continue;
        }
        else
        {

           if(linearSearch(target,ls,str[i]))
		    {
			    continue;
		    }
		    else
		    {	
			    target[ls-1]=str[i];
			    ls++;
		    }
        }
	}
	target[ls-1] = '\0';
    printf("\nTarget String: \n");
	target_l = strlen(target);
    for(i = 0;i<target_l;i++)
    {
        freq(str,target[i]);
    }
	puts(str);
	//puts(target);
	return 0;
}
 
void freq(char str[],char tg)
{
	int l = 0,count = 0;
	while(str[l]!='\0')
	{
        if (tg == ' ')
        {
            continue;
        }
        else if (str[l]==tg)
        {
            count++;
        }
        l++;
	}
    printf("%c is present = %d times in the string\n",tg,count);
    return;
}

