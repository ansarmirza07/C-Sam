#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i;
	printf("Enter a string: ");
	scanf("%s",str);
	for(i=0;i<str[i]!='\0';i++)
	{
		if(str[i]>str[i+1])
		{
			char temp=str[i+1];
			str[i+1]=str[i];
			str[i]=temp;
		}
		i++;
	}
	printf("%s",str);
}
