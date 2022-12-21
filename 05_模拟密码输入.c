#include<stdio.h>
int main()
{

	int a;
	int i=0;
	/*char a[6];*/						//用字符串不行
	
	printf("请输入六位数字密码,您只有3次机会：");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a);
		if(a==123456)
		/*scanf("%s",a);*/
		/*if(a=="123456")*/
		{
			printf("密码正确！\n");
			break;
		}
		else
		{	
			printf("密码错误，您还有%d次机会\n",2-i);
		}
	}
	if(i>=3)
		printf("错误次数过多，请明天再试。\n");
	/*printf("请输入字符：");
	scanf("%s",&a);
	printf("\n您输入的字符为：%s",a);*/
	while(1);
	return 0;

}