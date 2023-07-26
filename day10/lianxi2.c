#include<stdio.h>
#include<string.h>
void main()
{
	char str[100000];
	gets(str);
	int i,eng=0,math=0,space=0,other=0;
	for(i=0;i<=strlen(str);i++)
	{
		if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
			eng += 1;
		else if(str[i]>='0'&&str[i]<='9')
			math += 1;
		else if(str[i]==' ')
			space += 1;
		else if(str[i] != '\0')
			other += 1;
	}		
	printf("%d %d %d %d",eng,math,space,other);
}