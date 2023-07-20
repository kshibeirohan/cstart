#include<stdio.h>
#include<string.h>
int mystrncmp(const char *s1, const char *s2, int n)
{
	int i=0;
	while(i<n)
	{
		if(*(s1+i)>*(s2+i))
			return 1;
		else if(*(s1+i)<*(s2+i))
			return -1;
		i++;
	}
	return 0;
}
void main()
{
	char *str = "hello world";
    char *str1 ="hello";
    int ret = mystrncmp(str1,str,strlen(str1));
	printf("%d",ret);
}