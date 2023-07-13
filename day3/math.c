#include<stdio.h>
void main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	switch(c)
	{
		case '+':
			printf("%d%c%d=%d\n",a,c,b,a+b);
			break;
		case '-':
			printf("%d%c%d=%d\n",a,c,b,a-b);
			break;
		case '*':
			printf("%d%c%d=%d\n",a,c,b,a*b);
			break;
		case '/':
			printf("%d%c%d=%d\n",a,c,b,a/b);
			break;
		case '%':
			printf("%d%c%d=%d\n",a,c,b,a%b);
			break;	
		default:
			printf("输入有误\n");
	}
} 