#include<iostream>
using namespace std;

//// ȫ�ֱ���
//int a_a;
//int b_b;
//
//// const ���ε�ȫ�ֱ���
//const int c_l_a = 5;
//const int c_l_b = 1;
//int main()
//{
//	// �ֲ�����
//	int a, b;
//	cout << "�ֲ�����a�ĵ�ַ��" << (int) & a << endl;
//	cout << "�ֲ�����b�ĵ�ַ��" << (int) & b << endl;
//
//	cout << "ȫ�ֱ���a_a�ĵ�ַ��" << (int)&a_a << endl;
//	cout << "ȫ�ֱ���b_b�ĵ�ַ��" << (int)&b_b << endl;
//
//	// ��̬���� - ����ͨ����ǰ��static
//	static int a_a_a;
//	static int b_b_b;
//	cout << "��̬����a_a_a�ĵ�ַ��" << (int)&a_a_a << endl;
//	cout << "��̬����b_b_b�ĵ�ַ��" << (int)&b_b_b << endl;
//
//	// ����
//	// �ַ�������
//	cout << "�ַ���������ַΪ��" << (int)&"hello world" << endl;
//	cout << "�ַ���������ַΪ��" << (int)&"hello baby" << endl;
//
//	// const���εı���
//	// const���ε�ȫ�ֱ���
//	cout << "ȫ�ֱ���c_l_a��ַΪ��" << (int)&c_l_a << endl;
//	cout << "ȫ�ֱ���c_l_b��ַΪ��" << (int)&c_l_b << endl;
//
//	// const���εľֲ�����
//	const int c_g_a = 5;
//	const int c_g_b = 6;
//	cout << "�ֲ�����c_g_a��ַΪ��" << (int)&c_g_a << endl;
//	cout << "�ֲ�����c_g_b��ַΪ��" << (int)&c_g_b << endl;
//	return 0;
//}

//int* func() // ��������βΣ����β�����Ҳ�����ջ��
//{
//	int a = 500; // �ֲ������������ջ��������ִ������Զ��ͷ�
//	return &a;	 // ���ؾֲ������ĵ�ַ
//}
//int main()
//{
//	int* p = func();
//	cout << *p << endl;	// ��������������ʱ�����ݻ��ܴ�ӡ1��
//	cout << *p << endl; // �������룬�Ƿ�������
//	return 0;
//}

//int* func()
//{
//	//       new ����(��ʶֵ);���ص����������ڴ�ĵ�ַ  
//	int* p = new int(10);
//	// ��ָ��p����ջ�ϣ��������������ĵ�ַ�ڶ���
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

	delete p; // �ͷ�p�ռ�
}
void test2()
{
	int* parr = new int[10]; //newһ����10�����ݵ���������
	for (int i = 0; i < 10; i++)
	{
		parr[i] = i + 10; // ��ֵ����10-19
	}
	for (int i = 0; i < 10; i++)
	{
		cout << parr[i] << endl; // ��ӡ
	}
	// �ͷŶ�������  - Ҫ��[]
	delete[] parr;
}
int main()
{
	//test1();
	test2();
	return 0;
}