#include<iostream>
using namespace std;

//// 全局变量
//int a_a;
//int b_b;
//
//// const 修饰的全局变量
//const int c_l_a = 5;
//const int c_l_b = 1;
//int main()
//{
//	// 局部变量
//	int a, b;
//	cout << "局部变量a的地址：" << (int) & a << endl;
//	cout << "局部变量b的地址：" << (int) & b << endl;
//
//	cout << "全局变量a_a的地址：" << (int)&a_a << endl;
//	cout << "全局变量b_b的地址：" << (int)&b_b << endl;
//
//	// 静态变量 - 在普通变量前加static
//	static int a_a_a;
//	static int b_b_b;
//	cout << "静态变量a_a_a的地址：" << (int)&a_a_a << endl;
//	cout << "静态变量b_b_b的地址：" << (int)&b_b_b << endl;
//
//	// 常量
//	// 字符串常量
//	cout << "字符串常量地址为：" << (int)&"hello world" << endl;
//	cout << "字符串常量地址为：" << (int)&"hello baby" << endl;
//
//	// const修饰的变量
//	// const修饰的全局变量
//	cout << "全局变量c_l_a地址为：" << (int)&c_l_a << endl;
//	cout << "全局变量c_l_b地址为：" << (int)&c_l_b << endl;
//
//	// const修饰的局部变量
//	const int c_g_a = 5;
//	const int c_g_b = 6;
//	cout << "局部变量c_g_a地址为：" << (int)&c_g_a << endl;
//	cout << "局部变量c_g_b地址为：" << (int)&c_g_b << endl;
//	return 0;
//}

//int* func() // 而如果有形参，则形参数据也存放在栈区
//{
//	int a = 500; // 局部变量，存放在栈区，程序执行完后自动释放
//	return &a;	 // 返回局部变量的地址
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;	// 当编译器做保留时，数据还能打印1次
//	cout << *p << endl; // 将是乱码，非法访问了
//	return 0;
//}

//int* func()
//{
//	//       new 类型(初识值);返回的是所开辟内存的地址  
//	int* p = new int(10);
//	// 而指针p仍在栈上，不过其所保留的地址在堆上
//	return p;
//}
//int main()
//{
//	int*p= func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}

int* func()
{
	int* p = new int(120);
	return p;
}
void test1()
{
	int* p = func();
	cout << *p;

	delete p; // 释放p空间
}
void test2()
{
	int* parr = new int[10]; //new一个有10个数据的整型数组
	for (int i = 0; i < 10; i++)
	{
		parr[i] = i + 10; // 赋值，从10-19
	}
	for (int i = 0; i < 10; i++)
	{
		cout << parr[i] << endl; // 打印
	}
	// 释放堆区数组  - 要加[]
	delete[] parr;
}
int main()
{
	//test1();
	test2();
	return 0;
}