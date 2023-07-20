#include<stdio.h>
#include<string.h>
char *mystrncpy(char *dest, const char *src, int n)
{
   int i;
   for (i = 0; i < n && src[i] != '\0'; i++)
	   dest[i] = src[i];
   for ( ; i < n; i++)
	   dest[i] = '\0';
   return dest;
}
void main()
{
	char *s="Hello World";
	char arr[strlen(s)+1];
	int i;
	mystrncpy(arr,s,sizeof(arr)-1);
	for(i=0;i<sizeof(arr)-1;i++)
		printf("%c",arr[i]);
}
