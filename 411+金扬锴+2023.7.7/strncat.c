#include<stdio.h>
#include<string.h>
char *mystrcat(char *dest, const char *src,int n)
{
   int dest_len = strlen(dest);
   int i;

   for (i = 0 ;i<n && src[i] != '\0' ; i++)
	   dest[dest_len + i] = src[i];
   dest[dest_len + i] = '\0';
   return dest;
}
void main()
{
	char *str = "hello world";
    char str1[20] = {'1', '2'};
    mystrcat(str1, str,strlen(str));
	printf("%s",str1);
}