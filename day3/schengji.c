#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	switch(a/10)
	{
		case 9:
			printf("考试等级为A\n");break;
		case 8:
			printf("考试等级为B\n");break;
		case 7:
			printf("考试等级为C\n");break;
		case 6:
			printf("考试等级为C\n");break;
		case 5:
			printf("考试等级为D\n");break;
		case 4:
			printf("考试等级为D\n");break;
		case 3:
			printf("考试等级为D\n");break;
		case 2:
			printf("考试等级为D\n");break;
		case 1:
			printf("考试等级为D\n");break;
		case 0:
			printf("考试等级为D\n");break;
		default:
			printf("输入成绩有误");
		
	}
}