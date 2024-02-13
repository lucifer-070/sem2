//strpal
#include<stdio.h>
#include<string.h>

int main()
{
	int l=0,f=0;
	char str[100];
	printf("Enter a string:\n");
	fgets(str,100,stdin);
	while (str[l]!='\0')
	{
		l++;
	}
		
	//printf("The length of the string is : %d\n",l-1);
	//printf("The lowercase string is: \n");
	for(int i=0,j=l-2;i<j;i++,j--)
	{
		//printf("str[%d] = %c,str[%d] = %c\n",i,str[i],j,str[j]);
		if (str[i]!=str[j])
		{
			f = 1;
			break;
		}
	}
	
	if(f==0)
	{
		printf("The string is palindrome\n");
	}
	else
	{
		printf("The string is not palindrome\n");
	}
	//puts(str);
	
	
	

	return 0;
}