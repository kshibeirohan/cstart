#include<stdio.h>
void main()
{
	int y,m,d,y1,m1,d1,i,time=0,time1=0;
	printf("输入生日");
	scanf("%d %d %d",&y,&m,&d);
	printf("输入现在的时间");
	scanf("%d %d %d",&y1,&m1,&d1);
	for(i=y;i<y1;i++)
	{
		if( i%4 == 0 || i%100 == 0)
		{
			time =time + 366;
		}
		else
		{
			time = time +365;
		}
	}
	if(y1 % 4 == 0 || y1 % 100 == 0)
	{
		switch(m1)
		{
			case 1:
				time=time+d1;
			break;
			case 2:
			time=time+d1+31;
			break;
			case 3:
			time=time+d1+60;
			break;
			case 4:
			time=time+d1+91;
			break;
			case 5:
			time=time+d1+121;
			break;
			case 6:
			time=time+d1+152;
			break;
			case 7:
			time=time+d1+182;
			break;
			case 8:
			time=time+d1+213;
			break;
			case 9:
			time=time+d1+244;
			break;
			case 10:
			time=time+d1+274;
			break;
			case 11:
			time=time+d1+305;
			break;
			case 12:
			time=time+d1+335;
			break;
			default:
			printf("输入年月有错");
			break;
		}

	}
	else
	{
		switch(m1)
		{
			case 1:
			time=time+d1;
			break;
			case 2:
			time=time+d1+31;
			break;
			case 3:
			time=time+d1+59;
			break;
			case 4:
			time=time+d1+90;
			break;
			case 5:
			time=time+d1+120;
			break;
			case 6:
			time=time+d1+151;
			break;
			case 7:
			time=time+d1+181;
			break;
			case 8:
			time=time+d1+212;
			break;
			case 9:
			time=time+d1+243;
			break;
			case 10:
			time=time+d1+273;
			break;
			case 11:
			time=time+d1+304;
			break;
			case 12:
			time=time+d1+334;
			break;
			default:
			printf("输入年月有错");
			break;
		}
	}
	if(y % 4 == 0 || y % 100 == 0)
	{
		switch(m)
		{
			case 1:
			time1=time1+d;
			break;
			case 2:
			time1=time1+d+31;
			break;
			case 3:
			time1=time1+d+60;
			break;
			case 4:
			time1=time1+d+91;
			break;
			case 5:
			time1=time1+d+121;
			break;
			case 6:
			time1=time1+d+152;
			break;
			case 7:
			time1=time1+d+182;
			break;
			case 8:
			time1=time1+d+213;
			break;
			case 9:
			time1=time1+d+244;
			break;
			case 10:
			time1=time1+d+274;
			break;
			case 11:
			time1=time1+d+305;
			break;
			case 12:
			time1=time1+d+335;
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
			time1=time1+d;
			break;
			case 2:
			time1=time1+d+31;
			break;
			case 3:
			time1=time1+d+59;
			break;
			case 4:
			time1=time1+d+90;
			break;
			case 5:
			time1=time1+d+120;
			break;
			case 6:
			time1=time1+d+151;
			break;
			case 7:
			time1=time1+d+181;
			break;
			case 8:
			time1=time1+d+212;
			break;
			case 9:
			time1=time1+d+243;
			break;
			case 10:
			time1=time1+d+273;
			break;
			case 11:
			time1=time1+d+304;
			break;
			case 12:
			time1=time1+d+334;
			break;
			default:
			printf("输入年月有错");
			break;
		}
	}
	printf("加油,你已经努力活了%d天",time-time1);
}