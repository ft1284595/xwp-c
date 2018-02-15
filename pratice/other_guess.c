#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int stime, a, z, t, i, c, m, g, s, j, k, l[4];  /*j:数字正确的位数 k:位置正确的位数*/
	long ltime;
	ltime=time(NULL);  /*l:数字相同时，人所猜中数字的正确位置*/
	stime=(unsigned int)ltime/2;
	srand(stime);
	if( (rand()%10000) >= 1000 && (rand()%10000) <= 9999 )
		z=rand()%10000;  /*计算机想一个随机数*/
	printf("机器输入四位数****\n");
	printf("\n");
	for(c=1; ; c++) /*c: 猜数次数计数器*/
	{
		printf("请输入你猜的四位数:");
		scanf("%d", &g); /*请人猜*/
		a=z;
		j=0;
		k=0;
		l[0]=l[1]=l[2]=l[3]=0;
		for(i=1; i<5; i++) /*i:原数中的第i位数。个位为第一位，千位为第4位*/
		{
			s=g;
			m=1;
			for(t=1; t<5; t++)  /*人所猜想的数*/
			{
				if(a%10 == s%10)  /*若第i位与人猜的第t位相同*/
				{
					if(m && t!=l[0] && t!=l[1] && t!=l[2] && t!=l[3])
					{
						j++;
						m=0;
						l[j-1]=t;  /*若该位置上的数字尚未与其它数字"相同"*/
					}  /*记录相同数字时，该数字在所猜数字中的位置*/
					if(i==t)
						k++; /*若位置也相同，则计数器k加1*/
				}
				s/=10;
			}
			a/=10;
		}
		printf("你猜的结果是");
		printf("%dA%dB\n", j, k);
		if(k == 4)
		{
			printf("****你赢了*****\n");
			printf("\n~~********~~\n");
			break;  /*若位置全部正确，则人猜对了，退出*/
		}
	}
	printf("你总共猜了 %d 次.\n",c);
	return 0;
}