//strupr
#include<stdio.h>
#include<string.h>

int main()
{
	int l=0;
	char str[100];
	printf("Enter a string:\n");
	fgets(str,100,stdin);
	while (str[l]!='\0')
	{
		if(str[l]>=97 && str[l]<=122)
		{
			str[l]-=32;
		}
		l++;
	}
	//printf("The length of the string is : %d\n",l-1);
	printf("The uppercase string is: \n");
	puts(str);
	
	
	

	return 0;
}