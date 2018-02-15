#include <stdio.h>

int add(int a, int b)
{
	printf("%d\t%d\n", a, b);

	return a+b;
}

char max_ch(char *str)
{
	int max, i;
	max = 0;
	for(i=0; str[i]!='\0'; i++)
		if(str[i] > str[max])
			max = i;

	return str[max];
}

int main1(void)
{
	int res;
	int (*p)(int, int);
	p = add;
	//res = add(3,5);
	res = p(3,5);
	printf("%d\n", res);

	char (*q)(char *);
	q = max_ch;
	printf("%c\n", q("hello"));

	return 0;
}

void ox_say(char *str)
{
	printf("%s\n", str);
}
void dog_say(char *str)
{
	printf("%s\n", str);
}
void man_say(char *str)
{
	printf("%s\n", str);
}

void say_what(void (*p)(char *), char *s)
{
	p(s);
}

//函数指针作为函数的参数
int main(void)
{
	int num;
	while(1)
	{
		scanf("%d", &num);
		switch(num)
		{
			case 1:say_what(ox_say, "me me");	break;
			case 2:say_what(dog_say, "wang wang");	break;
			case 3:say_what(man_say, "Oh, yeh");	break;
		}
	}
	return 0;
}
