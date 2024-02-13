//strrev
#include<stdio.h>
#include<string.h>

int main()
{
	int l=0;
	char str[100],temp;
	printf("Enter a string:\n");
	fgets(str,100,stdin);
	while (str[l]!='\0')
	{
		l++;
	}
	//printf("The length of the string is : %d\n",l-1);
	//printf("The lowercase string is: \n");
	for(int i=0,j=l-1;i<j;i++,j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	printf("The reversed string is:\n");
		
	puts(str);
	
	
	

	return 0;
}