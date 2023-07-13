#include<stdio.h>
void main()
{
	int y,m,d;
	scanf("%d %d %d",&y,&m,&d);
	if( y%4 == 0 || y%100 == 0)
	{
		switch(m)
		{
			case 1:
			printf("%d年%d月%d日是这年的%d天",y,m,d,d);
			break;
			case 2:
			printf("%d年%d月%d日是这年的%d天",y,m,d,31+d);
			break;
			case 3:
			printf("%d年%d月%d日是这年的%d天",y,m,d,60+d);
			break;
			case 4:
			printf("%d年%d月%d日是这年的%d天",y,m,d,91+d);
			break;
			case 5:
			printf("%d年%d月%d日是这年的%d天",y,m,d,121+d);
			break;
			case 6:
			printf("%d年%d月%d日是这年的%d天",y,m,d,152+d);
			break;
			case 7:
			printf("%d年%d月%d日是这年的%d天",y,m,d,182+d);
			break;
			case 8:
			printf("%d年%d月%d日是这年的%d天",y,m,d,213+d);
			break;
			case 9:
			printf("%d年%d月%d日是这年的%d天",y,m,d,244+d);
			break;
			case 10:
			printf("%d年%d月%d日是这年的%d天",y,m,d,274+d);
			break;
			case 11:
			printf("%d年%d月%d日是这年的%d天",y,m,d,305+d);
			break;
			case 12:
			printf("%d年%d月%d日是这年的%d天",y,m,d,335+d);
			break;
			default:
			printf("输入年月有错");
			break;
		}
	}
	else
	{
		switch(m)
		{
			case 1:
			printf("%d年%d月%d日是这年的%d天",y,m,d,d);
			break;
			case 2:
			printf("%d年%d月%d日是这年的%d天",y,m,d,31+d);
			break;
			case 3:
			printf("%d年%d月%d日是这年的%d天",y,m,d,59+d);
			break;
			case 4:
			printf("%d年%d月%d日是这年的%d天",y,m,d,90+d);
			break;
			case 5:
			printf("%d年%d月%d日是这年的%d天",y,m,d,120+d);
			break;
			case 6:
			printf("%d年%d月%d日是这年的%d天",y,m,d,151+d);
			break;
			case 7:
			printf("%d年%d月%d日是这年的%d天",y,m,d,181+d);
			break;
			case 8:
			printf("%d年%d月%d日是这年的%d天",y,m,d,212+d);
			break;
			case 9:
			printf("%d年%d月%d日是这年的%d天",y,m,d,243+d);
			break;
			case 10:
			printf("%d年%d月%d日是这年的%d天",y,m,d,273+d);
			break;
			case 11:
			printf("%d年%d月%d日是这年的%d天",y,m,d,304+d);
			break;
			case 12:
			printf("%d年%d月%d日是这年的%d天",y,m,d,334+d);
			break;
			default:
			printf("输入年月有错");
			break;
		}
	}
	
}