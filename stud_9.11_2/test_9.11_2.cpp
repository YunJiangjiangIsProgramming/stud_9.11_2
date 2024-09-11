#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//#include<string>
//#include <windows.h>
//
//
//using namespace std;
//
//
////double Division(int a, int b)
////{
////	// 当b == 0时抛出异常
////	if (b == 0)
////		throw "Division by zero condition!";
////	else
////		return ((double)a / (double)b);
////}
//
//void Func()
//{
//	int* p1 = new int[10];
//	
//
//	try
//	{
//		int len, time;
//		cin >> len >> time;
//		cout << Division(len, time) << endl; // throw  const char*对象
//		// func()   // throw double对象
//	}
//	catch (...)  // 表示可以捕获任意类型的异常
//	{
//		//cout << errmsg << endl;
//		cout << "delete" << p1 << endl;
//		delete[] p1;
//
//		throw;  // 重新抛出，捕获到什么就抛出什么
//	}
//	//catch (const char* errmsg)
//	//{
//	//	//cout << errmsg << endl;
//	//	cout << "delete" << p1 << endl;
//	//	delete[] p1;
//
//	//	throw errmsg;  // 重新抛出
//	//}
//
//	cout << "delete"<< p1 << endl;
//	delete[] p1;
//}
//
//void test_try()
//{
//	try
//	{
//		Func();
//	}
//	catch (const char* errmsg) 
//	{
//		cout << errmsg << endl;
//		// 记录日志，进行统一处理
//	}
//	catch (int errid)
//	{
//		cout << errid << endl;
//	}
//
//}
//
//
//double Division(int a, int b)
//{
//	try
//	{
//		// 当b == 0时抛出异常
//		if (b == 0)
//		{
//			string s("Division by zero condition!");
//			throw s;
//		}
//		else
//		{
//			return ((double)a / (double)b);
//		}
//	}
//	catch (const string& e)
//	{
//		cout << e << endl;
//	}
//}
//
////void Func()
////{
////	int len, time;
////	cin >> len >> time;
////	cout << Division(len, time) << endl; 
////}
//
//void test_3()
//{
//
//
//	try
//	{
//		Func();
//	}
//	catch (int errid)
//	{
//		cout << errid << endl;
//	}
//	catch (...)
//	{
//		cout << "未知异常" << endl;
//	}
//
//
//}
//
//
//class Exception
//{
//public:
//	Exception(const string& errmsg, int id)
//		:_errmsg(errmsg)
//		, _id(id)
//	{}
//
//	virtual string what() const
//	{
//		return _errmsg;
//	}
//protected:
//	string _errmsg;
//	int _id;
//};
//
//class SqlException : public Exception
//{
//public:
//	SqlException(const string& errmsg, int id, const string& sql)
//		:Exception(errmsg, id)
//		, _sql(sql)
//	{}
//
//	virtual string what() const
//	{
//		string str = "SqlException:";
//		str += _errmsg;
//		str += "->";
//		str += _sql;
//
//		return str;
//	}
//private:
//	const string _sql;
//};
//
//class CacheException : public Exception
//{
//public:
//	CacheException(const string& errmsg, int id)
//		:Exception(errmsg, id)
//	{}
//
//	virtual string what() const
//	{
//		string str = "CacheException:";
//		str += _errmsg;
//		return str;
//	}
//};
//
//
//
//class HttpServerException : public Exception
//{
//public:
//	HttpServerException(const string& errmsg, int id, const string& type)
//		:Exception(errmsg, id)
//		, _type(type)
//	{}
//
//	virtual string what() const
//	{
//		string str = "HttpServerException:";
//		str += _type;
//		str += ":";
//		str += _errmsg;
//
//		return str;
//	}
//
//private:
//	const string _type;
//};
//
//void SQLMgr()
//{
//	srand(time(0));
//	if (rand() % 7 == 0)
//	{
//		throw SqlException("权限不足", 100, "select * from name = '张三'");
//	}
//
//	cout << "调用成功" << endl;
//}
//
//void CacheMgr()
//{
//	srand(time(0));
//	if (rand() % 5 == 0)
//	{
//		throw CacheException("权限不足", 100);
//		//throw 1;
//	}
//	else if (rand() % 6 == 0)
//	{
//		throw CacheException("数据不存在", 101);
//	}
//
//	SQLMgr();
//}
//
//void HttpServer()
//{
//	// ...
//	srand(time(0));
//	if (rand() % 3 == 0)
//	{
//		throw HttpServerException("请求资源不存在", 100, "get");
//	}
//	else if (rand() % 4 == 0)
//	{
//		throw HttpServerException("权限不足", 101, "post");
//	}
//
//	CacheMgr();
//}
//
//void test_2()
//{
//
//
//
//	while (1)
//	{
//		Sleep(1000);
//
//		try {
//			HttpServer();
//		}
//		catch (const Exception& e) // 这里捕获父类对象就可以
//		{
//			// 多态
//			cout << e.what() << endl;
//		}
//		catch (const exception& e)
//		{
//			// ...
//		}
//		catch (...)
//		{
//			cout << "Unkown Exception" << endl;
//		}
//	}
//
//
//}
//
//void test3()
//{
//
//
//
//	try {
//		vector<int> v(10, 5);
//		// 这里如果系统内存不够也会抛异常
//		//v.reserve(1000000000);
//
//		// 这里越界会抛异常
//		v.at(10) = 100;
//	}
//	catch (const exception& e) // 这里捕获父类对象就可以
//	{
//		cout << e.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Unkown Exception" << endl;
//	}
//}
//
//int main()
//{
//	
//	test_2();
//	test_3();
//	return 0;
//}



