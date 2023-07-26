#include<stdio.h>
#include<string.h>
void mystrcpy(char *dest, const char *src)
{
	int i=0;
	while(1)
	{
		if(src[i]!='\0')
			dest[i] = src[i];
		else
		{
			dest[i] = src[i];
			break;
		}
		i++;
	}
}
void main()
{
	char *s="Hello World";
	char arr[strlen(s)+1];
	mystrcpy(arr,s);
	printf("%s",arr);
}