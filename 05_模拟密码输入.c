#include<stdio.h>
int main()
{

	int a;
	int i=0;
	/*char a[6];*/						//���ַ�������
	
	printf("��������λ��������,��ֻ��3�λ��᣺");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a);
		if(a==123456)
		/*scanf("%s",a);*/
		/*if(a=="123456")*/
		{
			printf("������ȷ��\n");
			break;
		}
		else
		{	
			printf("�������������%d�λ���\n",2-i);
		}
	}
	if(i>=3)
		printf("����������࣬���������ԡ�\n");
	/*printf("�������ַ���");
	scanf("%s",&a);
	printf("\n��������ַ�Ϊ��%s",a);*/
	while(1);
	return 0;

}