#include <iostream>
#include <vector>
#include <string>
#include <windows.h>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to perform division and throw an exception if division by zero is attempted
double Division(int a, int b)
{
    if (b == 0)
    {
        throw string("Division by zero condition!");
    }
    return ((double)a / (double)b);
}

// Function that demonstrates exception handling with dynamic memory allocation
void Func()
{
    int* p1 = new int[10];
    try
    {
        int len, time;
        cin >> len >> time;
        cout << Division(len, time) << endl;
    }
    catch (...)
    {
        cout << "Exception caught in Func()" << endl;
        throw;  // Re-throw the caught exception
    }
    delete[] p1;
}

// Function to test try-catch blocks
void test_try()
{
    try
    {
        Func();
    }
    catch (const char* errmsg)
    {
        cout << "Caught char* exception: " << errmsg << endl;
    }
    catch (...)
    {
        cout << "Caught unknown exception" << endl;
    }
}

// Base exception class
class Exception
{
public:
    Exception(const string& errmsg, int id) : _errmsg(errmsg), _id(id) {}
    virtual string what() const { return _errmsg; }
protected:
    string _errmsg;
    int _id;
};

// Derived exception for SQL errors
class SqlException : public Exception
{
public:
    SqlException(const string& errmsg, int id, const string& sql) : Exception(errmsg, id), _sql(sql) {}
    virtual string what() const override
    {
        return "SqlException: " + _errmsg + " -> " + _sql;
    }
private:
    string _sql;
};

// Derived exception for cache errors
class CacheException : public Exception
{
public:
    CacheException(const string& errmsg, int id) : Exception(errmsg, id) {}
    virtual string what() const override
    {
        return "CacheException: " + _errmsg;
    }
};

// Function that simulates SQL operations and throws a SqlException
void SQLMgr()
{
    srand(time(0));
    if (rand() % 7 == 0)
    {
        throw SqlException("权限不足", 100, "select * from name = '张三'");
    }
    cout << "调用成功" << endl;
}

// Function that simulates cache operations and throws a CacheException
void CacheMgr()
{
    srand(time(0));
    if (rand() % 5 == 0)
    {
        throw CacheException("权限不足", 100);
    }
    else if (rand() % 6 == 0)
    {
        throw CacheException("数据不存在", 101);
    }
    SQLMgr();
}

// Function that simulates HTTP server operations and throws an HttpServerException
void HttpServer()
{
    if (rand() % 3 == 0)
    {
        //throw HttpServerException("请求资源不存在", 100, "get");
    }
    else if (rand() % 4 == 0)
    {
        //throw HttpServerException("权限不足", 101, "post");
    }
    CacheMgr();
}

// Function to test exception handling with inheritance
void test_2()
{
    while (true)
    {
        Sleep(1000);
        try
        {
            HttpServer();
        }
        catch (const Exception& e)
        {
            cout << e.what() << endl;
        }
        catch (...)
        {
            cout << "Unkown Exception" << endl;
        }
    }
}

// Function to test exception handling with standard library exceptions
void test3()
{
    try
    {
        vector<int> v(10, 5);
        v.at(10) = 100; // This will throw std::out_of_range exception
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "Unkown Exception" << endl;
    }
}

int main()
{
    test_2();
    test3();
    return 0;
}