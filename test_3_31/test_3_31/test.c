#define _CRT_SECURE_NO_WARNINGS 1
//д����
//1.д��������(main����)
//100-500�� ����
//���ִ���أ�-C�����Ǵ��������ĵ�һ�п�ʼִ�е�
//����c���Դ����е���main����-���

//д�����룬����Ļ�ϴ�ӡ������
//printf - �⺯�� - ����Ļ�ϴ�ӡ��Ϣ��
//printf ��ʹ�ã�Ҳ�ô��к�������ͷ�ļ� stdio.h��

//#include <stdio.h>
//
//int main()
//{
//	printf("����\n");
//
//	return 0;
//}

//����+����+���д���
//��ݼ� 1.Ctrl + F5
//		 2.�˵��У�����ʽ�� ->����ʼִ�в����ԡ�
//����������е�̫�죬û�п���
//Ϊ�˿��������������Ŀ���� ������-ϵͳ-��ϵͳ-����̨


//��������
//��������� - д���� - ��������е�����
//���������������������е����⣡
//�����̳� - �ϼ���Ʒ���۸� - 15.6Ԫ - С�� 1.56*10`1
//���� - 50
//C���� - ������
//		- ����


//a
//'a' - �ַ�a

//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//long
//	//long long
//
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//	return 0;
//}


//#include <stdio.h>

//int main()
//{
//	//printf("hehe\n");
//	//printf("hehe\n");
//	//printf("%d", 100);//��ӡһ������ - %d
//
//	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
//	//��λ�ֽ�(byte)
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//������һ������
//	//����	����������	= ����ֵ;//�Ƽ�
//	//���� ����������;//���Ƽ�
//
//	int age = 20;
//	double weight = 75;
//
//	age = age + 1;
//	weight = weight - 10;
//	
//	printf("%d\n", age);
//	printf("%lf", weight);
//	return 0;
//}

//%d - ����
//%f - float
//%lf - double


//ȫ�ֱ��� - {}�ⲿ�����
//int a = 100;
//
//#include <stdio.h>
//int main()
//{
//	//�ֲ����� - {}�ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//�������ȫ�ֱ����;ֲ�����������д��һ����
//	int a = 10;
// 
//	printf("%d\n", a);
//
//	return 0;
//}

//дһ���������������ĺ�
//scanf���������뺯��

#include <stdio.h>
int main()
{

	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);

	return 0;
}


