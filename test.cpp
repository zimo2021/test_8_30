#include<iostream>
using namespace std;
//��������ʹ��
/*
�ص㣺
1.����������ʹ��ʱ��������ͨ�����������ã������в����������з���ֵ
2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
3.�������������Ϊ��������
*/
//1.����������ʹ��ʱ��������ͨ�����������ã������в����������з���ֵ
//#include<string>
//class Myadd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//class Myprint
//{
//public:
//	Myprint()
//	{
//		this->count = 0;
//	}
//	void operator()(string s)
//	{
//		cout << s << endl;
//		count++;
//	}
//	int count;
//};
//void test()
//{
//	Myadd myadd;
//	cout << myadd(10, 10) << endl;//20
//	Myprint myprint;
//	myprint("hello world");
//	myprint("hello world");
//	myprint("hello world");
//	myprint("hello world");
//	cout << "���ô���Ϊ��" << myprint.count << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//ν��
/*
���
����bool���͵ķº�����Ϊν��
���operator����һ��������ΪһԪν��
���operator��������������Ϊ��Ԫν��
*/
//һԪν��
//#include<vector>
//struct Find
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 5;
//	}
//};
//void test()
//{
//	vector<int>v;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), Find());
//
//}
//int main()
//{
//	test();
//	return 0;
//}//������ ûд��
//��Ԫν��
//#include<vector>
//#include<algorithm>
//class Mysort
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;//10 20 30 40 50
//	sort(v.begin(), v.end(), Mysort());
//	cout << "----------------------------------" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;//50 40 30 20 10
//}
//int main()
//{
//	test();
//	return 0;
//}
//�ڽ���������
//�����º���
//#include<functional>
//void test()
//{
//	//negate�� һԪ�º���  ȡ���º��� negate:�񶨣�ȡ��
//	negate<int>n;
//	cout << n(50) << endl;//-50
//}
//void test01()
//{
//	//��Ԫ�º���
//	plus<int>p;
//	cout << p(10, 20) << endl;//30
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}
//�߼��º���
//#include<vector>
//#include<functional>
//#include<algorithm>
//void test()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	sort(v.begin(), v.end());//Ĭ�ϴ�С����
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	sort(v.begin(), v.end(),greater<int>());//greatherΪϵͳ�Դ����߼��º���
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}
//�߼��º���
/*
logical_and<T> �߼���
logical_or<T>�߼���
logical_not<T>�߼���
*/
//#include<vector>
//#include<algorithm>
//#include<functional>
//void test()
//{
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";//1 0 1 0
//	}
//	cout << endl;
//	//���˺�����transform��
//	vector<bool>v1;
//	v1.resize(v.size());//���һ������ ��Ϊ�տ��ٵ�v1û�пռ�
//	transform(v.begin(), v.end(), v1.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
//	{
//		cout << *it << " ";//0 1 0 1
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//���õı����㷨
//1.for_each
//#include<vector>
//#include<functional>
//#include<algorithm>
//void print01(int v1)
//{
//	cout << v1 << " ";
//}
//class print02
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//};
//void test()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	//��ͨ�����汾
//	for_each(v.begin(), v.end(), print01);//0 1 2 3 4 5 6 7 8 9
//	cout << endl;
//	//�º����汾
//	for_each(v.begin(), v.end(), print02());
//	cout << endl;//0 1 2 3 4 5 6 7 8 9
//}
//int main()
//{
//	test();
//	return 0;
//}
//2.transform
//#include<vector>
//#include<functional>
//#include<algorithm>
//class Transform
//{
//public:
//	int operator()(int v)
//	{
//		return v;
//	}
//};
//class print01
//{
//public:
//	void operator()(int v)
//	{
//		cout << v << " ";
//	}
//};
//void test()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>v2;
//	v2.resize(v.size());
//	transform(v.begin(), v.end(), v2.begin(), Transform());
//	for_each(v2.begin(), v2.end(), print01());
//	cout << endl;//0 1 2 3 4 5 6 7 8 9
//}
//int main()
//{
//	test();
//	return 0;
//}
//���ò��ҷ�����find��
//#include<vector>
//#include<algorithm>
//#include<string>
//class person
//{
//public:
//	person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(const person& p)
//	{
//		if (p.m_name == this->m_name&&p.m_age == this->m_age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_name;
//	int m_age;
//};
//void test()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� " << *it << endl;//�ҵ��ˣ� 5
//	}
//	vector<int>::iterator itt = find(v.begin(), v.end(), 11);
//	if (itt == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� " << *itt << endl;//û���ҵ�
//	}
//	vector<person>v1;
//	person p1("aaa", 10);
//	person p2("bbb", 20);
//	person p3("ccc", 30);
//	person p4("ddd", 40);
//	person p5("ddd", 40);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	vector<person>::iterator ittt = find(v1.begin(), v1.end(), p5);
//	if (ittt == v1.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�����  " << ittt->m_name << " ���䣺 "<<ittt->m_age<<endl;//�ҵ��ˣ�����  ddd ���䣺 40
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//find_if
//#include<vector>
//#include<algorithm>
//#include<string>
//class greater5
//{
//public:
//	bool operator()(int v)
//	{
//		return v > 5;
//	}
//};
//class person
//{
//public:
//	person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	
//	string m_name;
//	int m_age;
//};
//class grearter20
//{
//public:
//	bool operator()(const person& p)
//	{
//		return p.m_age > 20;
//	}
//};
//void test()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), greater5());
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� " << *it << endl;//�ҵ��ˣ� 6
//	}
//	//�����Զ�������
//	vector<person>v1;
//	person p1("aaa", 10);
//	person p2("bbb", 20);
//	person p3("ccc", 30);
//	person p4("ddd", 40);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	vector<person>::iterator itt = find_if(v1.begin(), v1.end(), grearter20());
//	if (itt == v1.end())
//	{
//		cout << "û���ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ˣ�������" << itt->m_name << " ���䣺" << itt->m_age << endl;//�ҵ��ˣ�������ccc ���䣺30
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//adjacent_find:���������ظ�Ԫ��  adjacent:���ڵģ����ڵ�
//#include<vector>
//#include<algorithm>
//void test()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(1);
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(0);
//	v.push_back(3);
//	v.push_back(3);
//	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
//	if (pos == v.end())
//	{
//		cout << "�Ҳ���" << endl;
//	}
//	else
//	{
//		cout << "�ظ�����Ԫ��Ϊ:" << *pos << endl;//�ظ�����Ԫ��Ϊ:3
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//binary_search:���ֲ��ҷ���ֻ�ܲ����������У��������н��δ֪��
//#include<vector>
//#include<algorithm>
//void test()
//{
//	vector<int>v;
//	//�������
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "�ҵ���" << endl;//�ҵ���
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//	//�������
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	v.push_back(3);
//	bool ret1 = binary_search(v1.begin(), v1.end(), 3);
//	if (ret1)
//	{
//		cout << "�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}















