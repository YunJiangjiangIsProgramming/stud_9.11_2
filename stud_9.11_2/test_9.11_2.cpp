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
////	// ��b == 0ʱ�׳��쳣
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
//		cout << Division(len, time) << endl; // throw  const char*����
//		// func()   // throw double����
//	}
//	catch (...)  // ��ʾ���Բ����������͵��쳣
//	{
//		//cout << errmsg << endl;
//		cout << "delete" << p1 << endl;
//		delete[] p1;
//
//		throw;  // �����׳�������ʲô���׳�ʲô
//	}
//	//catch (const char* errmsg)
//	//{
//	//	//cout << errmsg << endl;
//	//	cout << "delete" << p1 << endl;
//	//	delete[] p1;
//
//	//	throw errmsg;  // �����׳�
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
//		// ��¼��־������ͳһ����
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
//		// ��b == 0ʱ�׳��쳣
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
//		cout << "δ֪�쳣" << endl;
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
//		throw SqlException("Ȩ�޲���", 100, "select * from name = '����'");
//	}
//
//	cout << "���óɹ�" << endl;
//}
//
//void CacheMgr()
//{
//	srand(time(0));
//	if (rand() % 5 == 0)
//	{
//		throw CacheException("Ȩ�޲���", 100);
//		//throw 1;
//	}
//	else if (rand() % 6 == 0)
//	{
//		throw CacheException("���ݲ�����", 101);
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
//		throw HttpServerException("������Դ������", 100, "get");
//	}
//	else if (rand() % 4 == 0)
//	{
//		throw HttpServerException("Ȩ�޲���", 101, "post");
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
//		catch (const Exception& e) // ���ﲶ�������Ϳ���
//		{
//			// ��̬
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
//		// �������ϵͳ�ڴ治��Ҳ�����쳣
//		//v.reserve(1000000000);
//
//		// ����Խ������쳣
//		v.at(10) = 100;
//	}
//	catch (const exception& e) // ���ﲶ�������Ϳ���
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
        throw SqlException("Ȩ�޲���", 100, "select * from name = '����'");
    }
    cout << "���óɹ�" << endl;
}

// Function that simulates cache operations and throws a CacheException
void CacheMgr()
{
    srand(time(0));
    if (rand() % 5 == 0)
    {
        throw CacheException("Ȩ�޲���", 100);
    }
    else if (rand() % 6 == 0)
    {
        throw CacheException("���ݲ�����", 101);
    }
    SQLMgr();
}

// Function that simulates HTTP server operations and throws an HttpServerException
void HttpServer()
{
    if (rand() % 3 == 0)
    {
        //throw HttpServerException("������Դ������", 100, "get");
    }
    else if (rand() % 4 == 0)
    {
        //throw HttpServerException("Ȩ�޲���", 101, "post");
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