#include<iostream>
using namespace std;
//函数对象使用
/*
特点：
1.函数对象在使用时可以像普通函数那样调用，可以有参数，可以有返回值
2.函数对象超出普通函数的概念，函数对象可以有自己的状态
3.函数对象可以作为参数传递
*/
//1.函数对象在使用时可以像普通函数那样调用，可以有参数，可以有返回值
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
//	cout << "调用次数为：" << myprint.count << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//谓词
/*
概念：
返回bool类型的仿函数称为谓词
如果operator接受一个参数成为一元谓词
如果operator接受两个参数成为二元谓词
*/
//一元谓词
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
//}//有问题 没写完
//二元谓词
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
//内建函数对象
//算数仿函数
//#include<functional>
//void test()
//{
//	//negate： 一元仿函数  取反仿函数 negate:否定，取消
//	negate<int>n;
//	cout << n(50) << endl;//-50
//}
//void test01()
//{
//	//二元仿函数
//	plus<int>p;
//	cout << p(10, 20) << endl;//30
//}
//int main()
//{
//	test();
//	test01();
//	return 0;
//}
//逻辑仿函数
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
//	sort(v.begin(), v.end());//默认从小到大
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	sort(v.begin(), v.end(),greater<int>());//greather为系统自带的逻辑仿函数
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
//逻辑仿函数
/*
logical_and<T> 逻辑与
logical_or<T>逻辑或
logical_not<T>逻辑非
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
//	//搬运函数（transform）
//	vector<bool>v1;
//	v1.resize(v.size());//这个一定得有 因为刚开辟的v1没有空间
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
//常用的遍历算法
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
//	//普通函数版本
//	for_each(v.begin(), v.end(), print01);//0 1 2 3 4 5 6 7 8 9
//	cout << endl;
//	//仿函数版本
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
//常用查找方法（find）
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
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了： " << *it << endl;//找到了： 5
//	}
//	vector<int>::iterator itt = find(v.begin(), v.end(), 11);
//	if (itt == v.end())
//	{
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了： " << *itt << endl;//没有找到
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
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：姓名  " << ittt->m_name << " 年龄： "<<ittt->m_age<<endl;//找到了：姓名  ddd 年龄： 40
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
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了： " << *it << endl;//找到了： 6
//	}
//	//查找自定义类型
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
//		cout << "没有找到" << endl;
//	}
//	else
//	{
//		cout << "找到了：姓名：" << itt->m_name << " 年龄：" << itt->m_age << endl;//找到了：姓名：ccc 年龄：30
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//adjacent_find:查找相邻重复元素  adjacent:相邻的，毗邻的
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
//		cout << "找不到" << endl;
//	}
//	else
//	{
//		cout << "重复相邻元素为:" << *pos << endl;//重复相邻元素为:3
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//binary_search:二分查找法（只能查找有序序列，无序序列结果未知）
//#include<vector>
//#include<algorithm>
//void test()
//{
//	vector<int>v;
//	//有序情况
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "找到了" << endl;//找到了
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//	//无序情况
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	v.push_back(3);
//	bool ret1 = binary_search(v1.begin(), v1.end(), 3);
//	if (ret1)
//	{
//		cout << "找到了" << endl;
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}















