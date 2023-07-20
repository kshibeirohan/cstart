#include<stdio.h>
#include<string.h>
int mystrcmp(const char *s1, const char *s2)
{
	int i=0;
	int s1_len=strlen(s1);
	int s2_len=strlen(s2);
	if(s1_len>s2_len)
		return 1;
	else if(s1_len<s2_len)
		return -1;
	else
	{
		while(*(s1+i)!='\0')
		{
			if(*(s1+i)>*(s2+i))
				return 1;
			else if(*(s1+i)<*(s2+i))
				return -1;
			i++;
		}
		return 0;
	}
}
void main()
{
	char *str = "hello world";
    char *str1 ="hello World";
    int ret = mystrcmp(str1,str);
	printf("%d",ret);
}