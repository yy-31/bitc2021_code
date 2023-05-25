#define _CRT_SECURE_NO_WARNINGS 1
//写代码
//1.写出主函数(main函数)
//100-500行 代码
//如何执行呢？-C语言是从主函数的第一行开始执行的
//所以c语言代码中得有main函数-入口

//写个代码，在屏幕上打印：比特
//printf - 库函数 - 在屏幕上打印信息的
//printf 的使用，也得打招呼（引用头文件 stdio.h）

//#include <stdio.h>
//
//int main()
//{
//	printf("比特\n");
//
//	return 0;
//}

//编译+链接+运行代码
//快捷键 1.Ctrl + F5
//		 2.菜单中：【调式】 ->【开始执行不调试】
//如果程序运行的太快，没有看到
//为了看到结果需设置项目属性 链接器-系统-子系统-控制台


//数据类型
//计算机语言 - 写程序 - 解决生活中的问题
//必须有能力来描述生活中的问题！
//购物商城 - 上架商品，价格 - 15.6元 - 小数 1.56*10`1
//年龄 - 50
//C语言 - 浮点数
//		- 整形


//a
//'a' - 字符a

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//	return 0;
//}


//#include <stdio.h>

//int main()
//{
//	//printf("hehe\n");
//	//printf("hehe\n");
//	//printf("%d", 100);//打印一个整数 - %d
//
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//	//单位字节(byte)
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
//	//创建的一个变量
//	//类型	变量的名字	= 变量值;//推荐
//	//类型 变量的名字;//不推荐
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

//%d - 整数
//%f - float
//%lf - double


//全局变量 - {}外部定义的
//int a = 100;
//
//#include <stdio.h>
//int main()
//{
//	//局部变量 - {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
// 
//	printf("%d\n", a);
//
//	return 0;
//}

//写一个代码求两个数的和
//scanf函数是输入函数

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


