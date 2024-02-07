
#pragma once
#include<iostream>
using namespace std;

template<class T>
class myarray
{
public:
	myarray(int capacity)
	{
		cout << "有参";
		this->m_capacity = capacity;
		this->size = 0;
		this->address = new T[this->m_capacity];
	}
	myarray(const myarray& arr)
	{
		cout << "拷贝";
		this->m_capacity = arr.m_capacity;
		this->size = arr.size;
		this->address = new T[arr.m_capacity];
		for (int i = 0; i < this->size; i++)
		{
			this->address[i] = arr.address[i];
		}
	}
	myarray& operator = (const myarray& arr)
	{
		cout << "opretaer";
		if (this->address != NULL)
		{
			delete[]this->address;
			this->address = NULL;
			this->m_capacity = 0;
			this->size = 0;
		}
		this->m_capacity = arr.m_capacity;
		this->size = arr.size;
		this->address = new T[arr.m_capacity];
		for (int i = 0; i < this->size; i++)
		{
			this->address[i] = arr.address[i];
		}
		return *this;
	}
	~myarray()
	{
		cout << "析构";
		if (this->address != NULL)
		{
			delete[]this->address;
			this->address = NULL;
		}
	}
private:
	T* address;
	int m_capacity;
	int size;
};
